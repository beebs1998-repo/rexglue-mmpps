#include "mmpps_funcs.0.h"

DEFINE_REX_FUNC(sub_89FF0000) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8a0c2310
	ctx.lr = 0x89FF0008;
	__savegprlr_14(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30097
	ctx.r11.s64 = -1972436992;
	// lis r10,18
	ctx.r10.s64 = 1179648;
	// lis r9,-30160
	ctx.r9.s64 = -1976565760;
	// ori r8,r10,65412
	ctx.r8.u64 = ctx.r10.u64 | 65412;
	// lis r7,-30137
	ctx.r7.s64 = -1975058432;
	// lwz r31,208(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 208);
	// li r6,1
	ctx.r6.s64 = 1;
	// lis r5,-30160
	ctx.r5.s64 = -1976565760;
	// addi r4,r7,5764
	ctx.r4.s64 = ctx.r7.s64 + 5764;
	// lis r3,-30165
	ctx.r3.s64 = -1976893440;
	// lis r30,-30153
	ctx.r30.s64 = -1976107008;
	// stwx r6,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r6.u32);
	// addi r8,r3,12680
	ctx.r8.s64 = ctx.r3.s64 + 12680;
	// lbz r11,7291(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 7291);
	// addi r6,r30,-2476
	ctx.r6.s64 = ctx.r30.s64 + -2476;
	// stb r11,0(r31)
	REX_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// lis r9,-30160
	ctx.r9.s64 = -1976565760;
	// lbz r11,5764(r7)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + 5764);
	// addi r7,r9,22756
	ctx.r7.s64 = ctx.r9.s64 + 22756;
	// stb r11,1(r31)
	REX_STORE_U8(ctx.r31.u32 + 1, ctx.r11.u8);
	// lis r29,-30137
	ctx.r29.s64 = -1975058432;
	// lbz r10,10763(r5)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r5.u32 + 10763);
	// addi r5,r29,-1188
	ctx.r5.s64 = ctx.r29.s64 + -1188;
	// lbz r11,1(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 1);
	// lis r4,-30159
	ctx.r4.s64 = -1976500224;
	// stb r11,2(r31)
	REX_STORE_U8(ctx.r31.u32 + 2, ctx.r11.u8);
	// lis r28,-30160
	ctx.r28.s64 = -1976565760;
	// lbz r11,12680(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 12680);
	// addi r3,r4,-18952
	ctx.r3.s64 = ctx.r4.s64 + -18952;
	// stb r11,3(r31)
	REX_STORE_U8(ctx.r31.u32 + 3, ctx.r11.u8);
	// addi r27,r28,22772
	ctx.r27.s64 = ctx.r28.s64 + 22772;
	// lbz r11,1(r8)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + 1);
	// lis r8,-30126
	ctx.r8.s64 = -1974337536;
	// stb r10,5(r31)
	REX_STORE_U8(ctx.r31.u32 + 5, ctx.r10.u8);
	// lis r10,-30160
	ctx.r10.s64 = -1976565760;
	// stb r11,4(r31)
	REX_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
	// addi r26,r8,-13076
	ctx.r26.s64 = ctx.r8.s64 + -13076;
	// lbz r11,-2476(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + -2476);
	// lis r30,-30165
	ctx.r30.s64 = -1976893440;
	// stb r11,12(r31)
	REX_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// lis r25,-30164
	ctx.r25.s64 = -1976827904;
	// lbz r11,1(r6)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r6.u32 + 1);
	// lis r6,-30165
	ctx.r6.s64 = -1976893440;
	// stb r11,13(r31)
	REX_STORE_U8(ctx.r31.u32 + 13, ctx.r11.u8);
	// lis r24,-30163
	ctx.r24.s64 = -1976762368;
	// lbz r11,22756(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 22756);
	// lis r23,-30165
	ctx.r23.s64 = -1976893440;
	// stb r11,14(r31)
	REX_STORE_U8(ctx.r31.u32 + 14, ctx.r11.u8);
	// lis r22,-30160
	ctx.r22.s64 = -1976565760;
	// lbz r11,1(r7)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + 1);
	// stb r11,15(r31)
	REX_STORE_U8(ctx.r31.u32 + 15, ctx.r11.u8);
	// lbz r11,-1188(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + -1188);
	// stb r11,16(r31)
	REX_STORE_U8(ctx.r31.u32 + 16, ctx.r11.u8);
	// lbz r11,1(r5)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r5.u32 + 1);
	// stb r11,17(r31)
	REX_STORE_U8(ctx.r31.u32 + 17, ctx.r11.u8);
	// lbz r11,-18952(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + -18952);
	// stb r11,18(r31)
	REX_STORE_U8(ctx.r31.u32 + 18, ctx.r11.u8);
	// lbz r11,1(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// stb r11,19(r31)
	REX_STORE_U8(ctx.r31.u32 + 19, ctx.r11.u8);
	// lbz r11,22772(r28)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r28.u32 + 22772);
	// stb r11,20(r31)
	REX_STORE_U8(ctx.r31.u32 + 20, ctx.r11.u8);
	// lbz r11,1(r27)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r27.u32 + 1);
	// stb r11,21(r31)
	REX_STORE_U8(ctx.r31.u32 + 21, ctx.r11.u8);
	// lbz r11,-13076(r8)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + -13076);
	// stb r11,22(r31)
	REX_STORE_U8(ctx.r31.u32 + 22, ctx.r11.u8);
	// lbz r11,1(r26)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r26.u32 + 1);
	// stb r11,23(r31)
	REX_STORE_U8(ctx.r31.u32 + 23, ctx.r11.u8);
	// lbz r11,8399(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 8399);
	// stb r11,24(r31)
	REX_STORE_U8(ctx.r31.u32 + 24, ctx.r11.u8);
	// lbz r11,7214(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 7214);
	// stb r11,25(r31)
	REX_STORE_U8(ctx.r31.u32 + 25, ctx.r11.u8);
	// lbz r11,1475(r25)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r25.u32 + 1475);
	// lbz r9,13206(r6)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r6.u32 + 13206);
	// stb r11,26(r31)
	REX_STORE_U8(ctx.r31.u32 + 26, ctx.r11.u8);
	// lbz r11,-23170(r24)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r24.u32 + -23170);
	// stb r11,27(r31)
	REX_STORE_U8(ctx.r31.u32 + 27, ctx.r11.u8);
	// lbz r11,13735(r23)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r23.u32 + 13735);
	// stb r11,28(r31)
	REX_STORE_U8(ctx.r31.u32 + 28, ctx.r11.u8);
	// lbz r11,14666(r22)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r22.u32 + 14666);
	// stw r31,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// stb r9,30(r31)
	REX_STORE_U8(ctx.r31.u32 + 30, ctx.r9.u8);
	// lis r5,-30137
	ctx.r5.s64 = -1975058432;
	// stb r11,29(r31)
	REX_STORE_U8(ctx.r31.u32 + 29, ctx.r11.u8);
	// lis r4,-30165
	ctx.r4.s64 = -1976893440;
	// addi r3,r5,-1204
	ctx.r3.s64 = ctx.r5.s64 + -1204;
	// addi r10,r4,7212
	ctx.r10.s64 = ctx.r4.s64 + 7212;
	// lis r6,-30163
	ctx.r6.s64 = -1976762368;
	// lbz r11,-1204(r5)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r5.u32 + -1204);
	// lis r5,-30166
	ctx.r5.s64 = -1976958976;
	// stb r11,31(r31)
	REX_STORE_U8(ctx.r31.u32 + 31, ctx.r11.u8);
	// addi r30,r6,8744
	ctx.r30.s64 = ctx.r6.s64 + 8744;
	// lbz r11,1(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// lis r24,-30165
	ctx.r24.s64 = -1976893440;
	// stb r11,32(r31)
	REX_STORE_U8(ctx.r31.u32 + 32, ctx.r11.u8);
	// lis r3,-30165
	ctx.r3.s64 = -1976893440;
	// lbz r11,7212(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 7212);
	// lis r4,-30160
	ctx.r4.s64 = -1976565760;
	// stb r11,33(r31)
	REX_STORE_U8(ctx.r31.u32 + 33, ctx.r11.u8);
	// lis r29,-30165
	ctx.r29.s64 = -1976893440;
	// lbz r11,1(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// lis r8,-30160
	ctx.r8.s64 = -1976565760;
	// stb r11,34(r31)
	REX_STORE_U8(ctx.r31.u32 + 34, ctx.r11.u8);
	// lis r7,-30164
	ctx.r7.s64 = -1976827904;
	// lbz r11,8744(r6)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r6.u32 + 8744);
	// lis r23,-30165
	ctx.r23.s64 = -1976893440;
	// stb r11,35(r31)
	REX_STORE_U8(ctx.r31.u32 + 35, ctx.r11.u8);
	// lis r28,-30137
	ctx.r28.s64 = -1975058432;
	// lbz r11,1(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 1);
	// lis r27,-30163
	ctx.r27.s64 = -1976762368;
	// lbz r10,31834(r5)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r5.u32 + 31834);
	// lis r26,-30160
	ctx.r26.s64 = -1976565760;
	// stb r10,37(r31)
	REX_STORE_U8(ctx.r31.u32 + 37, ctx.r10.u8);
	// lis r25,-30137
	ctx.r25.s64 = -1975058432;
	// stb r11,36(r31)
	REX_STORE_U8(ctx.r31.u32 + 36, ctx.r11.u8);
	// lis r22,-30164
	ctx.r22.s64 = -1976827904;
	// lbz r9,13210(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 13210);
	// lis r21,-30135
	ctx.r21.s64 = -1974927360;
	// lwz r6,5696(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 5696);
	// lis r10,-30160
	ctx.r10.s64 = -1976565760;
	// lwz r5,13728(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 13728);
	// lis r20,-30164
	ctx.r20.s64 = -1976827904;
	// lbz r8,14670(r8)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 14670);
	// lis r19,-30160
	ctx.r19.s64 = -1976565760;
	// lwz r7,1448(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 1448);
	// lwz r4,11916(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 11916);
	// lis r28,-30160
	ctx.r28.s64 = -1976565760;
	// lwz r3,8764(r27)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 8764);
	// lis r27,-30137
	ctx.r27.s64 = -1975058432;
	// lwz r30,27400(r26)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r26.u32 + 27400);
	// lis r26,-30160
	ctx.r26.s64 = -1976565760;
	// lwz r29,-1200(r25)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r25.u32 + -1200);
	// lis r25,-30137
	ctx.r25.s64 = -1975058432;
	// lbz r11,13207(r24)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r24.u32 + 13207);
	// stb r11,38(r31)
	REX_STORE_U8(ctx.r31.u32 + 38, ctx.r11.u8);
	// lbz r11,-32125(r23)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r23.u32 + -32125);
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
	// lhz r11,1472(r22)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r22.u32 + 1472);
	// sth r11,72(r31)
	REX_STORE_U16(ctx.r31.u32 + 72, ctx.r11.u16);
	// lhz r11,27480(r21)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r21.u32 + 27480);
	// sth r11,74(r31)
	REX_STORE_U16(ctx.r31.u32 + 74, ctx.r11.u16);
	// lhz r11,14944(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 14944);
	// sth r11,76(r31)
	REX_STORE_U16(ctx.r31.u32 + 76, ctx.r11.u16);
	// lhz r11,1520(r20)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r20.u32 + 1520);
	// sth r11,78(r31)
	REX_STORE_U16(ctx.r31.u32 + 78, ctx.r11.u16);
	// lhz r11,22760(r19)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r19.u32 + 22760);
	// sth r11,80(r31)
	REX_STORE_U16(ctx.r31.u32 + 80, ctx.r11.u16);
	// lhz r11,10760(r28)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r28.u32 + 10760);
	// sth r11,82(r31)
	REX_STORE_U16(ctx.r31.u32 + 82, ctx.r11.u16);
	// lhz r11,-1244(r27)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r27.u32 + -1244);
	// sth r11,84(r31)
	REX_STORE_U16(ctx.r31.u32 + 84, ctx.r11.u16);
	// lhz r11,27404(r26)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r26.u32 + 27404);
	// sth r11,86(r31)
	REX_STORE_U16(ctx.r31.u32 + 86, ctx.r11.u16);
	// lhz r11,-924(r25)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r25.u32 + -924);
	// lis r9,-30137
	ctx.r9.s64 = -1975058432;
	// sth r11,88(r31)
	REX_STORE_U16(ctx.r31.u32 + 88, ctx.r11.u16);
	// lis r8,-30153
	ctx.r8.s64 = -1976107008;
	// lis r7,-30165
	ctx.r7.s64 = -1976893440;
	// lis r6,-30164
	ctx.r6.s64 = -1976827904;
	// lis r5,-30166
	ctx.r5.s64 = -1976958976;
	// lhz r11,15672(r9)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + 15672);
	// lis r29,-30165
	ctx.r29.s64 = -1976893440;
	// sth r11,90(r31)
	REX_STORE_U16(ctx.r31.u32 + 90, ctx.r11.u16);
	// lis r30,-30164
	ctx.r30.s64 = -1976827904;
	// lhz r11,-2480(r8)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r8.u32 + -2480);
	// lis r4,-30160
	ctx.r4.s64 = -1976565760;
	// sth r11,92(r31)
	REX_STORE_U16(ctx.r31.u32 + 92, ctx.r11.u16);
	// lis r3,-30153
	ctx.r3.s64 = -1976107008;
	// lhz r11,10580(r7)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r7.u32 + 10580);
	// lis r26,-30126
	ctx.r26.s64 = -1974337536;
	// sth r11,94(r31)
	REX_STORE_U16(ctx.r31.u32 + 94, ctx.r11.u16);
	// lis r28,-30126
	ctx.r28.s64 = -1974337536;
	// lhz r11,31292(r5)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r5.u32 + 31292);
	// lis r27,-30160
	ctx.r27.s64 = -1976565760;
	// lwz r7,1524(r6)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + 1524);
	// lis r23,-30137
	ctx.r23.s64 = -1975058432;
	// sth r11,96(r31)
	REX_STORE_U16(ctx.r31.u32 + 96, ctx.r11.u16);
	// lis r11,-30165
	ctx.r11.s64 = -1976893440;
	// stw r7,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// lis r25,-30163
	ctx.r25.s64 = -1976762368;
	// lis r24,-30160
	ctx.r24.s64 = -1976565760;
	// lhz r5,10588(r29)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r29.u32 + 10588);
	// lis r20,-30135
	ctx.r20.s64 = -1974927360;
	// lhz r29,13204(r11)
	ctx.r29.u64 = REX_LOAD_U16(ctx.r11.u32 + 13204);
	// lis r22,-30137
	ctx.r22.s64 = -1975058432;
	// lhz r6,1464(r30)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r30.u32 + 1464);
	// lis r21,-30165
	ctx.r21.s64 = -1976893440;
	// lhz r10,8388(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 8388);
	// lis r17,-30153
	ctx.r17.s64 = -1976107008;
	// lhz r8,-2456(r3)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r3.u32 + -2456);
	// lis r9,-30165
	ctx.r9.s64 = -1976893440;
	// lhz r30,-13292(r26)
	ctx.r30.u64 = REX_LOAD_U16(ctx.r26.u32 + -13292);
	// lis r19,-30165
	ctx.r19.s64 = -1976893440;
	// lhz r4,-13104(r28)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r28.u32 + -13104);
	// lis r18,-30160
	ctx.r18.s64 = -1976565760;
	// lhz r3,9456(r27)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r27.u32 + 9456);
	// lis r16,-30160
	ctx.r16.s64 = -1976565760;
	// lhz r26,-1196(r23)
	ctx.r26.u64 = REX_LOAD_U16(ctx.r23.u32 + -1196);
	// lis r11,-30165
	ctx.r11.s64 = -1976893440;
	// lhz r28,5872(r25)
	ctx.r28.u64 = REX_LOAD_U16(ctx.r25.u32 + 5872);
	// lhz r27,22744(r24)
	ctx.r27.u64 = REX_LOAD_U16(ctx.r24.u32 + 22744);
	// lis r15,-30137
	ctx.r15.s64 = -1975058432;
	// lwz r23,21036(r20)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r20.u32 + 21036);
	// lis r14,-30165
	ctx.r14.s64 = -1976893440;
	// lhz r25,11912(r22)
	ctx.r25.u64 = REX_LOAD_U16(ctx.r22.u32 + 11912);
	// lhz r24,10576(r21)
	ctx.r24.u64 = REX_LOAD_U16(ctx.r21.u32 + 10576);
	// lwz r20,-2468(r17)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r17.u32 + -2468);
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lhz r11,29244(r16)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r16.u32 + 29244);
	// lhz r7,-32128(r9)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r9.u32 + -32128);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r22,-26604(r19)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r19.u32 + -26604);
	// lwz r21,22768(r18)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r18.u32 + 22768);
	// lwz r17,100(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r19,11924(r15)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r15.u32 + 11924);
	// lwz r18,-26608(r14)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r14.u32 + -26608);
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
	// lis r10,-30165
	ctx.r10.s64 = -1976893440;
	// lwz r17,96(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lis r8,-30160
	ctx.r8.s64 = -1976565760;
	// stw r20,144(r31)
	REX_STORE_U32(ctx.r31.u32 + 144, ctx.r20.u32);
	// lis r30,-30160
	ctx.r30.s64 = -1976565760;
	// stw r19,148(r31)
	REX_STORE_U32(ctx.r31.u32 + 148, ctx.r19.u32);
	// lis r7,-30160
	ctx.r7.s64 = -1976565760;
	// stw r18,152(r31)
	REX_STORE_U32(ctx.r31.u32 + 152, ctx.r18.u32);
	// lis r28,-30137
	ctx.r28.s64 = -1975058432;
	// lwz r4,10584(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 10584);
	// lis r6,-30160
	ctx.r6.s64 = -1976565760;
	// lwz r10,9468(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 9468);
	// lis r26,-30126
	ctx.r26.s64 = -1974337536;
	// lis r5,-30165
	ctx.r5.s64 = -1976893440;
	// lwz r11,10464(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 10464);
	// lis r25,-30166
	ctx.r25.s64 = -1976958976;
	// lwz r8,30140(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 30140);
	// lis r3,-30160
	ctx.r3.s64 = -1976565760;
	// stw r4,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// lis r24,-30163
	ctx.r24.s64 = -1976762368;
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lis r29,-30135
	ctx.r29.s64 = -1974927360;
	// lis r23,-30165
	ctx.r23.s64 = -1976893440;
	// lwz r4,7292(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 7292);
	// lis r27,-30137
	ctx.r27.s64 = -1975058432;
	// lwz r30,15676(r28)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r28.u32 + 15676);
	// lis r22,-30160
	ctx.r22.s64 = -1976565760;
	// lwz r7,6216(r6)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + 6216);
	// lis r10,-30160
	ctx.r10.s64 = -1976565760;
	// lwz r28,-13112(r26)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r26.u32 + -13112);
	// lis r21,-30160
	ctx.r21.s64 = -1976565760;
	// lwz r6,-32132(r5)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + -32132);
	// lis r20,-30135
	ctx.r20.s64 = -1974927360;
	// lbz r26,31294(r25)
	ctx.r26.u64 = REX_LOAD_U8(ctx.r25.u32 + 31294);
	// lis r19,-30153
	ctx.r19.s64 = -1976107008;
	// lwz r5,6220(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 6220);
	// lbz r25,5874(r24)
	ctx.r25.u64 = REX_LOAD_U8(ctx.r24.u32 + 5874);
	// lis r18,-30164
	ctx.r18.s64 = -1976827904;
	// lwz r3,21044(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 21044);
	// lis r17,-30160
	ctx.r17.s64 = -1976565760;
	// lwz r24,-32136(r23)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r23.u32 + -32136);
	// lis r16,-30160
	ctx.r16.s64 = -1976565760;
	// lwz r29,16196(r27)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r27.u32 + 16196);
	// lis r15,-30163
	ctx.r15.s64 = -1976762368;
	// lwz r23,29280(r22)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r22.u32 + 29280);
	// lis r14,-30160
	ctx.r14.s64 = -1976565760;
	// lbz r27,7555(r10)
	ctx.r27.u64 = REX_LOAD_U8(ctx.r10.u32 + 7555);
	// lis r10,-30166
	ctx.r10.s64 = -1976958976;
	// lwz r22,23288(r21)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r21.u32 + 23288);
	// lwz r21,27476(r20)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r20.u32 + 27476);
	// lwz r20,-2444(r19)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r19.u32 + -2444);
	// lis r19,-30160
	ctx.r19.s64 = -1976565760;
	// stw r11,156(r31)
	REX_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// stw r19,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r19.u32);
	// lwz r19,31304(r10)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r10.u32 + 31304);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r8,160(r31)
	REX_STORE_U32(ctx.r31.u32 + 160, ctx.r8.u32);
	// lwz r8,100(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
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
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lwz r18,1452(r18)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r18.u32 + 1452);
	// lwz r11,9440(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 9440);
	// lwz r8,23292(r16)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r16.u32 + 23292);
	// lwz r17,92(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lis r4,-30159
	ctx.r4.s64 = -1976500224;
	// lwz r7,6136(r15)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r15.u32 + 6136);
	// lis r3,-30153
	ctx.r3.s64 = -1976107008;
	// lwz r6,28868(r14)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r14.u32 + 28868);
	// lis r30,-30165
	ctx.r30.s64 = -1976893440;
	// lis r29,-30165
	ctx.r29.s64 = -1976893440;
	// lis r28,-30163
	ctx.r28.s64 = -1976762368;
	// lwz r5,8104(r17)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r17.u32 + 8104);
	// lis r27,-30137
	ctx.r27.s64 = -1975058432;
	// lwz r17,100(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// stw r17,228(r31)
	REX_STORE_U32(ctx.r31.u32 + 228, ctx.r17.u32);
	// stw r18,232(r31)
	REX_STORE_U32(ctx.r31.u32 + 232, ctx.r18.u32);
	// stw r11,236(r31)
	REX_STORE_U32(ctx.r31.u32 + 236, ctx.r11.u32);
	// lwz r11,-18944(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + -18944);
	// lis r4,-30165
	ctx.r4.s64 = -1976893440;
	// stw r8,240(r31)
	REX_STORE_U32(ctx.r31.u32 + 240, ctx.r8.u32);
	// stw r7,244(r31)
	REX_STORE_U32(ctx.r31.u32 + 244, ctx.r7.u32);
	// stw r6,248(r31)
	REX_STORE_U32(ctx.r31.u32 + 248, ctx.r6.u32);
	// stw r5,252(r31)
	REX_STORE_U32(ctx.r31.u32 + 252, ctx.r5.u32);
	// lis r5,-30163
	ctx.r5.s64 = -1976762368;
	// stw r11,256(r31)
	REX_STORE_U32(ctx.r31.u32 + 256, ctx.r11.u32);
	// lis r11,-30166
	ctx.r11.s64 = -1976958976;
	// lwz r8,-2472(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + -2472);
	// lis r3,-30163
	ctx.r3.s64 = -1976762368;
	// lwz r7,-26612(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + -26612);
	// lis r30,-30165
	ctx.r30.s64 = -1976893440;
	// ld r6,7192(r29)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r29.u32 + 7192);
	// lis r29,-30126
	ctx.r29.s64 = -1974337536;
	// lbz r5,8746(r5)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r5.u32 + 8746);
	// stw r8,260(r31)
	REX_STORE_U32(ctx.r31.u32 + 260, ctx.r8.u32);
	// stw r7,264(r31)
	REX_STORE_U32(ctx.r31.u32 + 264, ctx.r7.u32);
	// lbz r7,10455(r4)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r4.u32 + 10455);
	// lwz r4,-23176(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + -23176);
	// lbz r8,8099(r28)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r28.u32 + 8099);
	// lbz r3,10479(r30)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r30.u32 + 10479);
	// lbz r30,31830(r11)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 31830);
	// lwz r29,-13284(r29)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r29.u32 + -13284);
	// ld r11,20300(r27)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r27.u32 + 20300);
	// std r11,268(r31)
	REX_STORE_U64(ctx.r31.u32 + 268, ctx.r11.u64);
	// lis r11,-30137
	ctx.r11.s64 = -1975058432;
	// std r6,276(r31)
	REX_STORE_U64(ctx.r31.u32 + 276, ctx.r6.u64);
	// lis r6,-30160
	ctx.r6.s64 = -1976565760;
	// stb r8,284(r31)
	REX_STORE_U8(ctx.r31.u32 + 284, ctx.r8.u8);
	// lis r8,-30160
	ctx.r8.s64 = -1976565760;
	// stb r7,285(r31)
	REX_STORE_U8(ctx.r31.u32 + 285, ctx.r7.u8);
	// lis r7,-30137
	ctx.r7.s64 = -1975058432;
	// stb r5,286(r31)
	REX_STORE_U8(ctx.r31.u32 + 286, ctx.r5.u8);
	// addi r5,r11,11928
	ctx.r5.s64 = ctx.r11.s64 + 11928;
	// stw r4,288(r31)
	REX_STORE_U32(ctx.r31.u32 + 288, ctx.r4.u32);
	// addi r4,r8,22776
	ctx.r4.s64 = ctx.r8.s64 + 22776;
	// stb r3,292(r31)
	REX_STORE_U8(ctx.r31.u32 + 292, ctx.r3.u8);
	// addi r3,r7,15680
	ctx.r3.s64 = ctx.r7.s64 + 15680;
	// stb r30,293(r31)
	REX_STORE_U8(ctx.r31.u32 + 293, ctx.r30.u8);
	// addi r30,r6,29624
	ctx.r30.s64 = ctx.r6.s64 + 29624;
	// stw r29,296(r31)
	REX_STORE_U32(ctx.r31.u32 + 296, ctx.r29.u32);
loc_89FF05FC:
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
loc_89FF0610:
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
	// bdnz 0x89ff0610
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89FF0610;
	// addi r9,r9,128
	ctx.r9.s64 = ctx.r9.s64 + 128;
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// cmpwi cr6,r9,512
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 512, ctx.xer);
	// blt cr6,0x89ff05fc
	if (ctx.cr6.lt) goto loc_89FF05FC;
	// lis r11,-30164
	ctx.r11.s64 = -1976827904;
	// lis r10,-30137
	ctx.r10.s64 = -1975058432;
	// addi r7,r11,1468
	ctx.r7.s64 = ctx.r11.s64 + 1468;
	// lis r9,-30160
	ctx.r9.s64 = -1976565760;
	// lis r6,-30135
	ctx.r6.s64 = -1974927360;
	// lbz r11,1468(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1468);
	// lis r4,-30163
	ctx.r4.s64 = -1976762368;
	// lwz r10,-928(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + -928);
	// lis r5,-30131
	ctx.r5.s64 = -1974665216;
	// lis r30,-30165
	ctx.r30.s64 = -1976893440;
	// lwz r9,8108(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8108);
	// lis r3,-30160
	ctx.r3.s64 = -1976565760;
	// lwz r8,20364(r6)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + 20364);
	// lis r27,-30160
	ctx.r27.s64 = -1976565760;
	// stb r11,2348(r31)
	REX_STORE_U8(ctx.r31.u32 + 2348, ctx.r11.u8);
	// lis r29,-30137
	ctx.r29.s64 = -1975058432;
	// lis r24,-30135
	ctx.r24.s64 = -1974927360;
	// lis r28,-30135
	ctx.r28.s64 = -1974927360;
	// lis r20,-30160
	ctx.r20.s64 = -1976565760;
	// lwz r6,7284(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 7284);
	// lis r26,-30160
	ctx.r26.s64 = -1976565760;
	// lis r19,-30163
	ctx.r19.s64 = -1976762368;
	// lis r25,-30137
	ctx.r25.s64 = -1975058432;
	// lis r18,-30160
	ctx.r18.s64 = -1976565760;
	// lis r17,-30137
	ctx.r17.s64 = -1975058432;
	// lwz r3,10496(r26)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 10496);
	// lis r15,-30126
	ctx.r15.s64 = -1974337536;
	// addi r16,r17,5756
	ctx.r16.s64 = ctx.r17.s64 + 5756;
	// addi r22,r31,2444
	ctx.r22.s64 = ctx.r31.s64 + 2444;
	// lbz r11,1(r7)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + 1);
	// lbz r7,8762(r4)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r4.u32 + 8762);
	// lwz r4,9464(r27)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 9464);
	// lwz r27,20452(r24)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r24.u32 + 20452);
	// stb r11,2349(r31)
	REX_STORE_U8(ctx.r31.u32 + 2349, ctx.r11.u8);
	// lis r11,-30165
	ctx.r11.s64 = -1976893440;
	// stw r10,2352(r31)
	REX_STORE_U32(ctx.r31.u32 + 2352, ctx.r10.u32);
	// stw r9,2356(r31)
	REX_STORE_U32(ctx.r31.u32 + 2356, ctx.r9.u32);
	// addi r21,r11,-32120
	ctx.r21.s64 = ctx.r11.s64 + -32120;
	// lwz r11,27656(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 27656);
	// stw r11,2360(r31)
	REX_STORE_U32(ctx.r31.u32 + 2360, ctx.r11.u32);
	// lis r11,-30135
	ctx.r11.s64 = -1974927360;
	// stw r8,2364(r31)
	REX_STORE_U32(ctx.r31.u32 + 2364, ctx.r8.u32);
	// lis r8,-30160
	ctx.r8.s64 = -1976565760;
	// stb r7,2368(r31)
	REX_STORE_U8(ctx.r31.u32 + 2368, ctx.r7.u8);
	// lis r7,-30135
	ctx.r7.s64 = -1974927360;
	// lwz r5,7200(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 7200);
	// mr r23,r21
	ctx.r23.u64 = ctx.r21.u64;
	// lwz r30,21052(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 21052);
	// lis r11,-30137
	ctx.r11.s64 = -1975058432;
	// lwz r10,-1232(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + -1232);
	// lwz r9,27468(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 27468);
	// lwz r29,29260(r8)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r8.u32 + 29260);
	// lwz r28,-1240(r25)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r25.u32 + -1240);
	// lwz r24,20316(r11)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r11.u32 + 20316);
	// lwz r26,20368(r7)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r7.u32 + 20368);
	// lwz r25,-13296(r15)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r15.u32 + -13296);
	// lwz r11,14980(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 14980);
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
	// lwz r11,6140(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 6140);
	// stw r11,2404(r31)
	REX_STORE_U32(ctx.r31.u32 + 2404, ctx.r11.u32);
	// lwz r11,22740(r18)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 22740);
	// stw r11,2408(r31)
	REX_STORE_U32(ctx.r31.u32 + 2408, ctx.r11.u32);
	// stw r29,2412(r31)
	REX_STORE_U32(ctx.r31.u32 + 2412, ctx.r29.u32);
	// stw r28,2416(r31)
	REX_STORE_U32(ctx.r31.u32 + 2416, ctx.r28.u32);
	// stw r27,2420(r31)
	REX_STORE_U32(ctx.r31.u32 + 2420, ctx.r27.u32);
	// lwz r11,5756(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 5756);
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
loc_89FF07A0:
	// li r9,41
	ctx.r9.s64 = 41;
	// addi r11,r23,-128
	ctx.r11.s64 = ctx.r23.s64 + -128;
	// addi r10,r22,-128
	ctx.r10.s64 = ctx.r22.s64 + -128;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_89FF07B0:
	// lwzu r9,128(r11)
	ea = 128 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,128(r10)
	ea = 128 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x89ff07b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89FF07B0;
	// addi r23,r23,4
	ctx.r23.s64 = ctx.r23.s64 + 4;
	// addi r11,r21,128
	ctx.r11.s64 = ctx.r21.s64 + 128;
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x89ff07a0
	if (ctx.cr6.lt) goto loc_89FF07A0;
	// li r10,41
	ctx.r10.s64 = 41;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r31,7692
	ctx.r9.s64 = ctx.r31.s64 + 7692;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-30160
	ctx.r10.s64 = -1976565760;
	// addi r10,r10,14624
	ctx.r10.s64 = ctx.r10.s64 + 14624;
loc_89FF07E8:
	// lbzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stbx r8,r9,r11
	REX_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x89ff07e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89FF07E8;
	// lis r9,-30160
	ctx.r9.s64 = -1976565760;
	// lis r8,-30160
	ctx.r8.s64 = -1976565760;
	// li r10,32
	ctx.r10.s64 = 32;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r31,7744
	ctx.r7.s64 = ctx.r31.s64 + 7744;
	// lwz r9,29256(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 29256);
	// lwz r8,6224(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 6224);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-30163
	ctx.r10.s64 = -1976762368;
	// addi r10,r10,7808
	ctx.r10.s64 = ctx.r10.s64 + 7808;
	// stw r9,7736(r31)
	REX_STORE_U32(ctx.r31.u32 + 7736, ctx.r9.u32);
	// stw r8,7740(r31)
	REX_STORE_U32(ctx.r31.u32 + 7740, ctx.r8.u32);
loc_89FF0828:
	// lbzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stbx r9,r7,r11
	REX_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x89ff0828
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89FF0828;
	// lis r11,-30137
	ctx.r11.s64 = -1975058432;
	// lis r10,-30160
	ctx.r10.s64 = -1976565760;
	// addi r9,r11,-1212
	ctx.r9.s64 = ctx.r11.s64 + -1212;
	// lis r8,-30160
	ctx.r8.s64 = -1976565760;
	// addi r3,r31,7788
	ctx.r3.s64 = ctx.r31.s64 + 7788;
	// lbz r11,-1212(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -1212);
	// addi r30,r8,27472
	ctx.r30.s64 = ctx.r8.s64 + 27472;
	// lwz r10,30136(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 30136);
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
	// bl 0x8a0c26e0
	ctx.lr = 0x89FF08A4;
	sub_8A0C26E0(ctx, base);
	// addi r3,r31,8484
	ctx.r3.s64 = ctx.r31.s64 + 8484;
	// addi r4,r30,696
	ctx.r4.s64 = ctx.r30.s64 + 696;
	// li r5,696
	ctx.r5.s64 = 696;
	// bl 0x8a0c26e0
	ctx.lr = 0x89FF08B4;
	sub_8A0C26E0(ctx, base);
	// lis r6,-30165
	ctx.r6.s64 = -1976893440;
	// addi r3,r31,9180
	ctx.r3.s64 = ctx.r31.s64 + 9180;
	// addi r30,r6,8336
	ctx.r30.s64 = ctx.r6.s64 + 8336;
	// li r5,80
	ctx.r5.s64 = 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8a0c26e0
	ctx.lr = 0x89FF08CC;
	sub_8A0C26E0(ctx, base);
	// addi r3,r31,9820
	ctx.r3.s64 = ctx.r31.s64 + 9820;
	// addi r4,r30,640
	ctx.r4.s64 = ctx.r30.s64 + 640;
	// li r5,80
	ctx.r5.s64 = 80;
	// bl 0x8a0c26e0
	ctx.lr = 0x89FF08DC;
	sub_8A0C26E0(ctx, base);
	// addi r3,r31,9260
	ctx.r3.s64 = ctx.r31.s64 + 9260;
	// addi r4,r30,80
	ctx.r4.s64 = ctx.r30.s64 + 80;
	// li r5,80
	ctx.r5.s64 = 80;
	// bl 0x8a0c26e0
	ctx.lr = 0x89FF08EC;
	sub_8A0C26E0(ctx, base);
	// addi r3,r31,9900
	ctx.r3.s64 = ctx.r31.s64 + 9900;
	// addi r4,r30,720
	ctx.r4.s64 = ctx.r30.s64 + 720;
	// li r5,80
	ctx.r5.s64 = 80;
	// bl 0x8a0c26e0
	ctx.lr = 0x89FF08FC;
	sub_8A0C26E0(ctx, base);
	// addi r3,r31,9340
	ctx.r3.s64 = ctx.r31.s64 + 9340;
	// addi r4,r30,160
	ctx.r4.s64 = ctx.r30.s64 + 160;
	// li r5,80
	ctx.r5.s64 = 80;
	// bl 0x8a0c26e0
	ctx.lr = 0x89FF090C;
	sub_8A0C26E0(ctx, base);
	// addi r3,r31,9980
	ctx.r3.s64 = ctx.r31.s64 + 9980;
	// addi r4,r30,800
	ctx.r4.s64 = ctx.r30.s64 + 800;
	// li r5,80
	ctx.r5.s64 = 80;
	// bl 0x8a0c26e0
	ctx.lr = 0x89FF091C;
	sub_8A0C26E0(ctx, base);
	// addi r3,r31,9420
	ctx.r3.s64 = ctx.r31.s64 + 9420;
	// addi r4,r30,240
	ctx.r4.s64 = ctx.r30.s64 + 240;
	// li r5,80
	ctx.r5.s64 = 80;
	// bl 0x8a0c26e0
	ctx.lr = 0x89FF092C;
	sub_8A0C26E0(ctx, base);
	// addi r3,r31,10060
	ctx.r3.s64 = ctx.r31.s64 + 10060;
	// addi r4,r30,880
	ctx.r4.s64 = ctx.r30.s64 + 880;
	// li r5,80
	ctx.r5.s64 = 80;
	// bl 0x8a0c26e0
	ctx.lr = 0x89FF093C;
	sub_8A0C26E0(ctx, base);
	// addi r3,r31,9500
	ctx.r3.s64 = ctx.r31.s64 + 9500;
	// addi r4,r30,320
	ctx.r4.s64 = ctx.r30.s64 + 320;
	// li r5,80
	ctx.r5.s64 = 80;
	// bl 0x8a0c26e0
	ctx.lr = 0x89FF094C;
	sub_8A0C26E0(ctx, base);
	// addi r3,r31,10140
	ctx.r3.s64 = ctx.r31.s64 + 10140;
	// addi r4,r30,960
	ctx.r4.s64 = ctx.r30.s64 + 960;
	// li r5,80
	ctx.r5.s64 = 80;
	// bl 0x8a0c26e0
	ctx.lr = 0x89FF095C;
	sub_8A0C26E0(ctx, base);
	// addi r3,r31,9580
	ctx.r3.s64 = ctx.r31.s64 + 9580;
	// addi r4,r30,400
	ctx.r4.s64 = ctx.r30.s64 + 400;
	// li r5,80
	ctx.r5.s64 = 80;
	// bl 0x8a0c26e0
	ctx.lr = 0x89FF096C;
	sub_8A0C26E0(ctx, base);
	// addi r3,r31,10220
	ctx.r3.s64 = ctx.r31.s64 + 10220;
	// addi r4,r30,1040
	ctx.r4.s64 = ctx.r30.s64 + 1040;
	// li r5,80
	ctx.r5.s64 = 80;
	// bl 0x8a0c26e0
	ctx.lr = 0x89FF097C;
	sub_8A0C26E0(ctx, base);
	// addi r3,r31,9660
	ctx.r3.s64 = ctx.r31.s64 + 9660;
	// addi r4,r30,480
	ctx.r4.s64 = ctx.r30.s64 + 480;
	// li r5,80
	ctx.r5.s64 = 80;
	// bl 0x8a0c26e0
	ctx.lr = 0x89FF098C;
	sub_8A0C26E0(ctx, base);
	// addi r3,r31,10300
	ctx.r3.s64 = ctx.r31.s64 + 10300;
	// addi r4,r30,1120
	ctx.r4.s64 = ctx.r30.s64 + 1120;
	// li r5,80
	ctx.r5.s64 = 80;
	// bl 0x8a0c26e0
	ctx.lr = 0x89FF099C;
	sub_8A0C26E0(ctx, base);
	// addi r3,r31,9740
	ctx.r3.s64 = ctx.r31.s64 + 9740;
	// addi r4,r30,560
	ctx.r4.s64 = ctx.r30.s64 + 560;
	// li r5,80
	ctx.r5.s64 = 80;
	// bl 0x8a0c26e0
	ctx.lr = 0x89FF09AC;
	sub_8A0C26E0(ctx, base);
	// addi r3,r31,10380
	ctx.r3.s64 = ctx.r31.s64 + 10380;
	// addi r4,r30,1200
	ctx.r4.s64 = ctx.r30.s64 + 1200;
	// li r5,80
	ctx.r5.s64 = 80;
	// bl 0x8a0c26e0
	ctx.lr = 0x89FF09BC;
	sub_8A0C26E0(ctx, base);
	// lis r3,-30165
	ctx.r3.s64 = -1976893440;
	// addi r29,r31,27356
	ctx.r29.s64 = ctx.r31.s64 + 27356;
	// addi r11,r3,-26600
	ctx.r11.s64 = ctx.r3.s64 + -26600;
	// li r28,128
	ctx.r28.s64 = 128;
	// addi r30,r11,16896
	ctx.r30.s64 = ctx.r11.s64 + 16896;
loc_89FF09D0:
	// addi r4,r30,-16896
	ctx.r4.s64 = ctx.r30.s64 + -16896;
	// addi r3,r29,-16896
	ctx.r3.s64 = ctx.r29.s64 + -16896;
	// li r5,132
	ctx.r5.s64 = 132;
	// bl 0x8a0c26e0
	ctx.lr = 0x89FF09E0;
	sub_8A0C26E0(ctx, base);
	// li r5,132
	ctx.r5.s64 = 132;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8a0c26e0
	ctx.lr = 0x89FF09F0;
	sub_8A0C26E0(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,132
	ctx.r30.s64 = ctx.r30.s64 + 132;
	// addi r29,r29,132
	ctx.r29.s64 = ctx.r29.s64 + 132;
	// bne 0x89ff09d0
	if (!ctx.cr0.eq) goto loc_89FF09D0;
	// lis r11,-30159
	ctx.r11.s64 = -1976500224;
	// addis r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 262144;
	// addi r11,r11,-14768
	ctx.r11.s64 = ctx.r11.s64 + -14768;
	// addi r30,r30,-15140
	ctx.r30.s64 = ctx.r30.s64 + -15140;
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// addis r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 65536;
	// addis r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 131072;
	// addis r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 131072;
	// addis r6,r11,3
	ctx.r6.s64 = ctx.r11.s64 + 196608;
	// addi r5,r11,6436
	ctx.r5.s64 = ctx.r11.s64 + 6436;
	// addi r4,r11,31780
	ctx.r4.s64 = ctx.r11.s64 + 31780;
	// addi r11,r9,16932
	ctx.r11.s64 = ctx.r9.s64 + 16932;
	// addi r3,r10,-8412
	ctx.r3.s64 = ctx.r10.s64 + -8412;
	// addi r10,r8,-23260
	ctx.r10.s64 = ctx.r8.s64 + -23260;
	// addi r9,r7,2084
	ctx.r9.s64 = ctx.r7.s64 + 2084;
	// addi r29,r6,6144
	ctx.r29.s64 = ctx.r6.s64 + 6144;
	// subf r20,r31,r5
	ctx.r20.u64 = ctx.r5.u64 - ctx.r31.u64;
	// subf r17,r31,r11
	ctx.r17.u64 = ctx.r11.u64 - ctx.r31.u64;
	// subf r16,r31,r10
	ctx.r16.u64 = ctx.r10.u64 - ctx.r31.u64;
	// subf r15,r31,r9
	ctx.r15.u64 = ctx.r9.u64 - ctx.r31.u64;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lis r8,0
	ctx.r8.s64 = 0;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r21,192
	ctx.r21.s64 = 192;
	// subf r19,r31,r4
	ctx.r19.u64 = ctx.r4.u64 - ctx.r31.u64;
	// subf r18,r31,r3
	ctx.r18.u64 = ctx.r3.u64 - ctx.r31.u64;
	// ori r22,r11,6144
	ctx.r22.u64 = ctx.r11.u64 | 6144;
	// ori r23,r10,46336
	ctx.r23.u64 = ctx.r10.u64 | 46336;
	// ori r24,r9,20992
	ctx.r24.u64 = ctx.r9.u64 | 20992;
	// ori r25,r8,50688
	ctx.r25.u64 = ctx.r8.u64 | 50688;
	// ori r26,r7,61184
	ctx.r26.u64 = ctx.r7.u64 | 61184;
	// ori r27,r6,10496
	ctx.r27.u64 = ctx.r6.u64 | 10496;
	// ori r28,r5,35840
	ctx.r28.u64 = ctx.r5.u64 | 35840;
loc_89FF0A94:
	// subf r4,r22,r29
	ctx.r4.u64 = ctx.r29.u64 - ctx.r22.u64;
	// subf r3,r22,r30
	ctx.r3.u64 = ctx.r30.u64 - ctx.r22.u64;
	// li r5,132
	ctx.r5.s64 = 132;
	// bl 0x8a0c26e0
	ctx.lr = 0x89FF0AA4;
	sub_8A0C26E0(ctx, base);
	// li r5,132
	ctx.r5.s64 = 132;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8a0c26e0
	ctx.lr = 0x89FF0AB4;
	sub_8A0C26E0(ctx, base);
	// subf r4,r23,r29
	ctx.r4.u64 = ctx.r29.u64 - ctx.r23.u64;
	// subf r3,r23,r30
	ctx.r3.u64 = ctx.r30.u64 - ctx.r23.u64;
	// li r5,132
	ctx.r5.s64 = 132;
	// bl 0x8a0c26e0
	ctx.lr = 0x89FF0AC4;
	sub_8A0C26E0(ctx, base);
	// addi r4,r29,25344
	ctx.r4.s64 = ctx.r29.s64 + 25344;
	// addi r3,r30,25344
	ctx.r3.s64 = ctx.r30.s64 + 25344;
	// li r5,132
	ctx.r5.s64 = 132;
	// bl 0x8a0c26e0
	ctx.lr = 0x89FF0AD4;
	sub_8A0C26E0(ctx, base);
	// subf r4,r24,r29
	ctx.r4.u64 = ctx.r29.u64 - ctx.r24.u64;
	// subf r3,r24,r30
	ctx.r3.u64 = ctx.r30.u64 - ctx.r24.u64;
	// li r5,132
	ctx.r5.s64 = 132;
	// bl 0x8a0c26e0
	ctx.lr = 0x89FF0AE4;
	sub_8A0C26E0(ctx, base);
	// add r4,r20,r30
	ctx.r4.u64 = ctx.r20.u64 + ctx.r30.u64;
	// add r3,r30,r25
	ctx.r3.u64 = ctx.r30.u64 + ctx.r25.u64;
	// li r5,132
	ctx.r5.s64 = 132;
	// bl 0x8a0c26e0
	ctx.lr = 0x89FF0AF4;
	sub_8A0C26E0(ctx, base);
	// subf r4,r26,r29
	ctx.r4.u64 = ctx.r29.u64 - ctx.r26.u64;
	// subf r3,r26,r30
	ctx.r3.u64 = ctx.r30.u64 - ctx.r26.u64;
	// li r5,132
	ctx.r5.s64 = 132;
	// bl 0x8a0c26e0
	ctx.lr = 0x89FF0B04;
	sub_8A0C26E0(ctx, base);
	// add r4,r19,r30
	ctx.r4.u64 = ctx.r19.u64 + ctx.r30.u64;
	// add r3,r30,r27
	ctx.r3.u64 = ctx.r30.u64 + ctx.r27.u64;
	// li r5,132
	ctx.r5.s64 = 132;
	// bl 0x8a0c26e0
	ctx.lr = 0x89FF0B14;
	sub_8A0C26E0(ctx, base);
	// subf r4,r28,r29
	ctx.r4.u64 = ctx.r29.u64 - ctx.r28.u64;
	// subf r3,r28,r30
	ctx.r3.u64 = ctx.r30.u64 - ctx.r28.u64;
	// li r5,132
	ctx.r5.s64 = 132;
	// bl 0x8a0c26e0
	ctx.lr = 0x89FF0B24;
	sub_8A0C26E0(ctx, base);
	// add r4,r18,r30
	ctx.r4.u64 = ctx.r18.u64 + ctx.r30.u64;
	// add r3,r30,r28
	ctx.r3.u64 = ctx.r30.u64 + ctx.r28.u64;
	// li r5,132
	ctx.r5.s64 = 132;
	// bl 0x8a0c26e0
	ctx.lr = 0x89FF0B34;
	sub_8A0C26E0(ctx, base);
	// subf r4,r27,r29
	ctx.r4.u64 = ctx.r29.u64 - ctx.r27.u64;
	// subf r3,r27,r30
	ctx.r3.u64 = ctx.r30.u64 - ctx.r27.u64;
	// li r5,132
	ctx.r5.s64 = 132;
	// bl 0x8a0c26e0
	ctx.lr = 0x89FF0B44;
	sub_8A0C26E0(ctx, base);
	// add r4,r17,r30
	ctx.r4.u64 = ctx.r17.u64 + ctx.r30.u64;
	// add r3,r30,r26
	ctx.r3.u64 = ctx.r30.u64 + ctx.r26.u64;
	// li r5,132
	ctx.r5.s64 = 132;
	// bl 0x8a0c26e0
	ctx.lr = 0x89FF0B54;
	sub_8A0C26E0(ctx, base);
	// subf r4,r25,r29
	ctx.r4.u64 = ctx.r29.u64 - ctx.r25.u64;
	// subf r3,r25,r30
	ctx.r3.u64 = ctx.r30.u64 - ctx.r25.u64;
	// li r5,132
	ctx.r5.s64 = 132;
	// bl 0x8a0c26e0
	ctx.lr = 0x89FF0B64;
	sub_8A0C26E0(ctx, base);
	// add r4,r16,r30
	ctx.r4.u64 = ctx.r16.u64 + ctx.r30.u64;
	// add r3,r30,r24
	ctx.r3.u64 = ctx.r30.u64 + ctx.r24.u64;
	// li r5,132
	ctx.r5.s64 = 132;
	// bl 0x8a0c26e0
	ctx.lr = 0x89FF0B74;
	sub_8A0C26E0(ctx, base);
	// addi r4,r29,-25344
	ctx.r4.s64 = ctx.r29.s64 + -25344;
	// addi r3,r30,-25344
	ctx.r3.s64 = ctx.r30.s64 + -25344;
	// li r5,132
	ctx.r5.s64 = 132;
	// bl 0x8a0c26e0
	ctx.lr = 0x89FF0B84;
	sub_8A0C26E0(ctx, base);
	// add r4,r15,r30
	ctx.r4.u64 = ctx.r15.u64 + ctx.r30.u64;
	// add r3,r30,r23
	ctx.r3.u64 = ctx.r30.u64 + ctx.r23.u64;
	// li r5,132
	ctx.r5.s64 = 132;
	// bl 0x8a0c26e0
	ctx.lr = 0x89FF0B94;
	sub_8A0C26E0(ctx, base);
	// addic. r21,r21,-1
	ctx.xer.ca = ctx.r21.u32 > 0;
	ctx.r21.s64 = ctx.r21.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// addi r29,r29,132
	ctx.r29.s64 = ctx.r29.s64 + 132;
	// addi r30,r30,132
	ctx.r30.s64 = ctx.r30.s64 + 132;
	// bne 0x89ff0a94
	if (!ctx.cr0.eq) goto loc_89FF0A94;
	// lis r11,-30137
	ctx.r11.s64 = -1975058432;
	// addis r29,r31,7
	ctx.r29.s64 = ctx.r31.s64 + 458752;
	// addi r11,r11,12472
	ctx.r11.s64 = ctx.r11.s64 + 12472;
	// addi r29,r29,-7396
	ctx.r29.s64 = ctx.r29.s64 + -7396;
	// li r28,16
	ctx.r28.s64 = 16;
	// addi r30,r11,1600
	ctx.r30.s64 = ctx.r11.s64 + 1600;
loc_89FF0BBC:
	// addi r4,r30,-1600
	ctx.r4.s64 = ctx.r30.s64 + -1600;
	// addi r3,r29,-1600
	ctx.r3.s64 = ctx.r29.s64 + -1600;
	// li r5,100
	ctx.r5.s64 = 100;
	// bl 0x8a0c26e0
	ctx.lr = 0x89FF0BCC;
	sub_8A0C26E0(ctx, base);
	// li r5,100
	ctx.r5.s64 = 100;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8a0c26e0
	ctx.lr = 0x89FF0BDC;
	sub_8A0C26E0(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,100
	ctx.r30.s64 = ctx.r30.s64 + 100;
	// addi r29,r29,100
	ctx.r29.s64 = ctx.r29.s64 + 100;
	// bne 0x89ff0bbc
	if (!ctx.cr0.eq) goto loc_89FF0BBC;
	// lis r11,-30164
	ctx.r11.s64 = -1976827904;
	// addis r28,r31,7
	ctx.r28.s64 = ctx.r31.s64 + 458752;
	// addi r29,r11,1528
	ctx.r29.s64 = ctx.r11.s64 + 1528;
	// addi r28,r28,-5796
	ctx.r28.s64 = ctx.r28.s64 + -5796;
	// li r30,352
	ctx.r30.s64 = 352;
loc_89FF0C00:
	// li r5,116
	ctx.r5.s64 = 116;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8a0c26e0
	ctx.lr = 0x89FF0C10;
	sub_8A0C26E0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,116
	ctx.r29.s64 = ctx.r29.s64 + 116;
	// addi r28,r28,116
	ctx.r28.s64 = ctx.r28.s64 + 116;
	// bne 0x89ff0c00
	if (!ctx.cr0.eq) goto loc_89FF0C00;
	// lis r11,-30165
	ctx.r11.s64 = -1976893440;
	// addis r28,r31,8
	ctx.r28.s64 = ctx.r31.s64 + 524288;
	// addi r29,r11,13736
	ctx.r29.s64 = ctx.r11.s64 + 13736;
	// addi r28,r28,-30500
	ctx.r28.s64 = ctx.r28.s64 + -30500;
	// li r30,256
	ctx.r30.s64 = 256;
loc_89FF0C34:
	// li r5,208
	ctx.r5.s64 = 208;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8a0c26e0
	ctx.lr = 0x89FF0C44;
	sub_8A0C26E0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,208
	ctx.r29.s64 = ctx.r29.s64 + 208;
	// addi r28,r28,208
	ctx.r28.s64 = ctx.r28.s64 + 208;
	// bne 0x89ff0c34
	if (!ctx.cr0.eq) goto loc_89FF0C34;
	// lis r11,-30131
	ctx.r11.s64 = -1974665216;
	// addis r28,r31,8
	ctx.r28.s64 = ctx.r31.s64 + 524288;
	// addi r29,r11,27664
	ctx.r29.s64 = ctx.r11.s64 + 27664;
	// addi r28,r28,22748
	ctx.r28.s64 = ctx.r28.s64 + 22748;
	// li r30,2048
	ctx.r30.s64 = 2048;
loc_89FF0C68:
	// li r5,140
	ctx.r5.s64 = 140;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8a0c26e0
	ctx.lr = 0x89FF0C78;
	sub_8A0C26E0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,140
	ctx.r29.s64 = ctx.r29.s64 + 140;
	// addi r28,r28,140
	ctx.r28.s64 = ctx.r28.s64 + 140;
	// bne 0x89ff0c68
	if (!ctx.cr0.eq) goto loc_89FF0C68;
	// lis r11,-30163
	ctx.r11.s64 = -1976762368;
	// addis r28,r31,13
	ctx.r28.s64 = ctx.r31.s64 + 851968;
	// addi r29,r11,8768
	ctx.r29.s64 = ctx.r11.s64 + 8768;
	// addi r28,r28,-18212
	ctx.r28.s64 = ctx.r28.s64 + -18212;
	// li r30,2304
	ctx.r30.s64 = 2304;
loc_89FF0C9C:
	// li r5,84
	ctx.r5.s64 = 84;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8a0c26e0
	ctx.lr = 0x89FF0CAC;
	sub_8A0C26E0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,84
	ctx.r29.s64 = ctx.r29.s64 + 84;
	// addi r28,r28,84
	ctx.r28.s64 = ctx.r28.s64 + 84;
	// bne 0x89ff0c9c
	if (!ctx.cr0.eq) goto loc_89FF0C9C;
	// lis r11,-30165
	ctx.r11.s64 = -1976893440;
	// addis r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 1048576;
	// addi r30,r11,10592
	ctx.r30.s64 = ctx.r11.s64 + 10592;
	// addi r3,r3,-21284
	ctx.r3.s64 = ctx.r3.s64 + -21284;
	// li r5,92
	ctx.r5.s64 = 92;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8a0c26e0
	ctx.lr = 0x89FF0CD8;
	sub_8A0C26E0(ctx, base);
	// addis r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 1048576;
	// addi r4,r30,92
	ctx.r4.s64 = ctx.r30.s64 + 92;
	// addi r3,r3,-21192
	ctx.r3.s64 = ctx.r3.s64 + -21192;
	// li r5,92
	ctx.r5.s64 = 92;
	// bl 0x8a0c26e0
	ctx.lr = 0x89FF0CEC;
	sub_8A0C26E0(ctx, base);
	// addis r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 1048576;
	// addi r4,r30,184
	ctx.r4.s64 = ctx.r30.s64 + 184;
	// addi r3,r3,-21100
	ctx.r3.s64 = ctx.r3.s64 + -21100;
	// li r5,92
	ctx.r5.s64 = 92;
	// bl 0x8a0c26e0
	ctx.lr = 0x89FF0D00;
	sub_8A0C26E0(ctx, base);
	// addis r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 1048576;
	// addi r4,r30,276
	ctx.r4.s64 = ctx.r30.s64 + 276;
	// addi r3,r3,-21008
	ctx.r3.s64 = ctx.r3.s64 + -21008;
	// li r5,92
	ctx.r5.s64 = 92;
	// bl 0x8a0c26e0
	ctx.lr = 0x89FF0D14;
	sub_8A0C26E0(ctx, base);
	// addis r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 1048576;
	// addi r4,r30,368
	ctx.r4.s64 = ctx.r30.s64 + 368;
	// addi r3,r3,-20916
	ctx.r3.s64 = ctx.r3.s64 + -20916;
	// li r5,92
	ctx.r5.s64 = 92;
	// bl 0x8a0c26e0
	ctx.lr = 0x89FF0D28;
	sub_8A0C26E0(ctx, base);
	// addis r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 1048576;
	// addi r4,r30,460
	ctx.r4.s64 = ctx.r30.s64 + 460;
	// addi r3,r3,-20824
	ctx.r3.s64 = ctx.r3.s64 + -20824;
	// li r5,92
	ctx.r5.s64 = 92;
	// bl 0x8a0c26e0
	ctx.lr = 0x89FF0D3C;
	sub_8A0C26E0(ctx, base);
	// li r9,320
	ctx.r9.s64 = 320;
	// addis r10,r31,16
	ctx.r10.s64 = ctx.r31.s64 + 1048576;
	// lis r8,-30163
	ctx.r8.s64 = -1976762368;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-13694
	ctx.r10.s64 = ctx.r10.s64 + -13694;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r9,-30160
	ctx.r9.s64 = -1976565760;
	// addi r8,r8,2032
	ctx.r8.s64 = ctx.r8.s64 + 2032;
	// addi r9,r9,10768
	ctx.r9.s64 = ctx.r9.s64 + 10768;
loc_89FF0D60:
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
	// addi r29,r8,2560
	ctx.r29.s64 = ctx.r8.s64 + 2560;
	// addi r28,r9,2560
	ctx.r28.s64 = ctx.r9.s64 + 2560;
	// addi r27,r8,3200
	ctx.r27.s64 = ctx.r8.s64 + 3200;
	// addi r26,r9,3200
	ctx.r26.s64 = ctx.r9.s64 + 3200;
	// lhzx r25,r11,r9
	ctx.r25.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// sth r25,-3198(r10)
	REX_STORE_U16(ctx.r10.u32 + -3198, ctx.r25.u16);
	// lhzx r6,r6,r11
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r11.u32);
	// sth r6,-6398(r10)
	REX_STORE_U16(ctx.r10.u32 + -6398, ctx.r6.u16);
	// lhzx r5,r5,r11
	ctx.r5.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r11.u32);
	// sth r5,-2558(r10)
	REX_STORE_U16(ctx.r10.u32 + -2558, ctx.r5.u16);
	// lhzx r4,r4,r11
	ctx.r4.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r11.u32);
	// sth r4,-5758(r10)
	REX_STORE_U16(ctx.r10.u32 + -5758, ctx.r4.u16);
	// lhzx r3,r3,r11
	ctx.r3.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// sth r3,-1918(r10)
	REX_STORE_U16(ctx.r10.u32 + -1918, ctx.r3.u16);
	// lhzx r6,r30,r11
	ctx.r6.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r11.u32);
	// sth r6,-5118(r10)
	REX_STORE_U16(ctx.r10.u32 + -5118, ctx.r6.u16);
	// lhzx r5,r7,r11
	ctx.r5.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r11.u32);
	// sth r5,-1278(r10)
	REX_STORE_U16(ctx.r10.u32 + -1278, ctx.r5.u16);
	// lhzx r4,r29,r11
	ctx.r4.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r11.u32);
	// sth r4,-4478(r10)
	REX_STORE_U16(ctx.r10.u32 + -4478, ctx.r4.u16);
	// lhzx r3,r28,r11
	ctx.r3.u64 = REX_LOAD_U16(ctx.r28.u32 + ctx.r11.u32);
	// sth r3,-638(r10)
	REX_STORE_U16(ctx.r10.u32 + -638, ctx.r3.u16);
	// lhzx r7,r27,r11
	ctx.r7.u64 = REX_LOAD_U16(ctx.r27.u32 + ctx.r11.u32);
	// sth r7,-3838(r10)
	REX_STORE_U16(ctx.r10.u32 + -3838, ctx.r7.u16);
	// lhzx r6,r26,r11
	ctx.r6.u64 = REX_LOAD_U16(ctx.r26.u32 + ctx.r11.u32);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// sthu r6,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r6.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x89ff0d60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89FF0D60;
	// lis r11,-30137
	ctx.r11.s64 = -1975058432;
	// addis r7,r31,16
	ctx.r7.s64 = ctx.r31.s64 + 1048576;
	// addi r6,r11,5768
	ctx.r6.s64 = ctx.r11.s64 + 5768;
	// addi r7,r7,-12028
	ctx.r7.s64 = ctx.r7.s64 + -12028;
	// addi r8,r6,1024
	ctx.r8.s64 = ctx.r6.s64 + 1024;
loc_89FF0E04:
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r11,r8,4032
	ctx.r11.s64 = ctx.r8.s64 + 4032;
	// addi r10,r7,4032
	ctx.r10.s64 = ctx.r7.s64 + 4032;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_89FF0E14:
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
	// bdnz 0x89ff0e14
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89FF0E14;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r11,r6,1088
	ctx.r11.s64 = ctx.r6.s64 + 1088;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x89ff0e04
	if (ctx.cr6.lt) goto loc_89FF0E04;
	// addis r5,r31,16
	ctx.r5.s64 = ctx.r31.s64 + 1048576;
	// lis r11,-30135
	ctx.r11.s64 = -1974927360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r5,-5884
	ctx.r5.s64 = ctx.r5.s64 + -5884;
	// addi r6,r11,21320
	ctx.r6.s64 = ctx.r11.s64 + 21320;
loc_89FF0E70:
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
loc_89FF0E88:
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
	// bdnz 0x89ff0e88
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89FF0E88;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmpwi cr6,r7,32
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 32, ctx.xer);
	// blt cr6,0x89ff0e70
	if (ctx.cr6.lt) goto loc_89FF0E70;
	// lis r11,-30160
	ctx.r11.s64 = -1976565760;
	// lis r10,15
	ctx.r10.s64 = 983040;
	// addi r4,r11,29264
	ctx.r4.s64 = ctx.r11.s64 + 29264;
	// ori r3,r10,64772
	ctx.r3.u64 = ctx.r10.u64 | 64772;
	// lis r10,15
	ctx.r10.s64 = 983040;
	// lbz r11,29264(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 29264);
	// lis r9,-30160
	ctx.r9.s64 = -1976565760;
	// ori r8,r10,64773
	ctx.r8.u64 = ctx.r10.u64 | 64773;
	// lis r10,15
	ctx.r10.s64 = 983040;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lis r30,15
	ctx.r30.s64 = 983040;
	// lis r7,15
	ctx.r7.s64 = 983040;
	// stbx r11,r31,r3
	REX_STORE_U8(ctx.r31.u32 + ctx.r3.u32, ctx.r11.u8);
	// li r11,128
	ctx.r11.s64 = 128;
	// lis r6,15
	ctx.r6.s64 = 983040;
	// lis r5,15
	ctx.r5.s64 = 983040;
	// lis r3,15
	ctx.r3.s64 = 983040;
	// lis r26,-30165
	ctx.r26.s64 = -1976893440;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// ori r11,r10,64778
	ctx.r11.u64 = ctx.r10.u64 | 64778;
	// addi r10,r9,6228
	ctx.r10.s64 = ctx.r9.s64 + 6228;
	// ori r9,r30,64779
	ctx.r9.u64 = ctx.r30.u64 | 64779;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// lis r10,15
	ctx.r10.s64 = 983040;
	// lis r30,-30160
	ctx.r30.s64 = -1976565760;
	// stw r9,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// ori r14,r10,64784
	ctx.r14.u64 = ctx.r10.u64 | 64784;
	// addi r10,r30,30148
	ctx.r10.s64 = ctx.r30.s64 + 30148;
	// lis r25,15
	ctx.r25.s64 = 983040;
	// ori r3,r3,64777
	ctx.r3.u64 = ctx.r3.u64 | 64777;
	// stw r10,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// ori r7,r7,64774
	ctx.r7.u64 = ctx.r7.u64 | 64774;
	// ori r6,r6,64775
	ctx.r6.u64 = ctx.r6.u64 | 64775;
	// stw r3,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// ori r5,r5,64776
	ctx.r5.u64 = ctx.r5.u64 | 64776;
	// stw r7,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// lis r24,15
	ctx.r24.s64 = 983040;
	// stw r6,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// lis r23,15
	ctx.r23.s64 = 983040;
	// stw r5,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r10,r26,11144
	ctx.r10.s64 = ctx.r26.s64 + 11144;
	// lbz r11,1(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 1);
	// lis r22,15
	ctx.r22.s64 = 983040;
	// ori r26,r25,64789
	ctx.r26.u64 = ctx.r25.u64 | 64789;
	// ori r25,r24,64792
	ctx.r25.u64 = ctx.r24.u64 | 64792;
	// lis r7,15
	ctx.r7.s64 = 983040;
	// lis r6,15
	ctx.r6.s64 = 983040;
	// stbx r11,r31,r8
	REX_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u8);
	// lis r8,15
	ctx.r8.s64 = 983040;
	// lis r5,15
	ctx.r5.s64 = 983040;
	// lis r3,15
	ctx.r3.s64 = 983040;
	// lis r9,15
	ctx.r9.s64 = 983040;
	// lis r29,15
	ctx.r29.s64 = 983040;
	// lis r28,15
	ctx.r28.s64 = 983040;
	// lis r27,15
	ctx.r27.s64 = 983040;
	// lis r11,15
	ctx.r11.s64 = 983040;
	// lis r31,15
	ctx.r31.s64 = 983040;
	// lis r21,15
	ctx.r21.s64 = 983040;
	// lis r20,15
	ctx.r20.s64 = 983040;
	// lis r19,15
	ctx.r19.s64 = 983040;
	// lis r18,15
	ctx.r18.s64 = 983040;
	// ori r24,r23,64796
	ctx.r24.u64 = ctx.r23.u64 | 64796;
	// ori r23,r22,64800
	ctx.r23.u64 = ctx.r22.u64 | 64800;
	// ori r22,r8,64804
	ctx.r22.u64 = ctx.r8.u64 | 64804;
	// ori r17,r7,64780
	ctx.r17.u64 = ctx.r7.u64 | 64780;
	// ori r16,r6,64781
	ctx.r16.u64 = ctx.r6.u64 | 64781;
	// ori r15,r5,64782
	ctx.r15.u64 = ctx.r5.u64 | 64782;
	// ori r3,r3,64783
	ctx.r3.u64 = ctx.r3.u64 | 64783;
	// ori r9,r9,64785
	ctx.r9.u64 = ctx.r9.u64 | 64785;
	// ori r29,r29,64786
	ctx.r29.u64 = ctx.r29.u64 | 64786;
	// ori r28,r28,64787
	ctx.r28.u64 = ctx.r28.u64 | 64787;
	// ori r27,r27,64788
	ctx.r27.u64 = ctx.r27.u64 | 64788;
	// ori r11,r11,64808
	ctx.r11.u64 = ctx.r11.u64 | 64808;
	// ori r31,r31,64812
	ctx.r31.u64 = ctx.r31.u64 | 64812;
	// ori r21,r21,64813
	ctx.r21.u64 = ctx.r21.u64 | 64813;
	// ori r20,r20,64814
	ctx.r20.u64 = ctx.r20.u64 | 64814;
	// ori r19,r19,64815
	ctx.r19.u64 = ctx.r19.u64 | 64815;
	// ori r18,r18,64816
	ctx.r18.u64 = ctx.r18.u64 | 64816;
	// lis r8,15
	ctx.r8.s64 = 983040;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// stw r23,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r23.u32);
	// lis r5,-30126
	ctx.r5.s64 = -1974337536;
	// lwz r23,84(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lis r7,-30137
	ctx.r7.s64 = -1975058432;
	// stw r24,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// lis r24,-30160
	ctx.r24.s64 = -1976565760;
	// stw r31,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// lwz r31,88(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r24,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
	// lis r24,-30160
	ctx.r24.s64 = -1976565760;
	// stw r10,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stw r24,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r24.u32);
	// lwz r24,112(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r8,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// stw r11,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// lbz r10,2(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 2);
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r6,100(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r8,-13288(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + -13288);
	// addis r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 1048576;
	// stw r22,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r22.u32);
	// lis r22,-30164
	ctx.r22.s64 = -1976827904;
	// addi r5,r5,2352
	ctx.r5.s64 = ctx.r5.s64 + 2352;
	// stw r18,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r18.u32);
	// lwz r18,96(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stbx r10,r11,r6
	REX_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r10.u8);
	// lis r10,-30165
	ctx.r10.s64 = -1976893440;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lis r10,-30165
	ctx.r10.s64 = -1976893440;
	// stw r20,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r20.u32);
	// stw r10,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// lwz r10,108(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// stw r5,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// lwz r5,1460(r22)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r22.u32 + 1460);
	// lwz r20,92(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// stw r6,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// stw r19,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r19.u32);
	// lis r19,-30160
	ctx.r19.s64 = -1976565760;
	// lwz r22,112(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r9,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// ori r22,r22,64817
	ctx.r22.u64 = ctx.r22.u64 | 64817;
	// lwz r9,20296(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 20296);
	// stw r21,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r21.u32);
	// lis r7,-30165
	ctx.r7.s64 = -1976893440;
	// stw r22,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r22.u32);
	// lis r21,-30164
	ctx.r21.s64 = -1976827904;
	// lwz r22,116(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stw r10,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stw r7,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r7.u32);
	// lwz r7,9448(r19)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r19.u32 + 9448);
	// addis r19,r11,16
	ctx.r19.s64 = ctx.r11.s64 + 1048576;
	// lbz r10,3(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 3);
	// stw r22,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r22.u32);
	// addi r19,r19,2608
	ctx.r19.s64 = ctx.r19.s64 + 2608;
	// lwz r6,1476(r21)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r21.u32 + 1476);
	// li r21,0
	ctx.r21.s64 = 0;
	// stw r25,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// lis r25,-30166
	ctx.r25.s64 = -1976958976;
	// stw r19,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r19.u32);
	// stbx r10,r11,r18
	REX_STORE_U8(ctx.r11.u32 + ctx.r18.u32, ctx.r10.u8);
	// lwz r22,108(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// stw r21,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r21.u32);
	// stw r22,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r22.u32);
	// lbz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 4);
	// stbx r10,r11,r20
	REX_STORE_U8(ctx.r11.u32 + ctx.r20.u32, ctx.r10.u8);
	// lbz r10,5(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 5);
	// lwz r4,100(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// stbx r10,r11,r31
	REX_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u8);
	// lbz r10,6228(r23)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r23.u32 + 6228);
	// stbx r10,r11,r4
	REX_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r10.u8);
	// lwz r4,116(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lbz r10,1(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 1);
	// stbx r10,r11,r24
	REX_STORE_U8(ctx.r11.u32 + ctx.r24.u32, ctx.r10.u8);
	// lbz r10,2(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 2);
	// stbx r10,r11,r17
	REX_STORE_U8(ctx.r11.u32 + ctx.r17.u32, ctx.r10.u8);
	// lbz r10,3(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 3);
	// stbx r10,r11,r16
	REX_STORE_U8(ctx.r11.u32 + ctx.r16.u32, ctx.r10.u8);
	// lbz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 4);
	// stbx r10,r11,r15
	REX_STORE_U8(ctx.r11.u32 + ctx.r15.u32, ctx.r10.u8);
	// lbz r10,5(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 5);
	// stbx r10,r11,r3
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u8);
	// lis r24,-30137
	ctx.r24.s64 = -1975058432;
	// lbz r10,30148(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 30148);
	// lis r23,-30160
	ctx.r23.s64 = -1976565760;
	// stbx r10,r11,r14
	REX_STORE_U8(ctx.r11.u32 + ctx.r14.u32, ctx.r10.u8);
	// addi r24,r24,-2024
	ctx.r24.s64 = ctx.r24.s64 + -2024;
	// lwz r3,120(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// addi r23,r23,10240
	ctx.r23.s64 = ctx.r23.s64 + 10240;
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lbz r10,1(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// stbx r10,r11,r4
	REX_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r10.u8);
	// lbz r10,2(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 2);
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stbx r10,r11,r29
	REX_STORE_U8(ctx.r11.u32 + ctx.r29.u32, ctx.r10.u8);
	// lbz r10,3(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 3);
	// stbx r10,r11,r28
	REX_STORE_U8(ctx.r11.u32 + ctx.r28.u32, ctx.r10.u8);
	// lis r28,-30160
	ctx.r28.s64 = -1976565760;
	// addi r28,r28,9984
	ctx.r28.s64 = ctx.r28.s64 + 9984;
	// lbz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 4);
	// stbx r10,r11,r27
	REX_STORE_U8(ctx.r11.u32 + ctx.r27.u32, ctx.r10.u8);
	// lis r27,-30160
	ctx.r27.s64 = -1976565760;
	// addi r27,r27,14984
	ctx.r27.s64 = ctx.r27.s64 + 14984;
	// lbz r10,5(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 5);
	// lwz r3,92(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// stbx r10,r11,r26
	REX_STORE_U8(ctx.r11.u32 + ctx.r26.u32, ctx.r10.u8);
	// lis r26,-30160
	ctx.r26.s64 = -1976565760;
	// stwx r9,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u32);
	// addi r26,r26,7296
	ctx.r26.s64 = ctx.r26.s64 + 7296;
	// lbz r10,8379(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 8379);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stwx r8,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r8.u32);
	// lbz r9,10471(r4)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + 10471);
	// lwz r3,124(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r4,128(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// stwx r7,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r7.u32);
	// lbz r8,13202(r4)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + 13202);
	// lwz r3,132(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,136(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lbz r7,8398(r3)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + 8398);
	// stwx r6,r11,r4
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r6.u32);
	// lwz r3,140(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r4,144(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lbz r6,31299(r25)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r25.u32 + 31299);
	// lis r25,-30160
	ctx.r25.s64 = -1976565760;
	// addi r25,r25,10504
	ctx.r25.s64 = ctx.r25.s64 + 10504;
	// stwx r5,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r5.u32);
	// stbx r10,r11,r4
	REX_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r10.u8);
	// lis r10,-30163
	ctx.r10.s64 = -1976762368;
	// lwz r3,148(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,152(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// stbx r9,r11,r3
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u8);
	// lis r9,-30160
	ctx.r9.s64 = -1976565760;
	// stbx r8,r11,r4
	REX_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r8.u8);
	// lis r8,-30163
	ctx.r8.s64 = -1976762368;
	// lwz r3,156(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r4,160(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// addi r31,r8,7840
	ctx.r31.s64 = ctx.r8.s64 + 7840;
	// lwz r8,172(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// lbz r5,10475(r3)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r3.u32 + 10475);
	// stbx r7,r11,r4
	REX_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r7.u8);
	// lis r7,-30126
	ctx.r7.s64 = -1974337536;
	// lwz r3,164(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,112(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// addi r30,r7,-13064
	ctx.r30.s64 = ctx.r7.s64 + -13064;
	// rotlwi r7,r19,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r19.u32, 0);
	// stbx r6,r11,r3
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r6.u8);
	// lis r6,-30135
	ctx.r6.s64 = -1974927360;
	// stbx r5,r11,r4
	REX_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r5.u8);
	// lis r5,-30165
	ctx.r5.s64 = -1976893440;
	// addi r4,r10,5880
	ctx.r4.s64 = ctx.r10.s64 + 5880;
	// addi r3,r9,7816
	ctx.r3.s64 = ctx.r9.s64 + 7816;
	// addi r29,r6,20776
	ctx.r29.s64 = ctx.r6.s64 + 20776;
	// rotlwi r10,r21,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r21.u32, 0);
	// rotlwi r9,r22,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r22.u32, 0);
	// addi r6,r5,7296
	ctx.r6.s64 = ctx.r5.s64 + 7296;
loc_89FF1280:
	// lhzx r5,r10,r23
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r23.u32);
	// addi r22,r6,256
	ctx.r22.s64 = ctx.r6.s64 + 256;
	// sth r5,-3070(r9)
	REX_STORE_U16(ctx.r9.u32 + -3070, ctx.r5.u16);
	// lhzx r5,r10,r24
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r24.u32);
	// sth r5,-2814(r9)
	REX_STORE_U16(ctx.r9.u32 + -2814, ctx.r5.u16);
	// lhzx r5,r10,r25
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r25.u32);
	// sth r5,-2558(r9)
	REX_STORE_U16(ctx.r9.u32 + -2558, ctx.r5.u16);
	// lhzx r5,r10,r26
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r26.u32);
	// sth r5,-2302(r9)
	REX_STORE_U16(ctx.r9.u32 + -2302, ctx.r5.u16);
	// lhzx r5,r10,r27
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r27.u32);
	// sth r5,-2046(r9)
	REX_STORE_U16(ctx.r9.u32 + -2046, ctx.r5.u16);
	// lhzx r5,r10,r28
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r28.u32);
	// sth r5,-1790(r9)
	REX_STORE_U16(ctx.r9.u32 + -1790, ctx.r5.u16);
	// lhzx r5,r10,r6
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r6.u32);
	// sth r5,-1534(r9)
	REX_STORE_U16(ctx.r9.u32 + -1534, ctx.r5.u16);
	// lhzx r5,r10,r22
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r22.u32);
	// sth r5,-1278(r9)
	REX_STORE_U16(ctx.r9.u32 + -1278, ctx.r5.u16);
	// lhzx r5,r10,r29
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r29.u32);
	// sth r5,-1022(r9)
	REX_STORE_U16(ctx.r9.u32 + -1022, ctx.r5.u16);
	// lhzx r5,r10,r30
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r30.u32);
	// sth r5,-766(r9)
	REX_STORE_U16(ctx.r9.u32 + -766, ctx.r5.u16);
	// lhzx r5,r10,r31
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r31.u32);
	// sth r5,-510(r9)
	REX_STORE_U16(ctx.r9.u32 + -510, ctx.r5.u16);
	// lhzx r5,r10,r3
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r3.u32);
	// sth r5,-254(r9)
	REX_STORE_U16(ctx.r9.u32 + -254, ctx.r5.u16);
	// lhzx r5,r10,r4
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r4.u32);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// sthu r5,2(r9)
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r5.u16);
	ctx.r9.u32 = ea;
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
	// bdnz 0x89ff1280
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89FF1280;
	// lis r10,-30160
	ctx.r10.s64 = -1976565760;
	// li r8,16
	ctx.r8.s64 = 16;
	// addi r9,r10,8112
	ctx.r9.s64 = ctx.r10.s64 + 8112;
	// addis r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 1048576;
	// addi r10,r10,4148
	ctx.r10.s64 = ctx.r10.s64 + 4148;
loc_89FF1338:
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
	// bne 0x89ff1338
	if (!ctx.cr0.eq) goto loc_89FF1338;
	// lis r10,-30137
	ctx.r10.s64 = -1975058432;
	// lis r5,16
	ctx.r5.s64 = 1048576;
	// lis r8,-30160
	ctx.r8.s64 = -1976565760;
	// ori r30,r5,4404
	ctx.r30.u64 = ctx.r5.u64 | 4404;
	// lis r31,-30160
	ctx.r31.s64 = -1976565760;
	// lwz r9,-1768(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + -1768);
	// lis r7,-30165
	ctx.r7.s64 = -1976893440;
	// lis r6,-30159
	ctx.r6.s64 = -1976500224;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// lhz r8,29208(r8)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + 29208);
	// lis r3,-30165
	ctx.r3.s64 = -1976893440;
	// lis r28,-30165
	ctx.r28.s64 = -1976893440;
	// lis r10,16
	ctx.r10.s64 = 1048576;
	// stwx r9,r11,r30
	REX_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r9.u32);
	// lis r29,16
	ctx.r29.s64 = 1048576;
	// lhz r7,10472(r7)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r7.u32 + 10472);
	// ori r27,r4,4408
	ctx.r27.u64 = ctx.r4.u64 | 4408;
	// lhz r4,29616(r31)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 29616);
	// ori r10,r10,4410
	ctx.r10.u64 = ctx.r10.u64 | 4410;
	// lhz r6,-18932(r6)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + -18932);
	// ori r30,r29,4412
	ctx.r30.u64 = ctx.r29.u64 | 4412;
	// lbz r5,12682(r3)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r3.u32 + 12682);
	// lis r31,-30160
	ctx.r31.s64 = -1976565760;
	// lhz r3,13208(r28)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r28.u32 + 13208);
	// lis r9,16
	ctx.r9.s64 = 1048576;
	// lis r28,-30160
	ctx.r28.s64 = -1976565760;
	// sthx r8,r11,r27
	REX_STORE_U16(ctx.r11.u32 + ctx.r27.u32, ctx.r8.u16);
	// ori r9,r9,4414
	ctx.r9.u64 = ctx.r9.u64 | 4414;
	// sthx r7,r11,r10
	REX_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u16);
	// lis r29,16
	ctx.r29.s64 = 1048576;
	// sthx r6,r11,r30
	REX_STORE_U16(ctx.r11.u32 + ctx.r30.u32, ctx.r6.u16);
	// lis r26,-30159
	ctx.r26.s64 = -1976500224;
	// lhz r7,29620(r31)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + 29620);
	// lis r10,16
	ctx.r10.s64 = 1048576;
	// lis r31,16
	ctx.r31.s64 = 1048576;
	// lbz r6,7290(r28)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r28.u32 + 7290);
	// ori r30,r29,4416
	ctx.r30.u64 = ctx.r29.u64 | 4416;
	// stbx r5,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r5.u8);
	// ori r27,r10,4418
	ctx.r27.u64 = ctx.r10.u64 | 4418;
	// lis r29,16
	ctx.r29.s64 = 1048576;
	// lhz r8,-14776(r26)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r26.u32 + -14776);
	// ori r5,r31,4420
	ctx.r5.u64 = ctx.r31.u64 | 4420;
	// lis r28,16
	ctx.r28.s64 = 1048576;
	// ori r31,r29,4422
	ctx.r31.u64 = ctx.r29.u64 | 4422;
	// sthx r4,r11,r30
	REX_STORE_U16(ctx.r11.u32 + ctx.r30.u32, ctx.r4.u16);
	// ori r10,r28,4424
	ctx.r10.u64 = ctx.r28.u64 | 4424;
	// sthx r3,r11,r27
	REX_STORE_U16(ctx.r11.u32 + ctx.r27.u32, ctx.r3.u16);
	// lis r4,-30135
	ctx.r4.s64 = -1974927360;
	// li r9,16
	ctx.r9.s64 = 16;
	// sthx r8,r11,r5
	REX_STORE_U16(ctx.r11.u32 + ctx.r5.u32, ctx.r8.u16);
	// addi r5,r4,20376
	ctx.r5.s64 = ctx.r4.s64 + 20376;
	// sthx r7,r11,r31
	REX_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r7.u16);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stbx r6,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r6.u8);
	// addi r10,r5,-4
	ctx.r10.s64 = ctx.r5.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_89FF1448:
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r9,4(r8)
	ea = 4 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x89ff1448
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89FF1448;
	// lis r10,-30160
	ctx.r10.s64 = -1976565760;
	// lis r9,-30137
	ctx.r9.s64 = -1975058432;
	// lis r8,-30160
	ctx.r8.s64 = -1976565760;
	// lis r7,16
	ctx.r7.s64 = 1048576;
	// lis r5,16
	ctx.r5.s64 = 1048576;
	// lbz r10,10762(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 10762);
	// ori r3,r7,4492
	ctx.r3.u64 = ctx.r7.u64 | 4492;
	// lhz r9,-1224(r9)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + -1224);
	// lis r4,-30160
	ctx.r4.s64 = -1976565760;
	// ori r31,r5,4494
	ctx.r31.u64 = ctx.r5.u64 | 4494;
	// lhz r7,28880(r8)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r8.u32 + 28880);
	// lis r6,-30163
	ctx.r6.s64 = -1976762368;
	// lis r8,16
	ctx.r8.s64 = 1048576;
	// lis r30,16
	ctx.r30.s64 = 1048576;
	// stbx r10,r11,r3
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u8);
	// lis r29,16
	ctx.r29.s64 = 1048576;
	// lbz r5,7283(r4)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r4.u32 + 7283);
	// ori r28,r8,4496
	ctx.r28.u64 = ctx.r8.u64 | 4496;
	// sthx r9,r11,r31
	REX_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u16);
	// lbz r6,8098(r6)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r6.u32 + 8098);
	// ori r3,r30,4498
	ctx.r3.u64 = ctx.r30.u64 | 4498;
	// ori r30,r29,4499
	ctx.r30.u64 = ctx.r29.u64 | 4499;
	// lis r4,-30137
	ctx.r4.s64 = -1975058432;
	// li r8,1024
	ctx.r8.s64 = 1024;
	// addis r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 1048576;
	// sthx r7,r11,r28
	REX_STORE_U16(ctx.r11.u32 + ctx.r28.u32, ctx.r7.u16);
	// addi r10,r4,3704
	ctx.r10.s64 = ctx.r4.s64 + 3704;
	// stbx r6,r11,r3
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r6.u8);
	// addi r9,r9,4500
	ctx.r9.s64 = ctx.r9.s64 + 4500;
	// stbx r5,r11,r30
	REX_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r5.u8);
	// addi r7,r10,-2
	ctx.r7.s64 = ctx.r10.s64 + -2;
	// addi r6,r9,-2
	ctx.r6.s64 = ctx.r9.s64 + -2;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_89FF14D8:
	// lhzu r8,2(r7)
	ea = 2 + ctx.r7.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r7.u32 = ea;
	// sthu r8,2(r6)
	ea = 2 + ctx.r6.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r6.u32 = ea;
	// bdnz 0x89ff14d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89FF14D8;
	// lis r8,-30165
	ctx.r8.s64 = -1976893440;
	// lis r6,-30126
	ctx.r6.s64 = -1974337536;
	// lis r5,-30160
	ctx.r5.s64 = -1976565760;
	// lis r4,-30135
	ctx.r4.s64 = -1974927360;
	// lis r3,16
	ctx.r3.s64 = 1048576;
	// lhz r7,10452(r8)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r8.u32 + 10452);
	// lis r31,16
	ctx.r31.s64 = 1048576;
	// lis r8,16
	ctx.r8.s64 = 1048576;
	// lhz r6,-13100(r6)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + -13100);
	// ori r3,r3,6548
	ctx.r3.u64 = ctx.r3.u64 | 6548;
	// lhz r5,7280(r5)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r5.u32 + 7280);
	// lis r30,16
	ctx.r30.s64 = 1048576;
	// lhz r4,20444(r4)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r4.u32 + 20444);
	// ori r31,r31,6550
	ctx.r31.u64 = ctx.r31.u64 | 6550;
	// ori r29,r8,6552
	ctx.r29.u64 = ctx.r8.u64 | 6552;
	// ori r30,r30,6554
	ctx.r30.u64 = ctx.r30.u64 | 6554;
	// li r8,1024
	ctx.r8.s64 = 1024;
	// sthx r7,r11,r3
	REX_STORE_U16(ctx.r11.u32 + ctx.r3.u32, ctx.r7.u16);
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
	// sthx r6,r11,r31
	REX_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r6.u16);
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// sthx r5,r11,r29
	REX_STORE_U16(ctx.r11.u32 + ctx.r29.u32, ctx.r5.u16);
	// sthx r4,r11,r30
	REX_STORE_U16(ctx.r11.u32 + ctx.r30.u32, ctx.r4.u16);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_89FF1544:
	// lhzu r8,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x89ff1544
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89FF1544;
	// lis r10,-30160
	ctx.r10.s64 = -1976565760;
	// lis r9,16
	ctx.r9.s64 = 1048576;
	// addi r8,r10,14676
	ctx.r8.s64 = ctx.r10.s64 + 14676;
	// ori r7,r9,6556
	ctx.r7.u64 = ctx.r9.u64 | 6556;
	// lis r9,16
	ctx.r9.s64 = 1048576;
	// lbz r10,14676(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 14676);
	// lis r29,16
	ctx.r29.s64 = 1048576;
	// ori r9,r9,6572
	ctx.r9.u64 = ctx.r9.u64 | 6572;
	// lis r28,16
	ctx.r28.s64 = 1048576;
	// stw r9,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// lis r27,16
	ctx.r27.s64 = 1048576;
	// ori r9,r29,6573
	ctx.r9.u64 = ctx.r29.u64 | 6573;
	// stbx r10,r11,r7
	REX_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r10.u8);
	// lis r26,16
	ctx.r26.s64 = 1048576;
	// lis r5,16
	ctx.r5.s64 = 1048576;
	// stw r9,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// lis r3,16
	ctx.r3.s64 = 1048576;
	// ori r29,r28,6575
	ctx.r29.u64 = ctx.r28.u64 | 6575;
	// ori r28,r27,6576
	ctx.r28.u64 = ctx.r27.u64 | 6576;
	// ori r5,r5,6557
	ctx.r5.u64 = ctx.r5.u64 | 6557;
	// stw r29,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// ori r4,r4,6562
	ctx.r4.u64 = ctx.r4.u64 | 6562;
	// stw r28,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// ori r3,r3,6567
	ctx.r3.u64 = ctx.r3.u64 | 6567;
	// stw r5,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r5.u32);
	// ori r27,r26,6577
	ctx.r27.u64 = ctx.r26.u64 | 6577;
	// stw r4,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r4.u32);
	// lis r31,16
	ctx.r31.s64 = 1048576;
	// stw r3,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r3.u32);
	// lis r30,16
	ctx.r30.s64 = 1048576;
	// stw r27,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r27.u32);
	// lis r7,16
	ctx.r7.s64 = 1048576;
	// lis r25,16
	ctx.r25.s64 = 1048576;
	// lis r24,16
	ctx.r24.s64 = 1048576;
	// lis r23,16
	ctx.r23.s64 = 1048576;
	// lis r22,16
	ctx.r22.s64 = 1048576;
	// ori r5,r31,6558
	ctx.r5.u64 = ctx.r31.u64 | 6558;
	// ori r4,r30,6563
	ctx.r4.u64 = ctx.r30.u64 | 6563;
	// ori r3,r7,6568
	ctx.r3.u64 = ctx.r7.u64 | 6568;
	// stw r5,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r5.u32);
	// lbz r10,5(r8)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + 5);
	// ori r29,r25,6578
	ctx.r29.u64 = ctx.r25.u64 | 6578;
	// ori r28,r24,6579
	ctx.r28.u64 = ctx.r24.u64 | 6579;
	// stw r4,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r4.u32);
	// ori r27,r23,6580
	ctx.r27.u64 = ctx.r23.u64 | 6580;
	// stw r3,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// ori r26,r22,6561
	ctx.r26.u64 = ctx.r22.u64 | 6561;
	// stw r29,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// lis r6,-30163
	ctx.r6.s64 = -1976762368;
	// stw r28,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// stw r27,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// lis r21,16
	ctx.r21.s64 = 1048576;
	// addi r20,r6,8748
	ctx.r20.s64 = ctx.r6.s64 + 8748;
	// lis r19,16
	ctx.r19.s64 = 1048576;
	// lis r7,16
	ctx.r7.s64 = 1048576;
	// stbx r10,r11,r26
	REX_STORE_U8(ctx.r11.u32 + ctx.r26.u32, ctx.r10.u8);
	// lis r5,16
	ctx.r5.s64 = 1048576;
	// stw r20,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r20.u32);
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// lis r3,16
	ctx.r3.s64 = 1048576;
	// lis r9,16
	ctx.r9.s64 = 1048576;
	// lis r31,16
	ctx.r31.s64 = 1048576;
	// lis r30,16
	ctx.r30.s64 = 1048576;
	// lis r29,16
	ctx.r29.s64 = 1048576;
	// lis r28,16
	ctx.r28.s64 = 1048576;
	// lis r27,16
	ctx.r27.s64 = 1048576;
	// ori r25,r21,6566
	ctx.r25.u64 = ctx.r21.u64 | 6566;
	// ori r24,r19,6571
	ctx.r24.u64 = ctx.r19.u64 | 6571;
	// ori r7,r7,6559
	ctx.r7.u64 = ctx.r7.u64 | 6559;
	// ori r5,r5,6564
	ctx.r5.u64 = ctx.r5.u64 | 6564;
	// ori r4,r4,6569
	ctx.r4.u64 = ctx.r4.u64 | 6569;
	// ori r3,r3,6574
	ctx.r3.u64 = ctx.r3.u64 | 6574;
	// ori r9,r9,6560
	ctx.r9.u64 = ctx.r9.u64 | 6560;
	// ori r31,r31,6565
	ctx.r31.u64 = ctx.r31.u64 | 6565;
	// ori r30,r30,6570
	ctx.r30.u64 = ctx.r30.u64 | 6570;
	// ori r29,r29,6581
	ctx.r29.u64 = ctx.r29.u64 | 6581;
	// ori r28,r28,6582
	ctx.r28.u64 = ctx.r28.u64 | 6582;
	// ori r27,r27,6584
	ctx.r27.u64 = ctx.r27.u64 | 6584;
	// lis r23,16
	ctx.r23.s64 = 1048576;
	// lis r10,-30164
	ctx.r10.s64 = -1976827904;
	// lbz r10,1471(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 1471);
	// rotlwi r26,r20,0
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r20.u32, 0);
	// stw r31,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// lis r22,-30164
	ctx.r22.s64 = -1976827904;
	// lwz r31,148(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lis r20,16
	ctx.r20.s64 = 1048576;
	// lwz r21,172(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// lis r18,16
	ctx.r18.s64 = 1048576;
	// lwz r19,168(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// lis r16,16
	ctx.r16.s64 = 1048576;
	// stb r10,84(r1)
	REX_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
	// lis r14,16
	ctx.r14.s64 = 1048576;
	// lbz r10,8748(r6)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r6.u32 + 8748);
	// ori r23,r23,6586
	ctx.r23.u64 = ctx.r23.u64 | 6586;
	// lwz r17,164(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// ori r20,r20,6588
	ctx.r20.u64 = ctx.r20.u64 | 6588;
	// lwz r15,160(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// ori r18,r18,6590
	ctx.r18.u64 = ctx.r18.u64 | 6590;
	// stw r31,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// lis r31,-30137
	ctx.r31.s64 = -1975058432;
	// lbz r22,1474(r22)
	ctx.r22.u64 = REX_LOAD_U8(ctx.r22.u32 + 1474);
	// ori r16,r16,6592
	ctx.r16.u64 = ctx.r16.u64 | 6592;
	// stbx r10,r11,r25
	REX_STORE_U8(ctx.r11.u32 + ctx.r25.u32, ctx.r10.u8);
	// lis r10,-30160
	ctx.r10.s64 = -1976565760;
	// stw r27,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r27.u32);
	// ori r14,r14,6594
	ctx.r14.u64 = ctx.r14.u64 | 6594;
	// stw r10,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// lwz r27,156(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// stw r3,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r3.u32);
	// lwz r3,144(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// lis r28,16
	ctx.r28.s64 = 1048576;
	// stw r4,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r4.u32);
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// stw r5,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// lis r5,16
	ctx.r5.s64 = 1048576;
	// stw r7,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r7.u32);
	// lis r7,16
	ctx.r7.s64 = 1048576;
	// stw r29,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// ori r6,r28,6595
	ctx.r6.u64 = ctx.r28.u64 | 6595;
	// stb r22,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r22.u8);
	// lis r22,16
	ctx.r22.s64 = 1048576;
	// lwz r29,152(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// ori r4,r4,6604
	ctx.r4.u64 = ctx.r4.u64 | 6604;
	// ori r28,r22,6616
	ctx.r28.u64 = ctx.r22.u64 | 6616;
	// stw r30,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// stw r9,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r9.u32);
	// ori r5,r5,6608
	ctx.r5.u64 = ctx.r5.u64 | 6608;
	// ori r7,r7,6612
	ctx.r7.u64 = ctx.r7.u64 | 6612;
	// stw r3,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r3.u32);
	// lis r30,16
	ctx.r30.s64 = 1048576;
	// stw r28,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r28.u32);
	// lis r9,16
	ctx.r9.s64 = 1048576;
	// stw r7,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r7.u32);
	// lis r3,-30166
	ctx.r3.s64 = -1976958976;
	// stw r5,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r5.u32);
	// stw r4,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r4.u32);
	// ori r30,r30,6596
	ctx.r30.u64 = ctx.r30.u64 | 6596;
	// lbz r10,5(r26)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r26.u32 + 5);
	// ori r9,r9,6600
	ctx.r9.u64 = ctx.r9.u64 | 6600;
	// addi r25,r3,31832
	ctx.r25.s64 = ctx.r3.s64 + 31832;
	// addi r22,r31,-1216
	ctx.r22.s64 = ctx.r31.s64 + -1216;
	// lis r28,-30160
	ctx.r28.s64 = -1976565760;
	// lis r7,-30163
	ctx.r7.s64 = -1976762368;
	// stbx r10,r11,r24
	REX_STORE_U8(ctx.r11.u32 + ctx.r24.u32, ctx.r10.u8);
	// lis r5,-30166
	ctx.r5.s64 = -1976958976;
	// lbz r10,1(r8)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + 1);
	// lis r4,-30135
	ctx.r4.s64 = -1974927360;
	// stbx r10,r11,r21
	REX_STORE_U8(ctx.r11.u32 + ctx.r21.u32, ctx.r10.u8);
	// lbz r10,6(r8)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + 6);
	// stbx r10,r11,r19
	REX_STORE_U8(ctx.r11.u32 + ctx.r19.u32, ctx.r10.u8);
	// lbz r10,1(r26)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r26.u32 + 1);
	// stbx r10,r11,r17
	REX_STORE_U8(ctx.r11.u32 + ctx.r17.u32, ctx.r10.u8);
	// lbz r10,6(r26)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r26.u32 + 6);
	// stbx r10,r11,r15
	REX_STORE_U8(ctx.r11.u32 + ctx.r15.u32, ctx.r10.u8);
	// lbz r10,2(r8)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + 2);
	// stbx r10,r11,r27
	REX_STORE_U8(ctx.r11.u32 + ctx.r27.u32, ctx.r10.u8);
	// lbz r10,7(r8)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + 7);
	// stbx r10,r11,r29
	REX_STORE_U8(ctx.r11.u32 + ctx.r29.u32, ctx.r10.u8);
	// lbz r10,2(r26)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r26.u32 + 2);
	// lwz r29,176(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// stbx r10,r11,r29
	REX_STORE_U8(ctx.r11.u32 + ctx.r29.u32, ctx.r10.u8);
	// lis r24,-30160
	ctx.r24.s64 = -1976565760;
	// lwz r29,172(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// lis r19,-30165
	ctx.r19.s64 = -1976893440;
	// lwz r27,132(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lis r15,-30137
	ctx.r15.s64 = -1975058432;
	// stw r9,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// lwz r9,148(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lhz r28,14952(r28)
	ctx.r28.u64 = REX_LOAD_U16(ctx.r28.u32 + 14952);
	// stw r14,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r14.u32);
	// lbz r14,80(r1)
	ctx.r14.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// lhz r7,-23172(r7)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r7.u32 + -23172);
	// lhz r9,7552(r9)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + 7552);
	// sth r28,100(r1)
	REX_STORE_U16(ctx.r1.u32 + 100, ctx.r28.u16);
	// lis r28,16
	ctx.r28.s64 = 1048576;
	// lwz r17,120(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// stb r14,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r14.u8);
	// lis r14,-30137
	ctx.r14.s64 = -1975058432;
	// sth r7,96(r1)
	REX_STORE_U16(ctx.r1.u32 + 96, ctx.r7.u16);
	// li r7,13
	ctx.r7.s64 = 13;
	// stw r23,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r23.u32);
	// ori r28,r28,6619
	ctx.r28.u64 = ctx.r28.u64 | 6619;
	// lwz r21,124(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r23,112(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lhz r5,31824(r5)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r5.u32 + 31824);
	// lhz r4,21032(r4)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r4.u32 + 21032);
	// lbz r24,8375(r24)
	ctx.r24.u64 = REX_LOAD_U8(ctx.r24.u32 + 8375);
	// lbz r10,7(r26)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r26.u32 + 7);
	// lbz r19,10578(r19)
	ctx.r19.u64 = REX_LOAD_U8(ctx.r19.u32 + 10578);
	// stbx r10,r11,r29
	REX_STORE_U8(ctx.r11.u32 + ctx.r29.u32, ctx.r10.u8);
	// lwz r29,168(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// stw r20,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r20.u32);
	// lbz r10,3(r8)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + 3);
	// stbx r10,r11,r29
	REX_STORE_U8(ctx.r11.u32 + ctx.r29.u32, ctx.r10.u8);
	// lwz r29,164(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// stw r18,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r18.u32);
	// lwz r18,116(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lbz r10,8(r8)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + 8);
	// stbx r10,r11,r29
	REX_STORE_U8(ctx.r11.u32 + ctx.r29.u32, ctx.r10.u8);
	// lwz r29,160(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// lbz r10,3(r26)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r26.u32 + 3);
	// stbx r10,r11,r29
	REX_STORE_U8(ctx.r11.u32 + ctx.r29.u32, ctx.r10.u8);
	// lwz r29,156(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// stw r16,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r16.u32);
	// lis r16,-30166
	ctx.r16.s64 = -1976958976;
	// lbz r10,8(r26)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r26.u32 + 8);
	// stbx r10,r11,r29
	REX_STORE_U8(ctx.r11.u32 + ctx.r29.u32, ctx.r10.u8);
	// lwz r29,152(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// lbz r10,4(r8)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + 4);
	// stbx r10,r11,r29
	REX_STORE_U8(ctx.r11.u32 + ctx.r29.u32, ctx.r10.u8);
	// lis r29,-30160
	ctx.r29.s64 = -1976565760;
	// lbz r10,9(r8)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + 9);
	// lwz r8,140(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// stw r6,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r6.u32);
	// lis r6,-30165
	ctx.r6.s64 = -1976893440;
	// lhz r29,7288(r29)
	ctx.r29.u64 = REX_LOAD_U16(ctx.r29.u32 + 7288);
	// stbx r10,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u8);
	// lbz r10,4(r26)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r26.u32 + 4);
	// lwz r8,136(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// stw r30,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// lis r30,-30160
	ctx.r30.s64 = -1976565760;
	// stbx r10,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u8);
	// lis r8,-30163
	ctx.r8.s64 = -1976762368;
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r8,r8,6144
	ctx.r8.s64 = ctx.r8.s64 + 6144;
	// sth r9,104(r1)
	REX_STORE_U16(ctx.r1.u32 + 104, ctx.r9.u16);
	// lis r9,16
	ctx.r9.s64 = 1048576;
	// stw r8,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r8.u32);
	// lis r8,16
	ctx.r8.s64 = 1048576;
	// addis r20,r11,16
	ctx.r20.s64 = ctx.r11.s64 + 1048576;
	// ori r8,r8,6617
	ctx.r8.u64 = ctx.r8.u64 | 6617;
	// addi r20,r20,7036
	ctx.r20.s64 = ctx.r20.s64 + 7036;
	// stw r8,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// ori r9,r9,6618
	ctx.r9.u64 = ctx.r9.u64 | 6618;
	// lbz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// lbz r10,9(r26)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r26.u32 + 9);
	// lwz r26,128(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// stb r10,88(r1)
	REX_STORE_U8(ctx.r1.u32 + 88, ctx.r10.u8);
	// lis r10,-30160
	ctx.r10.s64 = -1976565760;
	// stw r16,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r16.u32);
	// addi r16,r16,31300
	ctx.r16.s64 = ctx.r16.s64 + 31300;
	// stw r28,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// lbz r28,88(r1)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r1.u32 + 88);
	// lbz r10,8374(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 8374);
	// stw r9,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// lbz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// stw r16,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r16.u32);
	// stbx r28,r11,r27
	REX_STORE_U8(ctx.r11.u32 + ctx.r27.u32, ctx.r28.u8);
	// stb r10,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// lhz r16,100(r1)
	ctx.r16.u64 = REX_LOAD_U16(ctx.r1.u32 + 100);
	// lhz r27,104(r1)
	ctx.r27.u64 = REX_LOAD_U16(ctx.r1.u32 + 104);
	// sth r4,100(r1)
	REX_STORE_U16(ctx.r1.u32 + 100, ctx.r4.u16);
	// lwz r4,108(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// sth r5,104(r1)
	REX_STORE_U16(ctx.r1.u32 + 104, ctx.r5.u16);
	// lhz r5,96(r1)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r1.u32 + 96);
	// stw r7,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r7.u32);
	// lwz r6,-32156(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + -32156);
	// lwz r15,-1248(r15)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r15.u32 + -1248);
	// lwz r30,22752(r30)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 22752);
	// lwz r14,-1228(r14)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r14.u32 + -1228);
	// lwz r28,176(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// stw r6,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r6.u32);
	// clrlwi r6,r29,16
	ctx.r6.u64 = ctx.r29.u32 & 0xFFFF;
	// addi r28,r28,416
	ctx.r28.s64 = ctx.r28.s64 + 416;
	// sth r29,96(r1)
	REX_STORE_U16(ctx.r1.u32 + 96, ctx.r29.u16);
	// stb r24,88(r1)
	REX_STORE_U8(ctx.r1.u32 + 88, ctx.r24.u8);
	// stb r19,84(r1)
	REX_STORE_U8(ctx.r1.u32 + 84, ctx.r19.u8);
	// stw r15,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r15.u32);
	// stw r30,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// lbz r10,31832(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 31832);
	// lwz r3,92(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// stw r14,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r14.u32);
	// stw r20,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r20.u32);
	// lhz r7,100(r1)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r1.u32 + 100);
	// stbx r10,r11,r26
	REX_STORE_U8(ctx.r11.u32 + ctx.r26.u32, ctx.r10.u8);
	// stw r28,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r28.u32);
	// lbz r10,1(r25)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r25.u32 + 1);
	// stbx r10,r11,r21
	REX_STORE_U8(ctx.r11.u32 + ctx.r21.u32, ctx.r10.u8);
	// lbz r10,-1216(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + -1216);
	// stbx r10,r11,r17
	REX_STORE_U8(ctx.r11.u32 + ctx.r17.u32, ctx.r10.u8);
	// lbz r10,1(r22)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r22.u32 + 1);
	// stbx r10,r11,r18
	REX_STORE_U8(ctx.r11.u32 + ctx.r18.u32, ctx.r10.u8);
	// stbx r8,r11,r23
	REX_STORE_U8(ctx.r11.u32 + ctx.r23.u32, ctx.r8.u8);
	// stbx r9,r11,r4
	REX_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r9.u8);
	// clrlwi r4,r24,24
	ctx.r4.u64 = ctx.r24.u32 & 0xFF;
	// lwz r9,180(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// sthx r27,r11,r3
	REX_STORE_U16(ctx.r11.u32 + ctx.r3.u32, ctx.r27.u16);
	// clrlwi r3,r19,24
	ctx.r3.u64 = ctx.r19.u32 & 0xFF;
	// lhz r8,104(r1)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 104);
	// sthx r16,r11,r9
	REX_STORE_U16(ctx.r11.u32 + ctx.r9.u32, ctx.r16.u16);
	// lwz r9,172(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// sthx r5,r11,r9
	REX_STORE_U16(ctx.r11.u32 + ctx.r9.u32, ctx.r5.u16);
	// lwz r9,168(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// lbz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// sthx r8,r11,r9
	REX_STORE_U16(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u16);
	// rotlwi r8,r15,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r15.u32, 0);
	// lwz r9,164(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// sthx r7,r11,r9
	REX_STORE_U16(ctx.r11.u32 + ctx.r9.u32, ctx.r7.u16);
	// rotlwi r7,r30,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// lwz r9,156(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// sthx r6,r11,r9
	REX_STORE_U16(ctx.r11.u32 + ctx.r9.u32, ctx.r6.u16);
	// lwz r9,148(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r6,152(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// stbx r4,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r4.u8);
	// rotlwi r4,r14,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r14.u32, 0);
	// lwz r9,140(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// stbx r3,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r3.u8);
	// lwz r3,136(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r9,132(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// stbx r5,r11,r3
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r5.u8);
	// stwx r8,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u32);
	// lwz r8,184(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r5,128(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r3,124(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// stwx r7,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r7.u32);
	// lwz r7,188(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// stwx r6,r11,r7
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r6.u32);
	// lwz r6,192(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// stwx r4,r11,r6
	REX_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r4.u32);
	// lwz r4,200(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// lbz r10,31300(r5)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r5.u32 + 31300);
	// stbx r10,r11,r4
	REX_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r10.u8);
	// lbz r10,1(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// lwz r9,120(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r8,116(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r7,112(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r5,204(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// stbx r10,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u8);
	// rotlwi r9,r20,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r20.u32, 0);
	// lbz r10,2(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 2);
	// stbx r10,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u8);
	// lbz r10,3(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 3);
	// stbx r10,r11,r7
	REX_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r10.u8);
	// rotlwi r10,r28,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r28.u32, 0);
loc_89FF1A90:
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r8,r10,-420
	ctx.r8.s64 = ctx.r10.s64 + -420;
	// addi r7,r9,-420
	ctx.r7.s64 = ctx.r9.s64 + -420;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_89FF1AA0:
	// lwzu r6,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r6.u64 = REX_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// stwu r6,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r7.u32 = ea;
	// bdnz 0x89ff1aa0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89FF1AA0;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// addi r7,r9,-4
	ctx.r7.s64 = ctx.r9.s64 + -4;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_89FF1ABC:
	// lwzu r6,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r6.u64 = REX_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// stwu r6,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r7.u32 = ea;
	// bdnz 0x89ff1abc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89FF1ABC;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r8,r10,412
	ctx.r8.s64 = ctx.r10.s64 + 412;
	// addi r7,r9,412
	ctx.r7.s64 = ctx.r9.s64 + 412;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_89FF1AD8:
	// lwzu r6,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r6.u64 = REX_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// stwu r6,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r7.u32 = ea;
	// bdnz 0x89ff1ad8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89FF1AD8;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r8,r10,828
	ctx.r8.s64 = ctx.r10.s64 + 828;
	// addi r7,r9,828
	ctx.r7.s64 = ctx.r9.s64 + 828;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_89FF1AF4:
	// lwzu r6,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r6.u64 = REX_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// stwu r6,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r7.u32 = ea;
	// bdnz 0x89ff1af4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89FF1AF4;
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// bne 0x89ff1a90
	if (!ctx.cr0.eq) goto loc_89FF1A90;
	// lis r10,-30160
	ctx.r10.s64 = -1976565760;
	// lis r9,-30165
	ctx.r9.s64 = -1976893440;
	// lis r8,-30165
	ctx.r8.s64 = -1976893440;
	// lis r29,16
	ctx.r29.s64 = 1048576;
	// lis r28,16
	ctx.r28.s64 = 1048576;
	// lis r27,16
	ctx.r27.s64 = 1048576;
	// lbz r10,8390(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 8390);
	// ori r29,r29,8284
	ctx.r29.u64 = ctx.r29.u64 | 8284;
	// lbz r9,10478(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 10478);
	// ori r28,r28,8285
	ctx.r28.u64 = ctx.r28.u64 | 8285;
	// lwz r8,-26616(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + -26616);
	// ori r27,r27,8288
	ctx.r27.u64 = ctx.r27.u64 | 8288;
	// lis r7,-30166
	ctx.r7.s64 = -1976958976;
	// lis r6,-30164
	ctx.r6.s64 = -1976827904;
	// stbx r10,r11,r29
	REX_STORE_U8(ctx.r11.u32 + ctx.r29.u32, ctx.r10.u8);
	// lis r5,-30160
	ctx.r5.s64 = -1976565760;
	// stbx r9,r11,r28
	REX_STORE_U8(ctx.r11.u32 + ctx.r28.u32, ctx.r9.u8);
	// lis r4,-30160
	ctx.r4.s64 = -1976565760;
	// stwx r8,r11,r27
	REX_STORE_U32(ctx.r11.u32 + ctx.r27.u32, ctx.r8.u32);
	// lis r3,-30166
	ctx.r3.s64 = -1976958976;
	// lis r31,-30165
	ctx.r31.s64 = -1976893440;
	// lbz r7,31831(r7)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + 31831);
	// lis r30,-30166
	ctx.r30.s64 = -1976958976;
	// lbz r6,1522(r6)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r6.u32 + 1522);
	// lbz r5,9459(r5)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r5.u32 + 9459);
	// lis r9,16
	ctx.r9.s64 = 1048576;
	// lbz r4,6235(r4)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r4.u32 + 6235);
	// lis r10,16
	ctx.r10.s64 = 1048576;
	// lbz r3,31826(r3)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r3.u32 + 31826);
	// lis r8,16
	ctx.r8.s64 = 1048576;
	// lbz r31,13203(r31)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r31.u32 + 13203);
	// ori r9,r9,8306
	ctx.r9.u64 = ctx.r9.u64 | 8306;
	// lbz r30,31835(r30)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r30.u32 + 31835);
	// lis r29,16
	ctx.r29.s64 = 1048576;
	// stb r7,88(r1)
	REX_STORE_U8(ctx.r1.u32 + 88, ctx.r7.u8);
	// lis r7,16
	ctx.r7.s64 = 1048576;
	// stb r6,84(r1)
	REX_STORE_U8(ctx.r1.u32 + 84, ctx.r6.u8);
	// lis r6,16
	ctx.r6.s64 = 1048576;
	// stb r5,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r5.u8);
	// lis r5,16
	ctx.r5.s64 = 1048576;
	// stb r4,92(r1)
	REX_STORE_U8(ctx.r1.u32 + 92, ctx.r4.u8);
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// stb r3,96(r1)
	REX_STORE_U8(ctx.r1.u32 + 96, ctx.r3.u8);
	// lis r3,-30164
	ctx.r3.s64 = -1976827904;
	// ori r7,r7,8294
	ctx.r7.u64 = ctx.r7.u64 | 8294;
	// stb r31,100(r1)
	REX_STORE_U8(ctx.r1.u32 + 100, ctx.r31.u8);
	// ori r6,r6,8295
	ctx.r6.u64 = ctx.r6.u64 | 8295;
	// stb r30,104(r1)
	REX_STORE_U8(ctx.r1.u32 + 104, ctx.r30.u8);
	// ori r5,r5,8296
	ctx.r5.u64 = ctx.r5.u64 | 8296;
	// stw r7,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r7.u32);
	// lis r31,16
	ctx.r31.s64 = 1048576;
	// stw r6,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r6.u32);
	// ori r4,r4,8308
	ctx.r4.u64 = ctx.r4.u64 | 8308;
	// stw r5,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r5.u32);
	// lis r30,16
	ctx.r30.s64 = 1048576;
	// stw r9,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r9.u32);
	// ori r10,r10,8305
	ctx.r10.u64 = ctx.r10.u64 | 8305;
	// stw r4,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r4.u32);
	// ori r8,r8,8307
	ctx.r8.u64 = ctx.r8.u64 | 8307;
	// lis r28,16
	ctx.r28.s64 = 1048576;
	// stw r10,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// lis r27,16
	ctx.r27.s64 = 1048576;
	// stw r8,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r8.u32);
	// lis r7,16
	ctx.r7.s64 = 1048576;
	// lbz r10,1516(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 1516);
	// lis r6,16
	ctx.r6.s64 = 1048576;
	// lis r5,16
	ctx.r5.s64 = 1048576;
	// lis r26,16
	ctx.r26.s64 = 1048576;
	// lis r25,16
	ctx.r25.s64 = 1048576;
	// ori r9,r31,8292
	ctx.r9.u64 = ctx.r31.u64 | 8292;
	// ori r4,r30,8293
	ctx.r4.u64 = ctx.r30.u64 | 8293;
	// ori r31,r29,8300
	ctx.r31.u64 = ctx.r29.u64 | 8300;
	// addi r8,r3,1516
	ctx.r8.s64 = ctx.r3.s64 + 1516;
	// ori r30,r28,8301
	ctx.r30.u64 = ctx.r28.u64 | 8301;
	// ori r29,r27,8302
	ctx.r29.u64 = ctx.r27.u64 | 8302;
	// ori r7,r7,8297
	ctx.r7.u64 = ctx.r7.u64 | 8297;
	// ori r6,r6,8298
	ctx.r6.u64 = ctx.r6.u64 | 8298;
	// ori r5,r5,8299
	ctx.r5.u64 = ctx.r5.u64 | 8299;
	// ori r28,r26,8303
	ctx.r28.u64 = ctx.r26.u64 | 8303;
	// ori r27,r25,8304
	ctx.r27.u64 = ctx.r25.u64 | 8304;
	// lis r3,-30160
	ctx.r3.s64 = -1976565760;
	// stbx r10,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u8);
	// lis r10,16
	ctx.r10.s64 = 1048576;
	// lwz r26,212(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// lis r25,16
	ctx.r25.s64 = 1048576;
	// ori r10,r10,8313
	ctx.r10.u64 = ctx.r10.u64 | 8313;
	// lbz r15,96(r1)
	ctx.r15.u64 = REX_LOAD_U8(ctx.r1.u32 + 96);
	// lbz r3,6234(r3)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r3.u32 + 6234);
	// lis r23,16
	ctx.r23.s64 = 1048576;
	// stw r10,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// lis r10,16
	ctx.r10.s64 = 1048576;
	// stw r27,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r27.u32);
	// lis r21,16
	ctx.r21.s64 = 1048576;
	// stw r10,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r10.u32);
	// lis r19,16
	ctx.r19.s64 = 1048576;
	// lbz r16,92(r1)
	ctx.r16.u64 = REX_LOAD_U8(ctx.r1.u32 + 92);
	// ori r25,r25,8309
	ctx.r25.u64 = ctx.r25.u64 | 8309;
	// lbz r14,100(r1)
	ctx.r14.u64 = REX_LOAD_U8(ctx.r1.u32 + 100);
	// ori r23,r23,8310
	ctx.r23.u64 = ctx.r23.u64 | 8310;
	// lbz r27,104(r1)
	ctx.r27.u64 = REX_LOAD_U8(ctx.r1.u32 + 104);
	// ori r21,r21,8311
	ctx.r21.u64 = ctx.r21.u64 | 8311;
	// lwz r24,208(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// ori r19,r19,8312
	ctx.r19.u64 = ctx.r19.u64 | 8312;
	// lwz r22,204(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// lis r18,-30160
	ctx.r18.s64 = -1976565760;
	// stb r15,100(r1)
	REX_STORE_U8(ctx.r1.u32 + 100, ctx.r15.u8);
	// lis r15,16
	ctx.r15.s64 = 1048576;
	// stw r5,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r5.u32);
	// lis r5,16
	ctx.r5.s64 = 1048576;
	// lbz r20,88(r1)
	ctx.r20.u64 = REX_LOAD_U8(ctx.r1.u32 + 88);
	// ori r15,r15,8343
	ctx.r15.u64 = ctx.r15.u64 | 8343;
	// stw r31,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r31.u32);
	// lis r31,16
	ctx.r31.s64 = 1048576;
	// stb r3,88(r1)
	REX_STORE_U8(ctx.r1.u32 + 88, ctx.r3.u8);
	// lis r3,16
	ctx.r3.s64 = 1048576;
	// stw r30,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r30.u32);
	// lis r30,16
	ctx.r30.s64 = 1048576;
	// stw r28,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r28.u32);
	// ori r5,r5,8344
	ctx.r5.u64 = ctx.r5.u64 | 8344;
	// stw r29,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r29.u32);
	// lis r28,16
	ctx.r28.s64 = 1048576;
	// lbz r10,1(r8)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + 1);
	// lis r29,16
	ctx.r29.s64 = 1048576;
	// stw r25,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r25.u32);
	// lis r25,16
	ctx.r25.s64 = 1048576;
	// stw r23,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r23.u32);
	// lis r23,16
	ctx.r23.s64 = 1048576;
	// stw r21,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r21.u32);
	// lis r21,16
	ctx.r21.s64 = 1048576;
	// stw r19,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r19.u32);
	// lis r19,16
	ctx.r19.s64 = 1048576;
	// stbx r10,r11,r4
	REX_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r10.u8);
	// ori r31,r31,8342
	ctx.r31.u64 = ctx.r31.u64 | 8342;
	// lwz r4,212(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// ori r28,r28,8314
	ctx.r28.u64 = ctx.r28.u64 | 8314;
	// stb r27,92(r1)
	REX_STORE_U8(ctx.r1.u32 + 92, ctx.r27.u8);
	// lis r27,16
	ctx.r27.s64 = 1048576;
	// stw r18,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r18.u32);
	// lis r18,16
	ctx.r18.s64 = 1048576;
	// stb r14,96(r1)
	REX_STORE_U8(ctx.r1.u32 + 96, ctx.r14.u8);
	// lis r14,16
	ctx.r14.s64 = 1048576;
	// stb r16,104(r1)
	REX_STORE_U8(ctx.r1.u32 + 104, ctx.r16.u8);
	// lis r16,-30135
	ctx.r16.s64 = -1974927360;
	// ori r10,r4,8320
	ctx.r10.u64 = ctx.r4.u64 | 8320;
	// stw r5,220(r1)
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r5.u32);
	// ori r4,r3,8324
	ctx.r4.u64 = ctx.r3.u64 | 8324;
	// stw r15,216(r1)
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r15.u32);
	// ori r3,r30,8336
	ctx.r3.u64 = ctx.r30.u64 | 8336;
	// lbz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// lbz r17,80(r1)
	ctx.r17.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// ori r29,r29,8315
	ctx.r29.u64 = ctx.r29.u64 | 8315;
	// ori r25,r25,8316
	ctx.r25.u64 = ctx.r25.u64 | 8316;
	// stw r31,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// ori r23,r23,8317
	ctx.r23.u64 = ctx.r23.u64 | 8317;
	// ori r21,r21,8318
	ctx.r21.u64 = ctx.r21.u64 | 8318;
	// ori r19,r19,8319
	ctx.r19.u64 = ctx.r19.u64 | 8319;
	// ori r27,r27,8328
	ctx.r27.u64 = ctx.r27.u64 | 8328;
	// ori r18,r18,8332
	ctx.r18.u64 = ctx.r18.u64 | 8332;
	// ori r14,r14,8340
	ctx.r14.u64 = ctx.r14.u64 | 8340;
	// addi r30,r16,21048
	ctx.r30.s64 = ctx.r16.s64 + 21048;
	// lis r5,-30165
	ctx.r5.s64 = -1976893440;
	// lis r15,-30165
	ctx.r15.s64 = -1976893440;
	// stw r10,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// lis r31,-30165
	ctx.r31.s64 = -1976893440;
	// lbz r10,2(r8)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + 2);
	// stw r14,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r14.u32);
	// lis r14,-30166
	ctx.r14.s64 = -1976958976;
	// stw r4,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r4.u32);
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// stw r18,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r18.u32);
	// lis r18,16
	ctx.r18.s64 = 1048576;
	// stw r27,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r27.u32);
	// stbx r10,r11,r26
	REX_STORE_U8(ctx.r11.u32 + ctx.r26.u32, ctx.r10.u8);
	// ori r18,r18,8346
	ctx.r18.u64 = ctx.r18.u64 | 8346;
	// lbz r26,31298(r14)
	ctx.r26.u64 = REX_LOAD_U8(ctx.r14.u32 + 31298);
	// stw r19,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r19.u32);
	// lwz r14,176(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r27,172(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r19,168(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// stw r3,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r21,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r21.u32);
	// lis r21,16
	ctx.r21.s64 = 1048576;
	// stw r23,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r23.u32);
	// stw r25,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r25.u32);
	// lis r25,16
	ctx.r25.s64 = 1048576;
	// stw r29,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r29.u32);
	// lbz r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r1.u32 + 88);
	// lwz r23,164(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r29,160(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// lbz r10,3(r8)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + 3);
	// lbz r8,104(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 104);
	// stbx r10,r11,r24
	REX_STORE_U8(ctx.r11.u32 + ctx.r24.u32, ctx.r10.u8);
	// lis r24,-30160
	ctx.r24.s64 = -1976565760;
	// stbx r20,r11,r22
	REX_STORE_U8(ctx.r11.u32 + ctx.r22.u32, ctx.r20.u8);
	// lis r22,-30135
	ctx.r22.s64 = -1974927360;
	// stbx r9,r11,r7
	REX_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r9.u8);
	// lis r20,-30131
	ctx.r20.s64 = -1974665216;
	// lwz r9,208(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// stbx r17,r11,r6
	REX_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r17.u8);
	// lbz r6,100(r1)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r1.u32 + 100);
	// lwz r7,204(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// lwz r17,180(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// stbx r8,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u8);
	// lbz r8,96(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 96);
	// lwz r9,200(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// stbx r6,r11,r7
	REX_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r6.u8);
	// lwz r7,192(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r6,188(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// stbx r8,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u8);
	// lbz r9,92(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 92);
	// lbz r10,14686(r7)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r7.u32 + 14686);
	// lis r7,-30165
	ctx.r7.s64 = -1976893440;
	// lwz r8,184(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// stb r26,92(r1)
	REX_STORE_U8(ctx.r1.u32 + 92, ctx.r26.u8);
	// lis r26,-30160
	ctx.r26.s64 = -1976565760;
	// stw r28,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r28.u32);
	// lis r28,16
	ctx.r28.s64 = 1048576;
	// stbx r9,r11,r6
	REX_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r9.u8);
	// lis r9,-30165
	ctx.r9.s64 = -1976893440;
	// lbz r6,10583(r5)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r5.u32 + 10583);
	// lis r5,-30164
	ctx.r5.s64 = -1976827904;
	// stbx r10,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u8);
	// lbz r10,10470(r15)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r15.u32 + 10470);
	// lis r15,-30126
	ctx.r15.s64 = -1974337536;
	// lbz r8,10591(r31)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + 10591);
	// lis r31,-30160
	ctx.r31.s64 = -1976565760;
	// lbz r7,10463(r7)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + 10463);
	// stb r6,104(r1)
	REX_STORE_U8(ctx.r1.u32 + 104, ctx.r6.u8);
	// lis r6,-30160
	ctx.r6.s64 = -1976565760;
	// lbz r5,1523(r5)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r5.u32 + 1523);
	// stb r10,100(r1)
	REX_STORE_U8(ctx.r1.u32 + 100, ctx.r10.u8);
	// lis r10,-30126
	ctx.r10.s64 = -1974337536;
	// stb r8,96(r1)
	REX_STORE_U8(ctx.r1.u32 + 96, ctx.r8.u8);
	// lis r8,-30160
	ctx.r8.s64 = -1976565760;
	// stw r10,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r10.u32);
	// addi r10,r10,-13084
	ctx.r10.s64 = ctx.r10.s64 + -13084;
	// stb r7,84(r1)
	REX_STORE_U8(ctx.r1.u32 + 84, ctx.r7.u8);
	// lis r7,-30160
	ctx.r7.s64 = -1976565760;
	// stw r10,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// lbz r9,7215(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 7215);
	// lbz r10,21048(r16)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r16.u32 + 21048);
	// ori r16,r4,8348
	ctx.r16.u64 = ctx.r4.u64 | 8348;
	// lwz r4,29276(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 29276);
	// lwz r31,22748(r24)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r24.u32 + 22748);
	// ori r25,r25,8352
	ctx.r25.u64 = ctx.r25.u64 | 8352;
	// lwz r24,20448(r22)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r22.u32 + 20448);
	// ori r22,r28,8356
	ctx.r22.u64 = ctx.r28.u64 | 8356;
	// stw r25,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r25.u32);
	// ori r21,r21,8350
	ctx.r21.u64 = ctx.r21.u64 | 8350;
	// stw r22,228(r1)
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r22.u32);
	// lis r28,-30163
	ctx.r28.s64 = -1976762368;
	// lwz r22,156(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// lbz r25,96(r1)
	ctx.r25.u64 = REX_LOAD_U8(ctx.r1.u32 + 96);
	// stb r9,96(r1)
	REX_STORE_U8(ctx.r1.u32 + 96, ctx.r9.u8);
	// lwz r6,6236(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 6236);
	// lhz r8,30188(r8)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + 30188);
	// stbx r10,r11,r22
	REX_STORE_U8(ctx.r11.u32 + ctx.r22.u32, ctx.r10.u8);
	// lbz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 100);
	// lbz r22,104(r1)
	ctx.r22.u64 = REX_LOAD_U8(ctx.r1.u32 + 104);
	// stb r5,100(r1)
	REX_STORE_U8(ctx.r1.u32 + 100, ctx.r5.u8);
	// lbz r26,14665(r26)
	ctx.r26.u64 = REX_LOAD_U8(ctx.r26.u32 + 14665);
	// lbz r7,8371(r7)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + 8371);
	// stb r10,104(r1)
	REX_STORE_U8(ctx.r1.u32 + 104, ctx.r10.u8);
	// lhz r15,-13068(r15)
	ctx.r15.u64 = REX_LOAD_U16(ctx.r15.u32 + -13068);
	// stw r6,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r6.u32);
	// stw r24,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r24.u32);
	// rotlwi r24,r31,0
	ctx.r24.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// stw r21,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r21.u32);
	// stw r18,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r18.u32);
	// lbz r21,92(r1)
	ctx.r21.u64 = REX_LOAD_U8(ctx.r1.u32 + 92);
	// lbz r18,84(r1)
	ctx.r18.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// sth r8,84(r1)
	REX_STORE_U16(ctx.r1.u32 + 84, ctx.r8.u16);
	// lis r8,16
	ctx.r8.s64 = 1048576;
	// stw r4,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r4.u32);
	// lis r4,-30160
	ctx.r4.s64 = -1976565760;
	// stb r26,92(r1)
	REX_STORE_U8(ctx.r1.u32 + 92, ctx.r26.u8);
	// stb r7,88(r1)
	REX_STORE_U8(ctx.r1.u32 + 88, ctx.r7.u8);
	// lis r7,-30160
	ctx.r7.s64 = -1976565760;
	// sth r15,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r15.u16);
	// stw r16,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r16.u32);
	// lbz r10,1(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 1);
	// lwz r16,152(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r5,148(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r9,144(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r20,27660(r20)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r20.u32 + 27660);
	// stbx r10,r11,r17
	REX_STORE_U8(ctx.r11.u32 + ctx.r17.u32, ctx.r10.u8);
	// lis r10,-30165
	ctx.r10.s64 = -1976893440;
	// lbz r6,104(r1)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r1.u32 + 104);
	// stbx r3,r11,r14
	REX_STORE_U8(ctx.r11.u32 + ctx.r14.u32, ctx.r3.u8);
	// stbx r22,r11,r27
	REX_STORE_U8(ctx.r11.u32 + ctx.r27.u32, ctx.r22.u8);
	// lis r27,-30160
	ctx.r27.s64 = -1976565760;
	// lbz r3,100(r1)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r1.u32 + 100);
	// lwz r22,200(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// stbx r6,r11,r19
	REX_STORE_U8(ctx.r11.u32 + ctx.r19.u32, ctx.r6.u8);
	// lbz r6,96(r1)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r1.u32 + 96);
	// stbx r25,r11,r23
	REX_STORE_U8(ctx.r11.u32 + ctx.r23.u32, ctx.r25.u8);
	// lis r25,-30135
	ctx.r25.s64 = -1974927360;
	// stbx r21,r11,r29
	REX_STORE_U8(ctx.r11.u32 + ctx.r29.u32, ctx.r21.u8);
	// lis r21,-30137
	ctx.r21.s64 = -1975058432;
	// stbx r18,r11,r16
	REX_STORE_U8(ctx.r11.u32 + ctx.r16.u32, ctx.r18.u8);
	// stbx r3,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r3.u8);
	// lis r3,16
	ctx.r3.s64 = 1048576;
	// stbx r6,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r6.u8);
	// lis r9,16
	ctx.r9.s64 = 1048576;
	// lis r6,16
	ctx.r6.s64 = 1048576;
	// lwz r23,204(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// ori r15,r9,8364
	ctx.r15.u64 = ctx.r9.u64 | 8364;
	// stw r31,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// ori r9,r8,8368
	ctx.r9.u64 = ctx.r8.u64 | 8368;
	// stw r20,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r20.u32);
	// ori r8,r6,8372
	ctx.r8.u64 = ctx.r6.u64 | 8372;
	// lwz r26,212(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// stw r9,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r9.u32);
	// lis r31,-30135
	ctx.r31.s64 = -1974927360;
	// stw r8,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r8.u32);
	// lis r5,-30163
	ctx.r5.s64 = -1976762368;
	// lhz r19,84(r1)
	ctx.r19.u64 = REX_LOAD_U16(ctx.r1.u32 + 84);
	// rotlwi r20,r20,0
	ctx.r20.u64 = __builtin_rotateleft32(ctx.r20.u32, 0);
	// lbz r17,92(r1)
	ctx.r17.u64 = REX_LOAD_U8(ctx.r1.u32 + 92);
	// ori r18,r3,8360
	ctx.r18.u64 = ctx.r3.u64 | 8360;
	// lbz r16,88(r1)
	ctx.r16.u64 = REX_LOAD_U8(ctx.r1.u32 + 88);
	// lhz r14,80(r1)
	ctx.r14.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// lhz r9,8376(r4)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r4.u32 + 8376);
	// lhz r8,13200(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 13200);
	// addis r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 1048576;
	// lwz r10,188(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// stw r28,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r28.u32);
	// addis r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 1048576;
	// addi r4,r4,8376
	ctx.r4.s64 = ctx.r4.s64 + 8376;
	// lwz r7,10764(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 10764);
	// lhz r6,27484(r31)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + 27484);
	// addis r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 1048576;
	// std r4,192(r1)
	REX_STORE_U64(ctx.r1.u32 + 192, ctx.r4.u64);
	// addis r30,r11,16
	ctx.r30.s64 = ctx.r11.s64 + 1048576;
	// lbz r10,-13084(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + -13084);
	// addis r29,r11,16
	ctx.r29.s64 = ctx.r11.s64 + 1048576;
	// lwz r4,184(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// addis r28,r11,16
	ctx.r28.s64 = ctx.r11.s64 + 1048576;
	// lwz r5,5876(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 5876);
	// addi r3,r3,8632
	ctx.r3.s64 = ctx.r3.s64 + 8632;
	// addi r31,r31,8888
	ctx.r31.s64 = ctx.r31.s64 + 8888;
	// addi r30,r30,9144
	ctx.r30.s64 = ctx.r30.s64 + 9144;
	// addi r29,r29,9400
	ctx.r29.s64 = ctx.r29.s64 + 9400;
	// stbx r10,r11,r4
	REX_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r10.u8);
	// addi r28,r28,9656
	ctx.r28.s64 = ctx.r28.s64 + 9656;
	// lwz r10,180(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r4,176(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// stw r10,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r10.u32);
	// lbz r10,1(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// stbx r10,r11,r4
	REX_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r10.u8);
	// lwz r10,212(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r4,172(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// stw r10,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r10.u32);
	// lbz r10,2(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// stbx r10,r11,r4
	REX_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r10.u8);
	// lwz r10,212(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r4,168(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// stw r10,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r10.u32);
	// lbz r10,3(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// stbx r10,r11,r4
	REX_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r10.u8);
	// lwz r10,212(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r4,140(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// stw r10,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r10.u32);
	// lbz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// stbx r10,r11,r4
	REX_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r10.u8);
	// lwz r10,212(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r4,136(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lbz r10,5(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// stbx r10,r11,r4
	REX_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r10.u8);
	// lwz r10,132(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// stwx r26,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r26.u32);
	// lwz r26,128(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// stwx r24,r11,r26
	REX_STORE_U32(ctx.r11.u32 + ctx.r26.u32, ctx.r24.u32);
	// lwz r26,124(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// stwx r23,r11,r26
	REX_STORE_U32(ctx.r11.u32 + ctx.r26.u32, ctx.r23.u32);
	// lwz r26,120(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// stwx r22,r11,r26
	REX_STORE_U32(ctx.r11.u32 + ctx.r26.u32, ctx.r22.u32);
	// lwz r26,208(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// lhz r10,8760(r26)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r26.u32 + 8760);
	// lwz r26,116(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stwx r20,r11,r26
	REX_STORE_U32(ctx.r11.u32 + ctx.r26.u32, ctx.r20.u32);
	// lwz r26,112(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// sthx r19,r11,r26
	REX_STORE_U16(ctx.r11.u32 + ctx.r26.u32, ctx.r19.u16);
	// lwz r26,108(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// stbx r17,r11,r26
	REX_STORE_U8(ctx.r11.u32 + ctx.r26.u32, ctx.r17.u8);
	// lwz r26,216(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// stbx r16,r11,r26
	REX_STORE_U8(ctx.r11.u32 + ctx.r26.u32, ctx.r16.u8);
	// lwz r26,220(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// sthx r14,r11,r26
	REX_STORE_U16(ctx.r11.u32 + ctx.r26.u32, ctx.r14.u16);
	// lwz r26,164(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// sthx r10,r11,r26
	REX_STORE_U16(ctx.r11.u32 + ctx.r26.u32, ctx.r10.u16);
	// li r10,256
	ctx.r10.s64 = 256;
	// lwz r26,160(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// sthx r9,r11,r26
	REX_STORE_U16(ctx.r11.u32 + ctx.r26.u32, ctx.r9.u16);
	// lwz r26,156(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// sthx r8,r11,r26
	REX_STORE_U16(ctx.r11.u32 + ctx.r26.u32, ctx.r8.u16);
	// lwz r9,23296(r27)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 23296);
	// lwz r27,224(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r8,20372(r25)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r25.u32 + 20372);
	// stwx r9,r11,r27
	REX_STORE_U32(ctx.r11.u32 + ctx.r27.u32, ctx.r9.u32);
	// lwz r27,228(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// stwx r7,r11,r27
	REX_STORE_U32(ctx.r11.u32 + ctx.r27.u32, ctx.r7.u32);
	// lwz r9,-1220(r21)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r21.u32 + -1220);
	// lwz r27,204(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// lis r7,-30153
	ctx.r7.s64 = -1976107008;
	// stwx r9,r11,r18
	REX_STORE_U32(ctx.r11.u32 + ctx.r18.u32, ctx.r9.u32);
	// lis r9,-30165
	ctx.r9.s64 = -1976893440;
	// stwx r8,r11,r15
	REX_STORE_U32(ctx.r11.u32 + ctx.r15.u32, ctx.r8.u32);
	// lis r8,-30135
	ctx.r8.s64 = -1974927360;
	// ld r4,192(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 192);
	// addi r9,r9,-26872
	ctx.r9.s64 = ctx.r9.s64 + -26872;
	// addi r8,r8,21064
	ctx.r8.s64 = ctx.r8.s64 + 21064;
	// sthx r6,r11,r27
	REX_STORE_U16(ctx.r11.u32 + ctx.r27.u32, ctx.r6.u16);
	// lis r6,-30160
	ctx.r6.s64 = -1976565760;
	// lwz r27,200(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// addi r7,r7,-2440
	ctx.r7.s64 = ctx.r7.s64 + -2440;
	// addi r6,r6,7560
	ctx.r6.s64 = ctx.r6.s64 + 7560;
	// stwx r5,r11,r27
	REX_STORE_U32(ctx.r11.u32 + ctx.r27.u32, ctx.r5.u32);
	// lis r5,-30160
	ctx.r5.s64 = -1976565760;
	// lis r27,-30137
	ctx.r27.s64 = -1975058432;
	// addi r5,r5,14688
	ctx.r5.s64 = ctx.r5.s64 + 14688;
	// addi r27,r27,-1184
	ctx.r27.s64 = ctx.r27.s64 + -1184;
loc_89FF21B0:
	// lbzx r26,r10,r27
	ctx.r26.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r27.u32);
	// stbx r26,r10,r4
	REX_STORE_U8(ctx.r10.u32 + ctx.r4.u32, ctx.r26.u8);
	// lbzx r26,r10,r5
	ctx.r26.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r5.u32);
	// stbx r26,r10,r3
	REX_STORE_U8(ctx.r10.u32 + ctx.r3.u32, ctx.r26.u8);
	// lbzx r26,r10,r6
	ctx.r26.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r6.u32);
	// stbx r26,r10,r31
	REX_STORE_U8(ctx.r10.u32 + ctx.r31.u32, ctx.r26.u8);
	// lbzx r26,r10,r7
	ctx.r26.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r7.u32);
	// stbx r26,r10,r30
	REX_STORE_U8(ctx.r10.u32 + ctx.r30.u32, ctx.r26.u8);
	// lbzx r26,r10,r8
	ctx.r26.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// stbx r26,r10,r29
	REX_STORE_U8(ctx.r10.u32 + ctx.r29.u32, ctx.r26.u8);
	// lbzx r26,r10,r9
	ctx.r26.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// stbx r26,r10,r28
	REX_STORE_U8(ctx.r10.u32 + ctx.r28.u32, ctx.r26.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x89ff21b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89FF21B0;
	// lis r9,-30159
	ctx.r9.s64 = -1976500224;
	// lis r8,16
	ctx.r8.s64 = 1048576;
	// lis r14,16
	ctx.r14.s64 = 1048576;
	// ori r6,r8,9912
	ctx.r6.u64 = ctx.r8.u64 | 9912;
	// stw r14,228(r1)
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r14.u32);
	// lis r7,-30160
	ctx.r7.s64 = -1976565760;
	// lbz r10,-18940(r9)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + -18940);
	// lis r5,16
	ctx.r5.s64 = 1048576;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// ori r3,r5,9920
	ctx.r3.u64 = ctx.r5.u64 | 9920;
	// lis r5,16
	ctx.r5.s64 = 1048576;
	// ori r4,r4,9926
	ctx.r4.u64 = ctx.r4.u64 | 9926;
	// stbx r10,r11,r6
	REX_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r10.u8);
	// lis r10,16
	ctx.r10.s64 = 1048576;
	// ori r5,r5,9919
	ctx.r5.u64 = ctx.r5.u64 | 9919;
	// stw r4,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r4.u32);
	// stw r10,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r10.u32);
	// lis r10,16
	ctx.r10.s64 = 1048576;
	// lis r31,16
	ctx.r31.s64 = 1048576;
	// stw r5,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r5.u32);
	// stw r10,220(r1)
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r10.u32);
	// lis r14,16
	ctx.r14.s64 = 1048576;
	// lis r6,16
	ctx.r6.s64 = 1048576;
	// lis r27,16
	ctx.r27.s64 = 1048576;
	// stw r14,216(r1)
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r14.u32);
	// lis r8,16
	ctx.r8.s64 = 1048576;
	// ori r4,r31,9927
	ctx.r4.u64 = ctx.r31.u64 | 9927;
	// ori r8,r8,9952
	ctx.r8.u64 = ctx.r8.u64 | 9952;
	// ori r5,r27,9963
	ctx.r5.u64 = ctx.r27.u64 | 9963;
	// stw r4,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r4.u32);
	// lis r28,16
	ctx.r28.s64 = 1048576;
	// stw r8,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r8.u32);
	// lis r26,16
	ctx.r26.s64 = 1048576;
	// stw r5,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r5.u32);
	// lis r14,16
	ctx.r14.s64 = 1048576;
	// lis r29,16
	ctx.r29.s64 = 1048576;
	// lis r24,16
	ctx.r24.s64 = 1048576;
	// stw r14,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r14.u32);
	// lis r23,16
	ctx.r23.s64 = 1048576;
	// lis r30,16
	ctx.r30.s64 = 1048576;
	// ori r4,r26,9965
	ctx.r4.u64 = ctx.r26.u64 | 9965;
	// ori r8,r29,9961
	ctx.r8.u64 = ctx.r29.u64 | 9961;
	// lbz r10,8380(r7)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r7.u32 + 8380);
	// lis r14,16
	ctx.r14.s64 = 1048576;
	// ori r5,r23,9913
	ctx.r5.u64 = ctx.r23.u64 | 9913;
	// stw r4,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r4.u32);
	// lwz r23,224(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// lis r25,-30164
	ctx.r25.s64 = -1976827904;
	// lis r22,16
	ctx.r22.s64 = 1048576;
	// stw r14,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r14.u32);
	// lis r21,16
	ctx.r21.s64 = 1048576;
	// stw r8,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r8.u32);
	// stbx r10,r11,r3
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u8);
	// ori r3,r6,9956
	ctx.r3.u64 = ctx.r6.u64 | 9956;
	// ori r6,r28,9962
	ctx.r6.u64 = ctx.r28.u64 | 9962;
	// stw r3,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r3.u32);
	// ori r3,r24,9928
	ctx.r3.u64 = ctx.r24.u64 | 9928;
	// lwz r24,228(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// ori r10,r30,9960
	ctx.r10.u64 = ctx.r30.u64 | 9960;
	// lis r20,16
	ctx.r20.s64 = 1048576;
	// stw r6,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r6.u32);
	// lis r19,16
	ctx.r19.s64 = 1048576;
	// stw r10,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// lis r18,16
	ctx.r18.s64 = 1048576;
	// lis r17,16
	ctx.r17.s64 = 1048576;
	// lis r16,16
	ctx.r16.s64 = 1048576;
	// lis r15,16
	ctx.r15.s64 = 1048576;
	// addi r6,r9,-18940
	ctx.r6.s64 = ctx.r9.s64 + -18940;
	// addi r4,r7,8380
	ctx.r4.s64 = ctx.r7.s64 + 8380;
	// lis r14,16
	ctx.r14.s64 = 1048576;
	// ori r9,r22,9921
	ctx.r9.u64 = ctx.r22.u64 | 9921;
	// addi r31,r25,1480
	ctx.r31.s64 = ctx.r25.s64 + 1480;
	// ori r8,r21,9932
	ctx.r8.u64 = ctx.r21.u64 | 9932;
	// ori r7,r20,9914
	ctx.r7.u64 = ctx.r20.u64 | 9914;
	// ori r30,r19,9922
	ctx.r30.u64 = ctx.r19.u64 | 9922;
	// ori r29,r18,9936
	ctx.r29.u64 = ctx.r18.u64 | 9936;
	// ori r28,r17,9915
	ctx.r28.u64 = ctx.r17.u64 | 9915;
	// ori r27,r16,9923
	ctx.r27.u64 = ctx.r16.u64 | 9923;
	// ori r26,r15,9940
	ctx.r26.u64 = ctx.r15.u64 | 9940;
	// ori r24,r24,9916
	ctx.r24.u64 = ctx.r24.u64 | 9916;
	// ori r23,r23,9924
	ctx.r23.u64 = ctx.r23.u64 | 9924;
	// lwz r10,1480(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 1480);
	// lis r25,-30165
	ctx.r25.s64 = -1976893440;
	// lwz r21,216(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// lis r16,-30165
	ctx.r16.s64 = -1976893440;
	// lwz r22,220(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// ori r18,r14,9918
	ctx.r18.u64 = ctx.r14.u64 | 9918;
	// ori r21,r21,9917
	ctx.r21.u64 = ctx.r21.u64 | 9917;
	// lwz r20,212(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// ori r22,r22,9944
	ctx.r22.u64 = ctx.r22.u64 | 9944;
	// lwz r19,208(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// stwx r10,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// ori r20,r20,9925
	ctx.r20.u64 = ctx.r20.u64 | 9925;
	// lbz r10,13211(r25)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r25.u32 + 13211);
	// lis r25,16
	ctx.r25.s64 = 1048576;
	// stw r21,220(r1)
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r21.u32);
	// lis r21,16
	ctx.r21.s64 = 1048576;
	// ori r25,r25,9974
	ctx.r25.u64 = ctx.r25.u64 | 9974;
	// lbz r16,7211(r16)
	ctx.r16.u64 = REX_LOAD_U8(ctx.r16.u32 + 7211);
	// lis r3,16
	ctx.r3.s64 = 1048576;
	// stw r20,216(r1)
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r20.u32);
	// stw r25,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r25.u32);
	// ori r25,r21,9980
	ctx.r25.u64 = ctx.r21.u64 | 9980;
	// stb r10,104(r1)
	REX_STORE_U8(ctx.r1.u32 + 104, ctx.r10.u8);
	// lis r10,16
	ctx.r10.s64 = 1048576;
	// stw r25,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r25.u32);
	// ori r3,r3,9972
	ctx.r3.u64 = ctx.r3.u64 | 9972;
	// ori r25,r10,9986
	ctx.r25.u64 = ctx.r10.u64 | 9986;
	// stw r22,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r22.u32);
	// lis r15,-30165
	ctx.r15.s64 = -1976893440;
	// stw r3,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r3.u32);
	// lis r14,-30135
	ctx.r14.s64 = -1974927360;
	// stw r23,228(r1)
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r23.u32);
	// lis r20,16
	ctx.r20.s64 = 1048576;
	// stb r16,100(r1)
	REX_STORE_U8(ctx.r1.u32 + 100, ctx.r16.u8);
	// ori r19,r19,9948
	ctx.r19.u64 = ctx.r19.u64 | 9948;
	// stw r18,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r18.u32);
	// lis r22,16
	ctx.r22.s64 = 1048576;
	// stw r25,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r25.u32);
	// ori r3,r20,9978
	ctx.r3.u64 = ctx.r20.u64 | 9978;
	// stw r19,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r19.u32);
	// lis r23,16
	ctx.r23.s64 = 1048576;
	// lbz r15,-32126(r15)
	ctx.r15.u64 = REX_LOAD_U8(ctx.r15.u32 + -32126);
	// ori r22,r22,9982
	ctx.r22.u64 = ctx.r22.u64 | 9982;
	// lhz r14,21056(r14)
	ctx.r14.u64 = REX_LOAD_U16(ctx.r14.u32 + 21056);
	// lis r16,16
	ctx.r16.s64 = 1048576;
	// stw r3,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r3.u32);
	// lis r17,16
	ctx.r17.s64 = 1048576;
	// stw r22,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r22.u32);
	// lis r18,16
	ctx.r18.s64 = 1048576;
	// lbz r10,1(r6)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r6.u32 + 1);
	// lis r19,16
	ctx.r19.s64 = 1048576;
	// ori r3,r23,9984
	ctx.r3.u64 = ctx.r23.u64 | 9984;
	// stb r15,96(r1)
	REX_STORE_U8(ctx.r1.u32 + 96, ctx.r15.u8);
	// ori r23,r16,9988
	ctx.r23.u64 = ctx.r16.u64 | 9988;
	// sth r14,92(r1)
	REX_STORE_U16(ctx.r1.u32 + 92, ctx.r14.u16);
	// ori r17,r17,9967
	ctx.r17.u64 = ctx.r17.u64 | 9967;
	// stw r3,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// ori r18,r18,9970
	ctx.r18.u64 = ctx.r18.u64 | 9970;
	// stw r23,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r23.u32);
	// stbx r10,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r10.u8);
	// ori r19,r19,9976
	ctx.r19.u64 = ctx.r19.u64 | 9976;
	// lis r22,-30137
	ctx.r22.s64 = -1975058432;
	// stw r17,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r17.u32);
	// lis r25,-30137
	ctx.r25.s64 = -1975058432;
	// stw r18,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r18.u32);
	// stw r19,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r19.u32);
	// lis r3,16
	ctx.r3.s64 = 1048576;
	// addi r23,r22,20308
	ctx.r23.s64 = ctx.r22.s64 + 20308;
	// lis r21,-30126
	ctx.r21.s64 = -1974337536;
	// addi r5,r25,20324
	ctx.r5.s64 = ctx.r25.s64 + 20324;
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
	// lis r19,-30135
	ctx.r19.s64 = -1974927360;
	// lwz r9,228(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// lis r17,16
	ctx.r17.s64 = 1048576;
	// lwz r8,224(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// lis r15,16
	ctx.r15.s64 = 1048576;
	// lwz r7,220(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// lwz r29,204(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// stw r23,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r23.u32);
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
	// lwz r28,200(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// lbz r10,3(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 3);
	// stw r23,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r23.u32);
	// lis r23,16
	ctx.r23.s64 = 1048576;
	// stw r16,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r16.u32);
	// lis r16,16
	ctx.r16.s64 = 1048576;
	// sth r20,96(r1)
	REX_STORE_U16(ctx.r1.u32 + 96, ctx.r20.u16);
	// stw r21,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r21.u32);
	// addi r21,r21,-13072
	ctx.r21.s64 = ctx.r21.s64 + -13072;
	// stbx r10,r11,r27
	REX_STORE_U8(ctx.r11.u32 + ctx.r27.u32, ctx.r10.u8);
	// lwz r27,192(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// stw r14,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r14.u32);
	// lis r14,16
	ctx.r14.s64 = 1048576;
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
	// lis r25,16
	ctx.r25.s64 = 1048576;
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
	// lis r22,16
	ctx.r22.s64 = 1048576;
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
	// lis r7,-30160
	ctx.r7.s64 = -1976565760;
	// lbz r10,5(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 5);
	// addi r7,r7,30156
	ctx.r7.s64 = ctx.r7.s64 + 30156;
	// addi r7,r7,-2
	ctx.r7.s64 = ctx.r7.s64 + -2;
	// stbx r10,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u8);
	// ori r10,r3,10008
	ctx.r10.u64 = ctx.r3.u64 | 10008;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lis r10,-30135
	ctx.r10.s64 = -1974927360;
	// stw r30,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// lis r30,16
	ctx.r30.s64 = 1048576;
	// lhz r10,20440(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 20440);
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// stwx r9,r11,r24
	REX_STORE_U32(ctx.r11.u32 + ctx.r24.u32, ctx.r9.u32);
	// lis r24,-30165
	ctx.r24.s64 = -1976893440;
	// lwz r9,184(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// stw r5,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r5.u32);
	// lwz r5,172(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// stw r24,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r24.u32);
	// addi r24,r24,10448
	ctx.r24.s64 = ctx.r24.s64 + 10448;
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
	// lis r5,16
	ctx.r5.s64 = 1048576;
	// stw r3,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r3.u32);
	// ori r3,r25,9996
	ctx.r3.u64 = ctx.r25.u64 | 9996;
	// ori r25,r23,10002
	ctx.r25.u64 = ctx.r23.u64 | 10002;
	// sth r10,92(r1)
	REX_STORE_U16(ctx.r1.u32 + 92, ctx.r10.u16);
	// ori r23,r16,10004
	ctx.r23.u64 = ctx.r16.u64 | 10004;
	// lbz r10,6(r6)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r6.u32 + 6);
	// lwz r16,148(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// stw r7,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r7.u32);
	// ori r7,r30,9994
	ctx.r7.u64 = ctx.r30.u64 | 9994;
	// ori r30,r22,9998
	ctx.r30.u64 = ctx.r22.u64 | 9998;
	// addi r19,r19,21040
	ctx.r19.s64 = ctx.r19.s64 + 21040;
	// ori r17,r17,9990
	ctx.r17.u64 = ctx.r17.u64 | 9990;
	// stbx r10,r11,r16
	REX_STORE_U8(ctx.r11.u32 + ctx.r16.u32, ctx.r10.u8);
	// lis r16,-30160
	ctx.r16.s64 = -1976565760;
	// ori r8,r15,9992
	ctx.r8.u64 = ctx.r15.u64 | 9992;
	// ori r5,r5,10000
	ctx.r5.u64 = ctx.r5.u64 | 10000;
	// ori r22,r14,10006
	ctx.r22.u64 = ctx.r14.u64 | 10006;
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
	// lbz r10,7(r6)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r6.u32 + 7);
	// lbz r6,104(r1)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r1.u32 + 104);
	// lwz r28,136(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// stbx r10,r11,r27
	REX_STORE_U8(ctx.r11.u32 + ctx.r27.u32, ctx.r10.u8);
	// lwz r27,132(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lbz r10,7(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 7);
	// lwz r4,228(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// stbx r10,r11,r26
	REX_STORE_U8(ctx.r11.u32 + ctx.r26.u32, ctx.r10.u8);
	// lwz r26,128(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r31,180(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
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
	// lhz r10,20308(r6)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r6.u32 + 20308);
	// sthx r10,r11,r4
	REX_STORE_U16(ctx.r11.u32 + ctx.r4.u32, ctx.r10.u16);
	// lwz r6,204(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// lwz r4,200(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
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
	// lhz r10,20324(r6)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r6.u32 + 20324);
	// addi r6,r16,7264
	ctx.r6.s64 = ctx.r16.s64 + 7264;
	// sthx r10,r11,r20
	REX_STORE_U16(ctx.r11.u32 + ctx.r20.u32, ctx.r10.u16);
	// lhz r10,2(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 2);
	// lis r4,-30137
	ctx.r4.s64 = -1975058432;
	// sthx r10,r11,r24
	REX_STORE_U16(ctx.r11.u32 + ctx.r24.u32, ctx.r10.u16);
	// lwz r24,124(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lhz r10,-13072(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + -13072);
	// lis r31,-30165
	ctx.r31.s64 = -1976893440;
	// sthx r10,r11,r9
	REX_STORE_U16(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u16);
	// lhz r10,2(r21)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r21.u32 + 2);
	// sthx r10,r11,r29
	REX_STORE_U16(ctx.r11.u32 + ctx.r29.u32, ctx.r10.u16);
	// lhz r9,11920(r4)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r4.u32 + 11920);
	// lwz r4,176(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r21,120(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lhz r29,92(r1)
	ctx.r29.u64 = REX_LOAD_U16(ctx.r1.u32 + 92);
	// lhz r10,10448(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 10448);
	// lwz r4,172(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// sthx r10,r11,r28
	REX_STORE_U16(ctx.r11.u32 + ctx.r28.u32, ctx.r10.u16);
	// lhz r10,2(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 2);
	// lwz r4,168(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// sthx r10,r11,r27
	REX_STORE_U16(ctx.r11.u32 + ctx.r27.u32, ctx.r10.u16);
	// lhz r10,21040(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 21040);
	// sthx r10,r11,r26
	REX_STORE_U16(ctx.r11.u32 + ctx.r26.u32, ctx.r10.u16);
	// lhz r10,2(r19)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r19.u32 + 2);
	// sthx r10,r11,r24
	REX_STORE_U16(ctx.r11.u32 + ctx.r24.u32, ctx.r10.u16);
	// sthx r29,r11,r21
	REX_STORE_U16(ctx.r11.u32 + ctx.r21.u32, ctx.r29.u16);
	// lhz r10,7264(r16)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r16.u32 + 7264);
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
	// lwz r3,116(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lhz r10,8(r6)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r6.u32 + 8);
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
	// lhz r10,7208(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 7208);
	// sthx r10,r11,r3
	REX_STORE_U16(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u16);
	// lwz r10,160(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
loc_89FF2760:
	// lhzu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// sthu r9,2(r8)
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x89ff2760
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89FF2760;
	// lis r9,-30160
	ctx.r9.s64 = -1976565760;
	// lis r8,16
	ctx.r8.s64 = 1048576;
	// lis r6,-30135
	ctx.r6.s64 = -1974927360;
	// ori r10,r8,10042
	ctx.r10.u64 = ctx.r8.u64 | 10042;
	// li r8,16
	ctx.r8.s64 = 16;
	// lhz r7,14976(r9)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r9.u32 + 14976);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// addi r9,r6,20328
	ctx.r9.s64 = ctx.r6.s64 + 20328;
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
loc_89FF27A0:
	// lhzu r8,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x89ff27a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89FF27A0;
	// lis r9,-30126
	ctx.r9.s64 = -1974337536;
	// lis r8,16
	ctx.r8.s64 = 1048576;
	// lis r6,-30160
	ctx.r6.s64 = -1976565760;
	// ori r10,r8,10076
	ctx.r10.u64 = ctx.r8.u64 | 10076;
	// li r8,16
	ctx.r8.s64 = 16;
	// lhz r7,-13096(r9)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r9.u32 + -13096);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// addi r9,r6,29212
	ctx.r9.s64 = ctx.r6.s64 + 29212;
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
loc_89FF27E0:
	// lhzu r8,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x89ff27e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89FF27E0;
	// lis r10,-30137
	ctx.r10.s64 = -1975058432;
	// lis r9,16
	ctx.r9.s64 = 1048576;
	// lis r8,-30160
	ctx.r8.s64 = -1976565760;
	// ori r7,r9,10110
	ctx.r7.u64 = ctx.r9.u64 | 10110;
	// addi r6,r8,14968
	ctx.r6.s64 = ctx.r8.s64 + 14968;
	// lhz r10,-1236(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + -1236);
	// lis r5,16
	ctx.r5.s64 = 1048576;
	// stw r6,228(r1)
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r6.u32);
	// lis r4,-30163
	ctx.r4.s64 = -1976762368;
	// lis r3,-30135
	ctx.r3.s64 = -1974927360;
	// lis r9,-30160
	ctx.r9.s64 = -1976565760;
	// lis r6,-30164
	ctx.r6.s64 = -1976827904;
	// sthx r10,r11,r7
	REX_STORE_U16(ctx.r11.u32 + ctx.r7.u32, ctx.r10.u16);
	// lis r10,-30165
	ctx.r10.s64 = -1976893440;
	// ori r7,r5,10112
	ctx.r7.u64 = ctx.r5.u64 | 10112;
	// lhz r5,8096(r4)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r4.u32 + 8096);
	// lhz r4,27464(r3)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r3.u32 + 27464);
	// lis r3,16
	ctx.r3.s64 = 1048576;
	// lhz r9,29292(r9)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + 29292);
	// lis r31,16
	ctx.r31.s64 = 1048576;
	// lbz r6,1470(r6)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r6.u32 + 1470);
	// ori r3,r3,10116
	ctx.r3.u64 = ctx.r3.u64 | 10116;
	// lbz r10,-32122(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + -32122);
	// lis r30,16
	ctx.r30.s64 = 1048576;
	// sth r5,96(r1)
	REX_STORE_U16(ctx.r1.u32 + 96, ctx.r5.u16);
	// lis r5,16
	ctx.r5.s64 = 1048576;
	// stw r3,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r3.u32);
	// lis r29,16
	ctx.r29.s64 = 1048576;
	// sth r4,92(r1)
	REX_STORE_U16(ctx.r1.u32 + 92, ctx.r4.u16);
	// lis r3,16
	ctx.r3.s64 = 1048576;
	// stb r6,104(r1)
	REX_STORE_U8(ctx.r1.u32 + 104, ctx.r6.u8);
	// lis r4,-30165
	ctx.r4.s64 = -1976893440;
	// stb r10,100(r1)
	REX_STORE_U8(ctx.r1.u32 + 100, ctx.r10.u8);
	// lis r6,16
	ctx.r6.s64 = 1048576;
	// sth r9,88(r1)
	REX_STORE_U16(ctx.r1.u32 + 88, ctx.r9.u16);
	// lis r9,16
	ctx.r9.s64 = 1048576;
	// lis r28,16
	ctx.r28.s64 = 1048576;
	// lis r27,16
	ctx.r27.s64 = 1048576;
	// lis r26,16
	ctx.r26.s64 = 1048576;
	// lis r25,16
	ctx.r25.s64 = 1048576;
	// lis r24,16
	ctx.r24.s64 = 1048576;
	// lwz r23,228(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// lis r22,16
	ctx.r22.s64 = 1048576;
	// lis r21,-30159
	ctx.r21.s64 = -1976500224;
	// lis r20,16
	ctx.r20.s64 = 1048576;
	// lhz r10,14968(r8)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r8.u32 + 14968);
	// lis r8,16
	ctx.r8.s64 = 1048576;
	// lis r19,16
	ctx.r19.s64 = 1048576;
	// lis r18,16
	ctx.r18.s64 = 1048576;
	// lis r17,16
	ctx.r17.s64 = 1048576;
	// lis r16,16
	ctx.r16.s64 = 1048576;
	// sthx r10,r11,r7
	REX_STORE_U16(ctx.r11.u32 + ctx.r7.u32, ctx.r10.u16);
	// addis r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 1048576;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r7,10150
	ctx.r7.s64 = ctx.r7.s64 + 10150;
	// stw r10,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r10.u32);
	// ori r31,r31,10114
	ctx.r31.u64 = ctx.r31.u64 | 10114;
	// stw r10,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r10.u32);
	// lis r10,-30165
	ctx.r10.s64 = -1976893440;
	// stw r7,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r7.u32);
	// ori r7,r5,10124
	ctx.r7.u64 = ctx.r5.u64 | 10124;
	// ori r30,r30,10118
	ctx.r30.u64 = ctx.r30.u64 | 10118;
	// stw r10,228(r1)
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r10.u32);
	// ori r29,r29,10120
	ctx.r29.u64 = ctx.r29.u64 | 10120;
	// ori r3,r3,10122
	ctx.r3.u64 = ctx.r3.u64 | 10122;
	// ori r5,r9,10126
	ctx.r5.u64 = ctx.r9.u64 | 10126;
	// addi r15,r4,-32152
	ctx.r15.s64 = ctx.r4.s64 + -32152;
	// ori r6,r6,10128
	ctx.r6.u64 = ctx.r6.u64 | 10128;
	// ori r28,r28,10130
	ctx.r28.u64 = ctx.r28.u64 | 10130;
	// ori r27,r27,10132
	ctx.r27.u64 = ctx.r27.u64 | 10132;
	// ori r26,r26,10134
	ctx.r26.u64 = ctx.r26.u64 | 10134;
	// ori r25,r25,10136
	ctx.r25.u64 = ctx.r25.u64 | 10136;
	// ori r24,r24,10138
	ctx.r24.u64 = ctx.r24.u64 | 10138;
	// ori r22,r22,10140
	ctx.r22.u64 = ctx.r22.u64 | 10140;
	// ori r20,r20,10142
	ctx.r20.u64 = ctx.r20.u64 | 10142;
	// addi r14,r21,-18948
	ctx.r14.s64 = ctx.r21.s64 + -18948;
	// ori r8,r8,10144
	ctx.r8.u64 = ctx.r8.u64 | 10144;
	// ori r19,r19,10146
	ctx.r19.u64 = ctx.r19.u64 | 10146;
	// ori r18,r18,10147
	ctx.r18.u64 = ctx.r18.u64 | 10147;
	// ori r17,r17,10148
	ctx.r17.u64 = ctx.r17.u64 | 10148;
	// ori r16,r16,10149
	ctx.r16.u64 = ctx.r16.u64 | 10149;
	// lhz r10,2(r23)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r23.u32 + 2);
	// lis r9,-30160
	ctx.r9.s64 = -1976565760;
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
	// lbz r9,7554(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 7554);
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
	// lhz r10,-32152(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + -32152);
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
	// lhz r10,4(r15)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r15.u32 + 4);
	// lwz r6,220(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
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
	// lhz r10,-18948(r21)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r21.u32 + -18948);
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
	// lwz r6,204(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// lbz r10,10582(r8)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + 10582);
	// lis r8,4
	ctx.r8.s64 = 262144;
	// ori r5,r8,2554
	ctx.r5.u64 = ctx.r8.u64 | 2554;
	// stbx r10,r11,r4
	REX_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r10.u8);
	// lis r10,-30137
	ctx.r10.s64 = -1975058432;
	// stbx r9,r11,r3
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u8);
	// lis r9,-30165
	ctx.r9.s64 = -1976893440;
	// addi r4,r10,20328
	ctx.r4.s64 = ctx.r10.s64 + 20328;
	// addi r3,r9,10384
	ctx.r3.s64 = ctx.r9.s64 + 10384;
	// lwz r9,200(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
loc_89FF2A30:
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
	// stbx r29,r6,r31
	REX_STORE_U8(ctx.r6.u32 + ctx.r31.u32, ctx.r29.u8);
loc_89FF2A48:
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r29,r10,r7
	ctx.r29.u64 = ctx.r10.u64 + ctx.r7.u64;
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
	// bdnz 0x89ff2a48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89FF2A48;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmpw cr6,r9,r30
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x89ff2a30
	if (ctx.cr6.lt) goto loc_89FF2A30;
	// lis r10,-30164
	ctx.r10.s64 = -1976827904;
	// lis r9,-30164
	ctx.r9.s64 = -1976827904;
	// lis r6,18
	ctx.r6.s64 = 1179648;
	// lis r8,-30165
	ctx.r8.s64 = -1976893440;
	// lis r5,-30164
	ctx.r5.s64 = -1976827904;
	// lis r4,18
	ctx.r4.s64 = 1179648;
	// lbz r10,1466(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 1466);
	// lis r3,-30163
	ctx.r3.s64 = -1976762368;
	// lwz r9,1512(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 1512);
	// ori r30,r6,10216
	ctx.r30.u64 = ctx.r6.u64 | 10216;
	// lis r31,18
	ctx.r31.s64 = 1179648;
	// lbz r8,10454(r8)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 10454);
	// ori r4,r4,10220
	ctx.r4.u64 = ctx.r4.u64 | 10220;
	// lbz r6,1458(r5)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r5.u32 + 1458);
	// lis r7,-30160
	ctx.r7.s64 = -1976565760;
	// ori r31,r31,10224
	ctx.r31.u64 = ctx.r31.u64 | 10224;
	// lbz r5,8759(r3)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r3.u32 + 8759);
	// lis r28,-30166
	ctx.r28.s64 = -1976958976;
	// stbx r10,r11,r30
	REX_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u8);
	// lis r29,18
	ctx.r29.s64 = 1179648;
	// lis r3,18
	ctx.r3.s64 = 1179648;
	// stwx r9,r11,r4
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r9.u32);
	// lbz r7,8378(r7)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + 8378);
	// ori r4,r29,10225
	ctx.r4.u64 = ctx.r29.u64 | 10225;
	// lis r27,-30163
	ctx.r27.s64 = -1976762368;
	// stbx r8,r11,r31
	REX_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r8.u8);
	// lis r30,18
	ctx.r30.s64 = 1179648;
	// lbz r10,31827(r28)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r28.u32 + 31827);
	// ori r3,r3,10226
	ctx.r3.u64 = ctx.r3.u64 | 10226;
	// lis r28,-30165
	ctx.r28.s64 = -1976893440;
	// lis r31,18
	ctx.r31.s64 = 1179648;
	// stbx r7,r11,r4
	REX_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r7.u8);
	// ori r30,r30,10227
	ctx.r30.u64 = ctx.r30.u64 | 10227;
	// lbz r9,8763(r27)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r27.u32 + 8763);
	// lis r29,-30137
	ctx.r29.s64 = -1975058432;
	// ori r31,r31,10228
	ctx.r31.u64 = ctx.r31.u64 | 10228;
	// stbx r6,r11,r3
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r6.u8);
	// lis r27,-30137
	ctx.r27.s64 = -1975058432;
	// lbz r8,10590(r28)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r28.u32 + 10590);
	// lis r4,18
	ctx.r4.s64 = 1179648;
	// lis r3,18
	ctx.r3.s64 = 1179648;
	// stbx r5,r11,r30
	REX_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r5.u8);
	// lhz r7,-1192(r29)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r29.u32 + -1192);
	// lis r28,18
	ctx.r28.s64 = 1179648;
	// ori r4,r4,10229
	ctx.r4.u64 = ctx.r4.u64 | 10229;
	// stbx r10,r11,r31
	REX_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u8);
	// lis r29,-30160
	ctx.r29.s64 = -1976565760;
	// lhz r6,-396(r27)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r27.u32 + -396);
	// lis r30,18
	ctx.r30.s64 = 1179648;
	// ori r3,r3,10230
	ctx.r3.u64 = ctx.r3.u64 | 10230;
	// ori r10,r28,10232
	ctx.r10.u64 = ctx.r28.u64 | 10232;
	// ori r31,r30,10234
	ctx.r31.u64 = ctx.r30.u64 | 10234;
	// stbx r9,r11,r4
	REX_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r9.u8);
	// lis r28,-30165
	ctx.r28.s64 = -1976893440;
	// lhz r5,28864(r29)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r29.u32 + 28864);
	// lis r29,18
	ctx.r29.s64 = 1179648;
	// stbx r8,r11,r3
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r8.u8);
	// lis r9,-30137
	ctx.r9.s64 = -1975058432;
	// sthx r7,r11,r10
	REX_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u16);
	// lis r4,-30135
	ctx.r4.s64 = -1974927360;
	// lis r3,-30153
	ctx.r3.s64 = -1976107008;
	// sthx r6,r11,r31
	REX_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r6.u16);
	// lis r30,-30159
	ctx.r30.s64 = -1976500224;
	// lhz r6,10476(r28)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r28.u32 + 10476);
	// ori r31,r29,10236
	ctx.r31.u64 = ctx.r29.u64 | 10236;
	// lis r28,-30160
	ctx.r28.s64 = -1976565760;
	// lhz r10,-400(r9)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r9.u32 + -400);
	// lhz r9,20360(r4)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r4.u32 + 20360);
	// lis r29,18
	ctx.r29.s64 = 1179648;
	// lhz r8,-2464(r3)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r3.u32 + -2464);
	// lis r4,18
	ctx.r4.s64 = 1179648;
	// lhz r7,-18876(r30)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r30.u32 + -18876);
	// lis r3,18
	ctx.r3.s64 = 1179648;
	// lis r30,18
	ctx.r30.s64 = 1179648;
	// sthx r5,r11,r31
	REX_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r5.u16);
	// ori r31,r29,10238
	ctx.r31.u64 = ctx.r29.u64 | 10238;
	// lhz r5,22764(r28)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r28.u32 + 22764);
	// ori r4,r4,10240
	ctx.r4.u64 = ctx.r4.u64 | 10240;
	// ori r3,r3,10242
	ctx.r3.u64 = ctx.r3.u64 | 10242;
	// ori r30,r30,10244
	ctx.r30.u64 = ctx.r30.u64 | 10244;
	// lis r29,18
	ctx.r29.s64 = 1179648;
	// sthx r10,r11,r31
	REX_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u16);
	// lis r28,-30165
	ctx.r28.s64 = -1976893440;
	// sthx r9,r11,r4
	REX_STORE_U16(ctx.r11.u32 + ctx.r4.u32, ctx.r9.u16);
	// lis r31,18
	ctx.r31.s64 = 1179648;
	// sthx r8,r11,r3
	REX_STORE_U16(ctx.r11.u32 + ctx.r3.u32, ctx.r8.u16);
	// lis r3,-30166
	ctx.r3.s64 = -1976958976;
	// sthx r7,r11,r30
	REX_STORE_U16(ctx.r11.u32 + ctx.r30.u32, ctx.r7.u16);
	// ori r7,r29,10246
	ctx.r7.u64 = ctx.r29.u64 | 10246;
	// ori r31,r31,10248
	ctx.r31.u64 = ctx.r31.u64 | 10248;
	// lis r4,18
	ctx.r4.s64 = 1179648;
	// lhz r10,-32124(r28)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r28.u32 + -32124);
	// lis r29,-30160
	ctx.r29.s64 = -1976565760;
	// lis r9,-30160
	ctx.r9.s64 = -1976565760;
	// ori r4,r4,10250
	ctx.r4.u64 = ctx.r4.u64 | 10250;
	// sthx r6,r11,r7
	REX_STORE_U16(ctx.r11.u32 + ctx.r7.u32, ctx.r6.u16);
	// lis r8,-30160
	ctx.r8.s64 = -1976565760;
	// sthx r5,r11,r31
	REX_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r5.u16);
	// lis r30,18
	ctx.r30.s64 = 1179648;
	// lwz r7,31308(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 31308);
	// lis r28,18
	ctx.r28.s64 = 1179648;
	// lwz r6,5700(r29)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 5700);
	// lis r27,-30126
	ctx.r27.s64 = -1974337536;
	// lhz r9,14948(r9)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + 14948);
	// ori r31,r30,10252
	ctx.r31.u64 = ctx.r30.u64 | 10252;
	// sthx r10,r11,r4
	REX_STORE_U16(ctx.r11.u32 + ctx.r4.u32, ctx.r10.u16);
	// lis r3,18
	ctx.r3.s64 = 1179648;
	// lwz r8,8392(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 8392);
	// ori r29,r28,10256
	ctx.r29.u64 = ctx.r28.u64 | 10256;
	// lis r30,18
	ctx.r30.s64 = 1179648;
	// lis r28,18
	ctx.r28.s64 = 1179648;
	// lwz r5,-13088(r27)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r27.u32 + -13088);
	// ori r10,r3,10260
	ctx.r10.u64 = ctx.r3.u64 | 10260;
	// sthx r9,r11,r31
	REX_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u16);
	// ori r4,r30,10264
	ctx.r4.u64 = ctx.r30.u64 | 10264;
	// ori r3,r28,10268
	ctx.r3.u64 = ctx.r28.u64 | 10268;
	// stwx r8,r11,r29
	REX_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r8.u32);
	// li r9,512
	ctx.r9.s64 = 512;
	// lis r8,18
	ctx.r8.s64 = 1179648;
	// stwx r7,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u32);
	// lis r7,-30160
	ctx.r7.s64 = -1976565760;
	// stwx r6,r11,r4
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r6.u32);
	// ori r6,r8,10272
	ctx.r6.u64 = ctx.r8.u64 | 10272;
	// stwx r5,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r5.u32);
	// lis r5,-30165
	ctx.r5.s64 = -1976893440;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r9,18
	ctx.r9.s64 = 1179648;
	// lis r4,18
	ctx.r4.s64 = 1179648;
	// ori r28,r9,10275
	ctx.r28.u64 = ctx.r9.u64 | 10275;
	// lis r9,18
	ctx.r9.s64 = 1179648;
	// ori r4,r4,10273
	ctx.r4.u64 = ctx.r4.u64 | 10273;
	// ori r23,r9,10278
	ctx.r23.u64 = ctx.r9.u64 | 10278;
	// lis r3,-30164
	ctx.r3.s64 = -1976827904;
	// lis r10,18
	ctx.r10.s64 = 1179648;
	// lis r31,-30160
	ctx.r31.s64 = -1976565760;
	// ori r30,r10,10274
	ctx.r30.u64 = ctx.r10.u64 | 10274;
	// lis r29,-30165
	ctx.r29.s64 = -1976893440;
	// lis r8,18
	ctx.r8.s64 = 1179648;
	// lis r26,-30165
	ctx.r26.s64 = -1976893440;
	// ori r27,r8,10276
	ctx.r27.u64 = ctx.r8.u64 | 10276;
	// lis r10,18
	ctx.r10.s64 = 1179648;
	// lis r24,-30163
	ctx.r24.s64 = -1976762368;
	// ori r25,r10,10277
	ctx.r25.u64 = ctx.r10.u64 | 10277;
	// addis r8,r11,18
	ctx.r8.s64 = ctx.r11.s64 + 1179648;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r9,14667(r7)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r7.u32 + 14667);
	// addis r7,r11,18
	ctx.r7.s64 = ctx.r11.s64 + 1179648;
	// stbx r9,r11,r6
	REX_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r9.u8);
	// addi r8,r8,10279
	ctx.r8.s64 = ctx.r8.s64 + 10279;
	// lbz r9,-32121(r5)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r5.u32 + -32121);
	// addi r7,r7,10791
	ctx.r7.s64 = ctx.r7.s64 + 10791;
	// stbx r9,r11,r4
	REX_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r9.u8);
	// lbz r9,1467(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 1467);
	// stbx r9,r11,r30
	REX_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r9.u8);
	// lbz r9,8370(r31)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + 8370);
	// stbx r9,r11,r28
	REX_STORE_U8(ctx.r11.u32 + ctx.r28.u32, ctx.r9.u8);
	// lbz r9,10579(r29)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r29.u32 + 10579);
	// stbx r9,r11,r27
	REX_STORE_U8(ctx.r11.u32 + ctx.r27.u32, ctx.r9.u8);
	// lbz r9,10462(r26)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r26.u32 + 10462);
	// stbx r9,r11,r25
	REX_STORE_U8(ctx.r11.u32 + ctx.r25.u32, ctx.r9.u8);
	// lbz r9,8758(r24)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r24.u32 + 8758);
	// stbx r9,r11,r23
	REX_STORE_U8(ctx.r11.u32 + ctx.r23.u32, ctx.r9.u8);
	// lis r9,-30165
	ctx.r9.s64 = -1976893440;
	// lis r6,-30165
	ctx.r6.s64 = -1976893440;
	// addi r9,r9,7824
	ctx.r9.s64 = ctx.r9.s64 + 7824;
	// addi r6,r6,13216
	ctx.r6.s64 = ctx.r6.s64 + 13216;
loc_89FF2D10:
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
	// bdnz 0x89ff2d10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89FF2D10;
	// li r9,96
	ctx.r9.s64 = 96;
	// addis r8,r11,18
	ctx.r8.s64 = ctx.r11.s64 + 1179648;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r8,11303
	ctx.r8.s64 = ctx.r8.s64 + 11303;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r9,-30165
	ctx.r9.s64 = -1976893440;
	// addi r9,r9,10480
	ctx.r9.s64 = ctx.r9.s64 + 10480;
loc_89FF2D44:
	// lbzx r7,r10,r9
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// stbx r7,r8,r10
	REX_STORE_U8(ctx.r8.u32 + ctx.r10.u32, ctx.r7.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x89ff2d44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_89FF2D44;
	// lis r10,-30137
	ctx.r10.s64 = -1975058432;
	// lis r6,18
	ctx.r6.s64 = 1179648;
	// lis r4,-30097
	ctx.r4.s64 = -1972436992;
	// lis r9,-30097
	ctx.r9.s64 = -1972436992;
	// ori r30,r6,11400
	ctx.r30.u64 = ctx.r6.u64 | 11400;
	// lwz r10,-916(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + -916);
	// lis r31,-30165
	ctx.r31.s64 = -1976893440;
	// lis r8,-30097
	ctx.r8.s64 = -1972436992;
	// lis r5,18
	ctx.r5.s64 = 1179648;
	// lhz r6,236(r4)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r4.u32 + 236);
	// lis r28,-30160
	ctx.r28.s64 = -1976565760;
	// lwz r9,224(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 224);
	// lis r7,-30097
	ctx.r7.s64 = -1972436992;
	// lis r3,18
	ctx.r3.s64 = 1179648;
	// stwx r10,r11,r30
	REX_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
	// ori r4,r5,11404
	ctx.r4.u64 = ctx.r5.u64 | 11404;
	// lwz r5,7204(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 7204);
	// lis r29,18
	ctx.r29.s64 = 1179648;
	// lhz r8,228(r8)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + 228);
	// ori r3,r3,11408
	ctx.r3.u64 = ctx.r3.u64 | 11408;
	// lwz r10,30196(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 30196);
	// lis r30,-30137
	ctx.r30.s64 = -1975058432;
	// lhz r7,232(r7)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r7.u32 + 232);
	// lis r31,18
	ctx.r31.s64 = 1179648;
	// ori r29,r29,11410
	ctx.r29.u64 = ctx.r29.u64 | 11410;
	// stwx r9,r11,r4
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r9.u32);
	// lis r28,-30163
	ctx.r28.s64 = -1976762368;
	// ori r31,r31,11412
	ctx.r31.u64 = ctx.r31.u64 | 11412;
	// sthx r8,r11,r3
	REX_STORE_U16(ctx.r11.u32 + ctx.r3.u32, ctx.r8.u16);
	// lis r27,-30153
	ctx.r27.s64 = -1976107008;
	// lwz r8,20320(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 20320);
	// lis r4,18
	ctx.r4.s64 = 1179648;
	// lis r3,18
	ctx.r3.s64 = 1179648;
	// sthx r7,r11,r29
	REX_STORE_U16(ctx.r11.u32 + ctx.r29.u32, ctx.r7.u16);
	// lis r30,18
	ctx.r30.s64 = 1179648;
	// lwz r7,8100(r28)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r28.u32 + 8100);
	// ori r4,r4,11416
	ctx.r4.u64 = ctx.r4.u64 | 11416;
	// sthx r6,r11,r31
	REX_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r6.u16);
	// lis r29,18
	ctx.r29.s64 = 1179648;
	// lwz r9,-2448(r27)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + -2448);
	// ori r3,r3,11420
	ctx.r3.u64 = ctx.r3.u64 | 11420;
	// lis r28,18
	ctx.r28.s64 = 1179648;
	// ori r6,r30,11424
	ctx.r6.u64 = ctx.r30.u64 | 11424;
	// ori r31,r29,11428
	ctx.r31.u64 = ctx.r29.u64 | 11428;
	// stwx r5,r11,r4
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r5.u32);
	// ori r30,r28,11432
	ctx.r30.u64 = ctx.r28.u64 | 11432;
	// stwx r10,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// addis r3,r11,18
	ctx.r3.s64 = ctx.r11.s64 + 1179648;
	// lis r4,-30103
	ctx.r4.s64 = -1972830208;
	// stwx r9,r11,r6
	REX_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r9.u32);
	// lis r5,0
	ctx.r5.s64 = 0;
	// stwx r8,r11,r31
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r8.u32);
	// addi r4,r4,-31664
	ctx.r4.s64 = ctx.r4.s64 + -31664;
	// stwx r7,r11,r30
	REX_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r7.u32);
	// ori r5,r5,53976
	ctx.r5.u64 = ctx.r5.u64 | 53976;
	// addi r3,r3,11436
	ctx.r3.s64 = ctx.r3.s64 + 11436;
	// bl 0x8a0c26e0
	ctx.lr = 0x89FF2E38;
	sub_8A0C26E0(ctx, base);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x8a0c2360
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8A016260) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8a0c2320
	ctx.lr = 0x8A016268;
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
	// ble cr6,0x8a0163fc
	if (!ctx.cr6.gt) goto loc_8A0163FC;
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
loc_8A0162C0:
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
	// beq cr6,0x8a01633c
	if (ctx.cr6.eq) goto loc_8A01633C;
	// rlwinm r8,r8,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// cmpwi cr6,r8,31
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 31, ctx.xer);
	// ble cr6,0x8a01633c
	if (!ctx.cr6.gt) goto loc_8A01633C;
	// li r3,6144
	ctx.r3.s64 = 6144;
loc_8A01633C:
	// clrlwi r8,r31,27
	ctx.r8.u64 = ctx.r31.u32 & 0x1F;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8a016360
	if (ctx.cr6.eq) goto loc_8A016360;
	// clrlwi r7,r30,24
	ctx.r7.u64 = ctx.r30.u32 & 0xFF;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// cmpwi cr6,r8,31
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 31, ctx.xer);
	// ble cr6,0x8a016360
	if (!ctx.cr6.gt) goto loc_8A016360;
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// ori r3,r8,1024
	ctx.r3.u64 = ctx.r8.u64 | 1024;
loc_8A016360:
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
	// beq cr6,0x8a0163e4
	if (ctx.cr6.eq) goto loc_8A0163E4;
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
	// bne cr6,0x8a0163e4
	if (!ctx.cr6.eq) goto loc_8A0163E4;
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
	// ble cr6,0x8a0163cc
	if (!ctx.cr6.gt) goto loc_8A0163CC;
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
loc_8A0163CC:
	// extsb r8,r19
	ctx.r8.s64 = ctx.r19.s8;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8a0163e4
	if (ctx.cr6.eq) goto loc_8A0163E4;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// mr r21,r18
	ctx.r21.u64 = ctx.r18.u64;
	// mr r19,r23
	ctx.r19.u64 = ctx.r23.u64;
loc_8A0163E4:
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
	// blt cr6,0x8a0162c0
	if (ctx.cr6.lt) goto loc_8A0162C0;
loc_8A0163FC:
	// b 0x8a0c2370
	__restgprlr_18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8A0174C0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30165
	ctx.r11.s64 = -1976893440;
	// lbz r10,-32125(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + -32125);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-30164
	ctx.r11.s64 = -1976827904;
	// lbz r10,1522(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1522);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8a0174f0
	if (ctx.cr6.eq) goto loc_8A0174F0;
	// lis r11,-30165
	ctx.r11.s64 = -1976893440;
	// lbz r10,7214(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 7214);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_8A0174F0:
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8a017510
	if (!ctx.cr6.eq) goto loc_8A017510;
	// lis r11,-30185
	ctx.r11.s64 = -1978204160;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r9,r11,-2524
	ctx.r9.s64 = ctx.r11.s64 + -2524;
	// lbzx r3,r10,r9
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// b 0x8a0bfd78
	sub_8A0BFD78(ctx, base);
	return;
loc_8A017510:
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r9,-30185
	ctx.r9.s64 = -1978204160;
	// lis r8,-30153
	ctx.r8.s64 = -1976107008;
	// addi r7,r9,-2524
	ctx.r7.s64 = ctx.r9.s64 + -2524;
	// lis r6,-30165
	ctx.r6.s64 = -1976893440;
	// addi r5,r8,-2440
	ctx.r5.s64 = ctx.r8.s64 + -2440;
	// addi r4,r6,-26872
	ctx.r4.s64 = ctx.r6.s64 + -26872;
	// lbzx r11,r11,r7
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// stbx r3,r10,r4
	REX_STORE_U8(ctx.r10.u32 + ctx.r4.u32, ctx.r3.u8);
	// stbx r11,r10,r5
	REX_STORE_U8(ctx.r10.u32 + ctx.r5.u32, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8A017940) {
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
	// lis r11,-30165
	ctx.r11.s64 = -1976893440;
	// lbz r10,-32125(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + -32125);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8a0179f4
	if (ctx.cr6.eq) goto loc_8A0179F4;
	// lis r11,-30165
	ctx.r11.s64 = -1976893440;
	// lis r10,-30185
	ctx.r10.s64 = -1978204160;
	// addi r10,r10,5056
	ctx.r10.s64 = ctx.r10.s64 + 5056;
	// lbz r11,10463(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 10463);
	// addi r9,r10,3
	ctx.r9.s64 = ctx.r10.s64 + 3;
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
	// bge cr6,0x8a0179dc
	if (!ctx.cr6.lt) goto loc_8A0179DC;
	// lis r10,-30126
	ctx.r10.s64 = -1974337536;
	// rlwinm r9,r3,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r10,-12808
	ctx.r10.s64 = ctx.r10.s64 + -12808;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8a0179dc
	if (ctx.cr6.eq) goto loc_8A0179DC;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// bgt 0x8a0179d4
	if (ctx.cr0.gt) goto loc_8A0179D4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// bl 0x8a017608
	ctx.lr = 0x8A0179C0;
	sub_8A017608(ctx, base);
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
loc_8A0179D4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8a0179f4
	if (!ctx.cr6.eq) goto loc_8A0179F4;
loc_8A0179DC:
	// bl 0x8a017608
	ctx.lr = 0x8A0179E0;
	sub_8A017608(ctx, base);
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
loc_8A0179F4:
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

DEFINE_REX_FUNC(sub_8A018B58) {
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
	// lis r11,-30160
	ctx.r11.s64 = -1976565760;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r30,r11,27472
	ctx.r30.s64 = ctx.r11.s64 + 27472;
	// mulli r31,r10,696
	ctx.r31.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(696));
	// addi r9,r30,8
	ctx.r9.s64 = ctx.r30.s64 + 8;
	// lwzx r8,r31,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// rlwinm r11,r8,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x8a018bc0
	if (ctx.cr6.gt) goto loc_8A018BC0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8a018bac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8A018BAC;
	// bdzf 4*cr6+eq,0x8a018bb4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8A018BB4;
	// bne cr6,0x8a018bbc
	if (!ctx.cr6.eq) goto loc_8A018BBC;
	// bl 0x8a036d00
	ctx.lr = 0x8A018BA8;
	sub_8A036D00(ctx, base);
	// b 0x8a018bc0
	goto loc_8A018BC0;
loc_8A018BAC:
	// bl 0x8a037578
	ctx.lr = 0x8A018BB0;
	sub_8A037578(ctx, base);
	// b 0x8a018bc0
	goto loc_8A018BC0;
loc_8A018BB4:
	// bl 0x8a037e40
	ctx.lr = 0x8A018BB8;
	sub_8A037E40(ctx, base);
	// b 0x8a018bc0
	goto loc_8A018BC0;
loc_8A018BBC:
	// bl 0x8a0385e8
	ctx.lr = 0x8A018BC0;
	sub_8A0385E8(ctx, base);
loc_8A018BC0:
	// addi r11,r30,624
	ctx.r11.s64 = ctx.r30.s64 + 624;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// rlwinm r9,r10,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8a018be4
	if (ctx.cr6.eq) goto loc_8A018BE4;
	// addi r11,r30,638
	ctx.r11.s64 = ctx.r30.s64 + 638;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// ori r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 | 32;
	// stbx r9,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u8);
loc_8A018BE4:
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

DEFINE_REX_FUNC(sub_8A019298) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8a0c2344
	ctx.lr = 0x8A0192A0;
	__savegprlr_27(ctx, base);
	// lis r9,-30160
	ctx.r9.s64 = -1976565760;
	// stw r4,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// lis r8,-30137
	ctx.r8.s64 = -1975058432;
	// stw r4,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r4.u32);
	// lis r7,-30163
	ctx.r7.s64 = -1976762368;
	// stw r4,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r4.u32);
	// addi r6,r9,27400
	ctx.r6.s64 = ctx.r9.s64 + 27400;
	// stw r4,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r4.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lhz r10,27400(r9)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r9.u32 + 27400);
	// addi r31,r7,8764
	ctx.r31.s64 = ctx.r7.s64 + 8764;
	// addi r3,r8,11916
	ctx.r3.s64 = ctx.r8.s64 + 11916;
	// lhz r5,11916(r8)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r8.u32 + 11916);
	// clrlwi r29,r10,27
	ctx.r29.u64 = ctx.r10.u32 & 0x1F;
	// lhz r4,8764(r7)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r7.u32 + 8764);
	// lhz r10,2(r6)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r6.u32 + 2);
	// lis r30,-30137
	ctx.r30.s64 = -1975058432;
	// lwz r7,27400(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 27400);
	// lis r9,-30165
	ctx.r9.s64 = -1976893440;
	// lhz r6,2(r31)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + 2);
	// addi r28,r30,-1200
	ctx.r28.s64 = ctx.r30.s64 + -1200;
	// lhz r8,2(r3)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r3.u32 + 2);
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// subfic r29,r29,31
	ctx.xer.ca = ctx.r29.u32 <= 31;
	ctx.r29.u64 = static_cast<uint64_t>(31) - ctx.r29.u64;
	// lhz r3,-1200(r30)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r30.u32 + -1200);
	// extsh r31,r8
	ctx.r31.s64 = ctx.r8.s16;
	// lwz r8,13728(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 13728);
	// subfic r10,r10,31
	ctx.xer.ca = ctx.r10.u32 <= 31;
	ctx.r10.u64 = static_cast<uint64_t>(31) - ctx.r10.u64;
	// lhz r30,2(r28)
	ctx.r30.u64 = REX_LOAD_U16(ctx.r28.u32 + 2);
	// subf r31,r31,r6
	ctx.r31.u64 = ctx.r6.u64 - ctx.r31.u64;
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// extsh r6,r4
	ctx.r6.s64 = ctx.r4.s16;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// lis r9,0
	ctx.r9.s64 = 0;
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
	// subf r4,r10,r31
	ctx.r4.u64 = ctx.r31.u64 - ctx.r10.u64;
	// subf r30,r10,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r10.u64;
	// ori r9,r9,65535
	ctx.r9.u64 = ctx.r9.u64 | 65535;
	// clrlwi r29,r29,16
	ctx.r29.u64 = ctx.r29.u32 & 0xFFFF;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lis r31,-30164
	ctx.r31.s64 = -1976827904;
	// add r3,r30,r9
	ctx.r3.u64 = ctx.r30.u64 + ctx.r9.u64;
	// subf r4,r8,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r8.u64;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// subf r5,r29,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r29.u64;
	// rlwinm r8,r29,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0xFFFF0000;
	// lwz r9,1448(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1448);
	// rlwinm r6,r6,16,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFFFF0000;
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// add r28,r7,r8
	ctx.r28.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lis r31,1
	ctx.r31.s64 = 65536;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// add r30,r6,r8
	ctx.r30.u64 = ctx.r6.u64 + ctx.r8.u64;
	// stw r9,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// clrlwi r29,r4,16
	ctx.r29.u64 = ctx.r4.u32 & 0xFFFF;
	// stw r9,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r9.u32);
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// stw r9,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r9.u32);
	// rlwinm r27,r5,16,0,15
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF0000;
	// add r5,r28,r31
	ctx.r5.u64 = ctx.r28.u64 + ctx.r31.u64;
	// add r30,r30,r31
	ctx.r30.u64 = ctx.r30.u64 + ctx.r31.u64;
	// or r31,r10,r8
	ctx.r31.u64 = ctx.r10.u64 | ctx.r8.u64;
	// stw r5,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r5.u32);
	// subf r4,r3,r29
	ctx.r4.u64 = ctx.r29.u64 - ctx.r3.u64;
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stw r31,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// addi r9,r4,-1
	ctx.r9.s64 = ctx.r4.s64 + -1;
	// or r28,r10,r27
	ctx.r28.u64 = ctx.r10.u64 | ctx.r27.u64;
	// or r4,r29,r6
	ctx.r4.u64 = ctx.r29.u64 | ctx.r6.u64;
	// or r31,r29,r30
	ctx.r31.u64 = ctx.r29.u64 | ctx.r30.u64;
	// stw r28,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r28.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stw r4,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// add r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 + ctx.r10.u64;
	// stw r31,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r31.u32);
	// or r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 | ctx.r6.u64;
	// stw r7,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r7.u32);
	// or r5,r3,r8
	ctx.r5.u64 = ctx.r3.u64 | ctx.r8.u64;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// stw r6,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r6.u32);
	// or r10,r9,r30
	ctx.r10.u64 = ctx.r9.u64 | ctx.r30.u64;
	// stw r5,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r5.u32);
	// or r9,r3,r27
	ctx.r9.u64 = ctx.r3.u64 | ctx.r27.u64;
	// stw r4,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r4.u32);
	// stw r10,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, ctx.r10.u32);
	// addi r3,r11,80
	ctx.r3.s64 = ctx.r11.s64 + 80;
	// stw r9,72(r11)
	REX_STORE_U32(ctx.r11.u32 + 72, ctx.r9.u32);
	// b 0x8a0c2394
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8A01A2A0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8a0c2314
	ctx.lr = 0x8A01A2A8;
	__savegprlr_15(ctx, base);
	// clrlwi r11,r6,16
	ctx.r11.u64 = ctx.r6.u32 & 0xFFFF;
	// stw r3,20(r1)
	REX_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// stw r4,28(r1)
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lis r4,-30135
	ctx.r4.s64 = -1974927360;
	// addic r3,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// lwz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// lis r31,-30160
	ctx.r31.s64 = -1976565760;
	// subfe r30,r3,r11
	temp.u8 = (~ctx.r3.u32 + ctx.r11.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r30.u64 = ~ctx.r3.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r3,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 16;
	// lwz r6,21052(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 21052);
	// srawi r7,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 16;
	// lis r4,-30163
	ctx.r4.s64 = -1976762368;
	// lwz r11,9464(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 9464);
	// extsh r31,r3
	ctx.r31.s64 = ctx.r3.s16;
	// add r3,r7,r6
	ctx.r3.u64 = ctx.r7.u64 + ctx.r6.u64;
	// extsh r29,r11
	ctx.r29.s64 = ctx.r11.s16;
	// lis r17,-30165
	ctx.r17.s64 = -1976893440;
	// add r7,r30,r31
	ctx.r7.u64 = ctx.r30.u64 + ctx.r31.u64;
	// addi r6,r4,8764
	ctx.r6.s64 = ctx.r4.s64 + 8764;
	// extsh r22,r3
	ctx.r22.s64 = ctx.r3.s16;
	// add r21,r7,r29
	ctx.r21.u64 = ctx.r7.u64 + ctx.r29.u64;
	// lwz r11,10456(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 10456);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// sth r21,8764(r4)
	REX_STORE_U16(ctx.r4.u32 + 8764, ctx.r21.u16);
	// sth r22,2(r6)
	REX_STORE_U16(ctx.r6.u32 + 2, ctx.r22.u16);
	// beq cr6,0x8a01a504
	if (ctx.cr6.eq) goto loc_8A01A504;
	// lis r7,-30160
	ctx.r7.s64 = -1976565760;
	// extsb r18,r8
	ctx.r18.s64 = ctx.r8.s8;
	// lis r8,-30164
	ctx.r8.s64 = -1976827904;
	// lis r6,-30165
	ctx.r6.s64 = -1976893440;
	// addi r28,r5,-4
	ctx.r28.s64 = ctx.r5.s64 + -4;
	// lis r5,128
	ctx.r5.s64 = 8388608;
	// lwz r29,22768(r7)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r7.u32 + 22768);
	// lis r4,-16384
	ctx.r4.s64 = -1073741824;
	// lwz r23,1524(r8)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r8.u32 + 1524);
	// lis r16,-32768
	ctx.r16.s64 = -2147483648;
	// lwz r24,-26604(r6)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r6.u32 + -26604);
	// lis r20,-16384
	ctx.r20.s64 = -1073741824;
	// lis r19,1
	ctx.r19.s64 = 65536;
	// lis r25,4096
	ctx.r25.s64 = 268435456;
	// ori r7,r5,32896
	ctx.r7.u64 = ctx.r5.u64 | 32896;
	// ori r26,r4,1
	ctx.r26.u64 = ctx.r4.u64 | 1;
loc_8A01A350:
	// lwz r8,20(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// or r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r6,r8,0,2,2
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x20000000;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8a01a370
	if (ctx.cr6.eq) goto loc_8A01A370;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r27,8224
	ctx.r27.s64 = 8224;
	// b 0x8a01a39c
	goto loc_8A01A39C;
loc_8A01A370:
	// rlwinm r8,r8,0,4,8
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xF800000;
	// rlwinm r8,r8,0,8,4
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFF8FFFFFF;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8a01a390
	if (ctx.cr6.eq) goto loc_8A01A390;
	// lis r27,0
	ctx.r27.s64 = 0;
	// lis r5,128
	ctx.r5.s64 = 8388608;
	// ori r27,r27,41120
	ctx.r27.u64 = ctx.r27.u64 | 41120;
	// b 0x8a01a39c
	goto loc_8A01A39C;
loc_8A01A390:
	// lis r5,0
	ctx.r5.s64 = 0;
	// li r27,16448
	ctx.r27.s64 = 16448;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
loc_8A01A39C:
	// addi r6,r28,4
	ctx.r6.s64 = ctx.r28.s64 + 4;
	// lhz r8,8(r28)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r28.u32 + 8);
	// srawi r10,r10,16
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 16;
	// addi r28,r6,4
	ctx.r28.s64 = ctx.r6.s64 + 4;
	// cmpwi cr6,r18,7
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 7, ctx.xer);
	// clrlwi r10,r10,20
	ctx.r10.u64 = ctx.r10.u32 & 0xFFF;
	// lhz r31,8(r6)
	ctx.r31.u64 = REX_LOAD_U16(ctx.r6.u32 + 8);
	// lhzu r6,8(r28)
	ea = 8 + ctx.r28.u32;
	ctx.r6.u64 = REX_LOAD_U16(ea);
	ctx.r28.u32 = ea;
	// beq cr6,0x8a01a3c8
	if (ctx.cr6.eq) goto loc_8A01A3C8;
	// cmpwi cr6,r18,9
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 9, ctx.xer);
	// bne cr6,0x8a01a404
	if (!ctx.cr6.eq) goto loc_8A01A404;
loc_8A01A3C8:
	// lwz r4,0(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// extsh r3,r10
	ctx.r3.s64 = ctx.r10.s16;
	// lwz r10,4(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// mullw r4,r3,r4
	ctx.r4.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r4.s32);
	// mullw r8,r10,r8
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// srawi r3,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 8;
	// srawi r4,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 8;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// extsh r8,r4
	ctx.r8.s64 = ctx.r4.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8a01a508
	if (ctx.cr6.eq) goto loc_8A01A508;
	// extsh r4,r8
	ctx.r4.s64 = ctx.r8.s16;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8a01a508
	if (ctx.cr6.eq) goto loc_8A01A508;
loc_8A01A404:
	// lwz r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// rlwinm r30,r4,0,0,1
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xC0000000;
	// cmpw cr6,r30,r16
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r16.s32, ctx.xer);
	// beq cr6,0x8a01a454
	if (ctx.cr6.eq) goto loc_8A01A454;
	// cmpw cr6,r30,r20
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r20.s32, ctx.xer);
	// beq cr6,0x8a01a438
	if (ctx.cr6.eq) goto loc_8A01A438;
	// lis r4,16384
	ctx.r4.s64 = 1073741824;
	// cmpw cr6,r30,r4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x8a01a460
	if (!ctx.cr6.eq) goto loc_8A01A460;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// neg r4,r6
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r6.u64);
	// extsh r6,r4
	ctx.r6.s64 = ctx.r4.s16;
	// b 0x8a01a460
	goto loc_8A01A460;
loc_8A01A438:
	// extsh r4,r31
	ctx.r4.s64 = ctx.r31.s16;
	// extsh r3,r6
	ctx.r3.s64 = ctx.r6.s16;
	// neg r6,r4
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r4.u64);
	// neg r4,r3
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r3.u64);
	// extsh r31,r6
	ctx.r31.s64 = ctx.r6.s16;
	// extsh r6,r4
	ctx.r6.s64 = ctx.r4.s16;
	// b 0x8a01a460
	goto loc_8A01A460;
loc_8A01A454:
	// extsh r4,r31
	ctx.r4.s64 = ctx.r31.s16;
	// neg r3,r4
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r4.u64);
	// extsh r31,r3
	ctx.r31.s64 = ctx.r3.s16;
loc_8A01A460:
	// stw r5,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r5.u32);
	// extsh r5,r8
	ctx.r5.s64 = ctx.r8.s16;
	// stw r24,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r24.u32);
	// extsh r4,r10
	ctx.r4.s64 = ctx.r10.s16;
	// extsh r3,r22
	ctx.r3.s64 = ctx.r22.s16;
	// stw r29,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r29.u32);
	// extsh r30,r21
	ctx.r30.s64 = ctx.r21.s16;
	// stw r23,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r23.u32);
	// rlwinm r15,r10,17,0,14
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0xFFFE0000;
	// stw r29,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r29.u32);
	// rlwinm r8,r5,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r20,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r20.u32);
	// subf r5,r5,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r5.u64;
	// stw r25,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// subf r30,r4,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r4.u64;
	// stw r7,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r7.u32);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// stw r25,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r25.u32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stw r7,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r7.u32);
	// subf r4,r19,r15
	ctx.r4.u64 = ctx.r15.u64 - ctx.r19.u64;
	// stw r26,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r26.u32);
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// rlwinm r10,r10,17,0,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0xFFFE0000;
	// add r3,r5,r6
	ctx.r3.u64 = ctx.r5.u64 + ctx.r6.u64;
	// or r5,r4,r8
	ctx.r5.u64 = ctx.r4.u64 | ctx.r8.u64;
	// add r6,r30,r31
	ctx.r6.u64 = ctx.r30.u64 + ctx.r31.u64;
	// or r4,r10,r29
	ctx.r4.u64 = ctx.r10.u64 | ctx.r29.u64;
	// stw r5,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r5.u32);
	// oris r10,r8,3
	ctx.r10.u64 = ctx.r8.u64 | 196608;
	// stw r5,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r5.u32);
	// oris r8,r27,4868
	ctx.r8.u64 = ctx.r27.u64 | 319029248;
	// stw r4,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r4.u32);
	// rlwimi r3,r6,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// stw r10,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// stw r8,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r8.u32);
	// stw r3,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r3.u32);
	// addi r11,r11,68
	ctx.r11.s64 = ctx.r11.s64 + 68;
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8a01a350
	if (!ctx.cr6.eq) goto loc_8A01A350;
loc_8A01A504:
	// stw r11,10456(r17)
	REX_STORE_U32(ctx.r17.u32 + 10456, ctx.r11.u32);
loc_8A01A508:
	// b 0x8a0c2364
	__restgprlr_15(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8A01E730) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8a0c2338
	ctx.lr = 0x8A01E738;
	__savegprlr_24(ctx, base);
	// lis r8,-30160
	ctx.r8.s64 = -1976565760;
	// lis r10,-30163
	ctx.r10.s64 = -1976762368;
	// lis r9,-30126
	ctx.r9.s64 = -1974337536;
	// lbz r11,8371(r8)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + 8371);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x8a01e79c
	if (ctx.cr6.gt) goto loc_8A01E79C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8a01e784
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8A01E784;
	// bdzf 4*cr6+eq,0x8a01e93c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8A01E93C;
	// bdzf 4*cr6+eq,0x8a01e964
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8A01E964;
	// bne cr6,0x8a01e97c
	if (!ctx.cr6.eq) goto loc_8A01E97C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// sth r11,8760(r10)
	REX_STORE_U16(ctx.r10.u32 + 8760, ctx.r11.u16);
	// stb r7,8371(r8)
	REX_STORE_U8(ctx.r8.u32 + 8371, ctx.r7.u8);
	// sth r6,-13068(r9)
	REX_STORE_U16(ctx.r9.u32 + -13068, ctx.r6.u16);
	// b 0x8a01e7a0
	goto loc_8A01E7A0;
loc_8A01E784:
	// lis r11,-30160
	ctx.r11.s64 = -1976565760;
	// lbz r7,14665(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 14665);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8a01e79c
	if (ctx.cr6.eq) goto loc_8A01E79C;
	// li r7,2
	ctx.r7.s64 = 2;
loc_8A01E798:
	// stb r7,8371(r8)
	REX_STORE_U8(ctx.r8.u32 + 8371, ctx.r7.u8);
loc_8A01E79C:
	// lhz r11,8760(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 8760);
loc_8A01E7A0:
	// lhz r27,-13068(r9)
	ctx.r27.u64 = REX_LOAD_U16(ctx.r9.u32 + -13068);
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// lis r26,-30165
	ctx.r26.s64 = -1976893440;
	// rotlwi r11,r27,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r27.u32, 2);
	// mulli r8,r4,240
	ctx.r8.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(240));
	// lwz r10,10456(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 10456);
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
	// beq cr6,0x8a01e938
	if (ctx.cr6.eq) goto loc_8A01E938;
	// clrlwi r29,r9,16
	ctx.r29.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8a01e938
	if (ctx.cr6.eq) goto loc_8A01E938;
	// lis r11,-30160
	ctx.r11.s64 = -1976565760;
	// lis r7,-16384
	ctx.r7.s64 = -1073741824;
	// lis r9,128
	ctx.r9.s64 = 8388608;
	// lis r8,-30126
	ctx.r8.s64 = -1974337536;
	// stw r7,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// lwz r6,22768(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 22768);
	// ori r9,r9,32896
	ctx.r9.u64 = ctx.r9.u64 | 32896;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// addi r7,r8,-10760
	ctx.r7.s64 = ctx.r8.s64 + -10760;
	// ble cr6,0x8a01e884
	if (!ctx.cr6.gt) goto loc_8A01E884;
	// lis r8,-30160
	ctx.r8.s64 = -1976565760;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r30,319
	ctx.r30.s64 = 20905984;
	// lwz r8,9464(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 9464);
	// rlwinm r31,r8,16,0,15
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000;
	// lis r8,-30160
	ctx.r8.s64 = -1976565760;
	// lwz r3,10496(r8)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 10496);
loc_8A01E838:
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
	// blt cr6,0x8a01e838
	if (ctx.cr6.lt) goto loc_8A01E838;
loc_8A01E884:
	// lis r10,-30153
	ctx.r10.s64 = -1976107008;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// lwz r4,-2468(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + -2468);
	// ble cr6,0x8a01e8ec
	if (!ctx.cr6.gt) goto loc_8A01E8EC;
	// addi r8,r29,-1
	ctx.r8.s64 = ctx.r29.s64 + -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// oris r3,r8,3
	ctx.r3.u64 = ctx.r8.u64 | 196608;
loc_8A01E8A0:
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
	// blt cr6,0x8a01e8a0
	if (ctx.cr6.lt) goto loc_8A01E8A0;
loc_8A01E8EC:
	// lis r10,-30135
	ctx.r10.s64 = -1974927360;
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
	// lwz r10,27468(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 27468);
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
	// stw r11,10456(r26)
	REX_STORE_U32(ctx.r26.u32 + 10456, ctx.r11.u32);
loc_8A01E938:
	// b 0x8a0c2388
	__restgprlr_24(ctx, base);
	return;
loc_8A01E93C:
	// lhz r11,8760(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 8760);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,8760(r10)
	REX_STORE_U16(ctx.r10.u32 + 8760, ctx.r11.u16);
	// cmplwi cr6,r11,96
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 96, ctx.xer);
	// sth r11,-13068(r9)
	REX_STORE_U16(ctx.r9.u32 + -13068, ctx.r11.u16);
	// blt cr6,0x8a01e7a0
	if (ctx.cr6.lt) goto loc_8A01E7A0;
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r10,8371(r8)
	REX_STORE_U8(ctx.r8.u32 + 8371, ctx.r10.u8);
	// b 0x8a01e7a0
	goto loc_8A01E7A0;
loc_8A01E964:
	// lis r11,-30160
	ctx.r11.s64 = -1976565760;
	// lbz r7,14665(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 14665);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8a01e79c
	if (!ctx.cr6.eq) goto loc_8A01E79C;
	// li r7,4
	ctx.r7.s64 = 4;
	// b 0x8a01e798
	goto loc_8A01E798;
loc_8A01E97C:
	// lhz r11,8760(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 8760);
	// addis r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 65536;
	// addi r7,r7,-4
	ctx.r7.s64 = ctx.r7.s64 + -4;
	// clrlwi r11,r7,16
	ctx.r11.u64 = ctx.r7.u32 & 0xFFFF;
	// sth r11,8760(r10)
	REX_STORE_U16(ctx.r10.u32 + 8760, ctx.r11.u16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r11,-13068(r9)
	REX_STORE_U16(ctx.r9.u32 + -13068, ctx.r11.u16);
	// bne cr6,0x8a01e7a0
	if (!ctx.cr6.eq) goto loc_8A01E7A0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,8371(r8)
	REX_STORE_U8(ctx.r8.u32 + 8371, ctx.r10.u8);
	// b 0x8a01e7a0
	goto loc_8A01E7A0;
}

DEFINE_REX_FUNC(sub_8A0223A8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8a0c2330
	ctx.lr = 0x8A0223B0;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30097
	ctx.r11.s64 = -1972436992;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-30116
	ctx.r9.s64 = -1973682176;
	// sth r10,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,428(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 428);
	// lwz r11,-18668(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + -18668);
	// addi r5,r11,4110
	ctx.r5.s64 = ctx.r11.s64 + 4110;
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,32(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8A0223E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8a022400
	if (ctx.cr6.eq) goto loc_8A022400;
loc_8A0223F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8a0c2380
	__restgprlr_22(ctx, base);
	return;
loc_8A022400:
	// bl 0x8a016ff8
	ctx.lr = 0x8A022404;
	sub_8A016FF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8a0223f4
	if (!ctx.cr6.eq) goto loc_8A0223F4;
	// lis r11,-30160
	ctx.r11.s64 = -1976565760;
	// lbz r10,10763(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 10763);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8a0223f4
	if (!ctx.cr6.eq) goto loc_8A0223F4;
	// lis r11,-30165
	ctx.r11.s64 = -1976893440;
	// lis r10,-21846
	ctx.r10.s64 = -1431699456;
	// lis r9,-30185
	ctx.r9.s64 = -1978204160;
	// ori r8,r10,43691
	ctx.r8.u64 = ctx.r10.u64 | 43691;
	// addi r7,r9,19284
	ctx.r7.s64 = ctx.r9.s64 + 19284;
	// lbz r5,10470(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 10470);
	// lis r6,-30165
	ctx.r6.s64 = -1976893440;
	// mulhwu r4,r5,r8
	ctx.r4.u64 = (uint64_t(ctx.r5.u32) * uint64_t(ctx.r8.u32)) >> 32;
	// rlwinm r11,r4,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r11,r3,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r3.u64;
	// lbzx r11,r11,r7
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// stb r11,10463(r6)
	REX_STORE_U8(ctx.r6.u32 + 10463, ctx.r11.u8);
	// bl 0x89ff6280
	ctx.lr = 0x8A022458;
	sub_89FF6280(ctx, base);
	// bl 0x89ff7a50
	ctx.lr = 0x8A02245C;
	sub_89FF7A50(ctx, base);
	// bl 0x8a00cc48
	ctx.lr = 0x8A022460;
	sub_8A00CC48(ctx, base);
	// bl 0x89ffb2c8
	ctx.lr = 0x8A022464;
	sub_89FFB2C8(ctx, base);
	// bl 0x89ffa9c0
	ctx.lr = 0x8A022468;
	sub_89FFA9C0(ctx, base);
	// bl 0x89ff9680
	ctx.lr = 0x8A02246C;
	sub_89FF9680(ctx, base);
	// bl 0x89ffb2c8
	ctx.lr = 0x8A022470;
	sub_89FFB2C8(ctx, base);
	// lis r10,-30165
	ctx.r10.s64 = -1976893440;
	// li r11,64
	ctx.r11.s64 = 64;
	// addi r10,r10,10384
	ctx.r10.s64 = ctx.r10.s64 + 10384;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8A022488:
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x8a022488
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8A022488;
	// lis r11,-30126
	ctx.r11.s64 = -1974337536;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// addi r3,r11,-12808
	ctx.r3.s64 = ctx.r11.s64 + -12808;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8a0c35d0
	ctx.lr = 0x8A0224A4;
	sub_8A0C35D0(ctx, base);
	// bl 0x89ff8da8
	ctx.lr = 0x8A0224A8;
	sub_89FF8DA8(ctx, base);
	// lis r11,-30160
	ctx.r11.s64 = -1976565760;
	// lis r10,-30160
	ctx.r10.s64 = -1976565760;
	// lis r9,-30137
	ctx.r9.s64 = -1975058432;
	// lis r8,-30160
	ctx.r8.s64 = -1976565760;
	// lis r7,-30160
	ctx.r7.s64 = -1976565760;
	// lis r23,-30137
	ctx.r23.s64 = -1975058432;
	// lis r22,-30165
	ctx.r22.s64 = -1976893440;
	// addi r27,r11,14984
	ctx.r27.s64 = ctx.r11.s64 + 14984;
	// addi r26,r10,10504
	ctx.r26.s64 = ctx.r10.s64 + 10504;
	// addi r25,r9,-2024
	ctx.r25.s64 = ctx.r9.s64 + -2024;
	// addi r24,r8,9984
	ctx.r24.s64 = ctx.r8.s64 + 9984;
	// addi r28,r7,10240
	ctx.r28.s64 = ctx.r7.s64 + 10240;
loc_8A0224D8:
	// bl 0x8a010f58
	ctx.lr = 0x8A0224DC;
	sub_8A010F58(ctx, base);
	// bl 0x8a011770
	ctx.lr = 0x8A0224E0;
	sub_8A011770(ctx, base);
	// bl 0x8a011440
	ctx.lr = 0x8A0224E4;
	sub_8A011440(ctx, base);
	// bl 0x89ffe5f8
	ctx.lr = 0x8A0224E8;
	sub_89FFE5F8(ctx, base);
	// bl 0x89ff7d88
	ctx.lr = 0x8A0224EC;
	sub_89FF7D88(ctx, base);
	// bl 0x89ffb450
	ctx.lr = 0x8A0224F0;
	sub_89FFB450(ctx, base);
	// bl 0x89ff9a50
	ctx.lr = 0x8A0224F4;
	sub_89FF9A50(ctx, base);
	// bl 0x8a00d300
	ctx.lr = 0x8A0224F8;
	sub_8A00D300(ctx, base);
	// bl 0x89ff63e8
	ctx.lr = 0x8A0224FC;
	sub_89FF63E8(ctx, base);
	// bl 0x89ff8090
	ctx.lr = 0x8A022500;
	sub_89FF8090(ctx, base);
	// bl 0x89ffb570
	ctx.lr = 0x8A022504;
	sub_89FFB570(ctx, base);
	// bl 0x89ff9b60
	ctx.lr = 0x8A022508;
	sub_89FF9B60(ctx, base);
	// bl 0x8a00eeb0
	ctx.lr = 0x8A02250C;
	sub_8A00EEB0(ctx, base);
	// bl 0x8a00ed88
	ctx.lr = 0x8A022510;
	sub_8A00ED88(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8A022518:
	// rlwinm r31,r29,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8a022530
	if (ctx.cr6.eq) goto loc_8A022530;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x89ff8130
	ctx.lr = 0x8A022530;
	sub_89FF8130(ctx, base);
loc_8A022530:
	// lhzx r11,r31,r24
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r24.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8a022544
	if (ctx.cr6.eq) goto loc_8A022544;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8a00de58
	ctx.lr = 0x8A022544;
	sub_8A00DE58(ctx, base);
loc_8A022544:
	// lhzx r11,r31,r25
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r25.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8a022558
	if (ctx.cr6.eq) goto loc_8A022558;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x89ffba18
	ctx.lr = 0x8A022558;
	sub_89FFBA18(ctx, base);
loc_8A022558:
	// lhzx r11,r31,r26
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r26.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8a02256c
	if (ctx.cr6.eq) goto loc_8A02256C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x89ff9e00
	ctx.lr = 0x8A02256C;
	sub_89FF9E00(ctx, base);
loc_8A02256C:
	// lhzx r11,r31,r27
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r27.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8a022580
	if (ctx.cr6.eq) goto loc_8A022580;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8a00d6c8
	ctx.lr = 0x8A022580;
	sub_8A00D6C8(ctx, base);
loc_8A022580:
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,128
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 128, ctx.xer);
	// blt cr6,0x8a022518
	if (ctx.cr6.lt) goto loc_8A022518;
	// li r4,7
	ctx.r4.s64 = 7;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x8a0114b8
	ctx.lr = 0x8A0225A0;
	sub_8A0114B8(ctx, base);
	// bl 0x8a012760
	ctx.lr = 0x8A0225A4;
	sub_8A012760(ctx, base);
	// bl 0x8a00b0f0
	ctx.lr = 0x8A0225A8;
	sub_8A00B0F0(ctx, base);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8a0225d4
	if (!ctx.cr6.eq) goto loc_8A0225D4;
	// lwz r11,7204(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 7204);
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// clrlwi r10,r11,17
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFF;
	// cmpwi cr6,r10,32767
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32767, ctx.xer);
	// bne cr6,0x8a0224d8
	if (!ctx.cr6.eq) goto loc_8A0224D8;
	// lwz r11,-1768(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + -1768);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8a0224d8
	if (!ctx.cr6.eq) goto loc_8A0224D8;
loc_8A0225D4:
	// lis r11,-30164
	ctx.r11.s64 = -1976827904;
	// lbz r3,1522(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 1522);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8a0c2380
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8A023DF8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8a0c231c
	ctx.lr = 0x8A023E00;
	__savegprlr_17(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-30126
	ctx.r9.s64 = -1974337536;
	// lis r8,-30137
	ctx.r8.s64 = -1975058432;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,-13288(r9)
	REX_STORE_U32(ctx.r9.u32 + -13288, ctx.r11.u32);
	// stw r10,20296(r8)
	REX_STORE_U32(ctx.r8.u32 + 20296, ctx.r10.u32);
	// bl 0x8a023a58
	ctx.lr = 0x8A023E20;
	sub_8A023A58(ctx, base);
	// lis r11,-30137
	ctx.r11.s64 = -1975058432;
	// addi r18,r11,11928
	ctx.r18.s64 = ctx.r11.s64 + 11928;
	// lbz r11,11928(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 11928);
	// rlwinm r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
loc_8A023E30:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8a023e30
	if (!ctx.cr6.eq) goto loc_8A023E30;
	// lis r11,-30185
	ctx.r11.s64 = -1978204160;
	// lis r10,-30160
	ctx.r10.s64 = -1976565760;
	// lis r5,32639
	ctx.r5.s64 = 2139029504;
	// lis r9,-30165
	ctx.r9.s64 = -1976893440;
	// lis r8,-30185
	ctx.r8.s64 = -1978204160;
	// lis r7,-30160
	ctx.r7.s64 = -1976565760;
	// lis r6,-30185
	ctx.r6.s64 = -1978204160;
	// ori r29,r5,32768
	ctx.r29.u64 = ctx.r5.u64 | 32768;
	// lis r19,-30097
	ctx.r19.s64 = -1972436992;
	// lis r25,-30160
	ctx.r25.s64 = -1976565760;
	// lis r24,-30165
	ctx.r24.s64 = -1976893440;
	// lis r23,-30166
	ctx.r23.s64 = -1976958976;
	// addi r27,r11,-4700
	ctx.r27.s64 = ctx.r11.s64 + -4700;
	// addi r26,r10,14624
	ctx.r26.s64 = ctx.r10.s64 + 14624;
	// addi r28,r9,-32120
	ctx.r28.s64 = ctx.r9.s64 + -32120;
	// addi r22,r8,20168
	ctx.r22.s64 = ctx.r8.s64 + 20168;
	// addi r21,r7,27472
	ctx.r21.s64 = ctx.r7.s64 + 27472;
	// addi r20,r6,-5088
	ctx.r20.s64 = ctx.r6.s64 + -5088;
loc_8A023E80:
	// bl 0x8a010f58
	ctx.lr = 0x8A023E84;
	sub_8A010F58(ctx, base);
	// bl 0x8a011770
	ctx.lr = 0x8A023E88;
	sub_8A011770(ctx, base);
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x8a0116c8
	ctx.lr = 0x8A023E90;
	sub_8A0116C8(ctx, base);
	// bl 0x8a011440
	ctx.lr = 0x8A023E94;
	sub_8A011440(ctx, base);
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
	// beq cr6,0x8a023ec8
	if (ctx.cr6.eq) goto loc_8A023EC8;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_8A023EB0:
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
	// bne cr6,0x8a023eb0
	if (!ctx.cr6.eq) goto loc_8A023EB0;
loc_8A023EC8:
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
	// beq cr6,0x8a023f04
	if (ctx.cr6.eq) goto loc_8A023F04;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
loc_8A023EEC:
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
	// bne cr6,0x8a023eec
	if (!ctx.cr6.eq) goto loc_8A023EEC;
loc_8A023F04:
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
	// beq cr6,0x8a023f40
	if (ctx.cr6.eq) goto loc_8A023F40;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
loc_8A023F28:
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
	// bne cr6,0x8a023f28
	if (!ctx.cr6.eq) goto loc_8A023F28;
loc_8A023F40:
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r31,r21,704
	ctx.r31.s64 = ctx.r21.s64 + 704;
	// stb r11,1(r26)
	REX_STORE_U8(ctx.r26.u32 + 1, ctx.r11.u8);
loc_8A023F4C:
	// lwz r11,-8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -8);
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8a023fe4
	if (ctx.cr6.eq) goto loc_8A023FE4;
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
	// bl 0x8a01c2b0
	ctx.lr = 0x8A023FB0;
	sub_8A01C2B0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,668(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 668);
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r6,16(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// add r4,r11,r3
	ctx.r4.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x8a01a510
	ctx.lr = 0x8A023FE4;
	sub_8A01A510(ctx, base);
loc_8A023FE4:
	// addi r31,r31,-696
	ctx.r31.s64 = ctx.r31.s64 + -696;
	// addi r11,r21,8
	ctx.r11.s64 = ctx.r21.s64 + 8;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8a023f4c
	if (!ctx.cr6.lt) goto loc_8A023F4C;
	// bl 0x8a025250
	ctx.lr = 0x8A023FF8;
	sub_8A025250(ctx, base);
	// bl 0x8a0243e0
	ctx.lr = 0x8A023FFC;
	sub_8A0243E0(ctx, base);
	// bl 0x8a0240e0
	ctx.lr = 0x8A024000;
	sub_8A0240E0(ctx, base);
	// lhz r11,14608(r25)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r25.u32 + 14608);
	// lhz r10,-32672(r24)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r24.u32 + -32672);
	// addi r11,r11,-4096
	ctx.r11.s64 = ctx.r11.s64 + -4096;
	// lhz r9,31312(r23)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r23.u32 + 31312);
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
	// beq cr6,0x8a02407c
	if (ctx.cr6.eq) goto loc_8A02407C;
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
	// beq cr6,0x8a024074
	if (ctx.cr6.eq) goto loc_8A024074;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_8A02405C:
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
	// bne cr6,0x8a02405c
	if (!ctx.cr6.eq) goto loc_8A02405C;
loc_8A024074:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,3(r26)
	REX_STORE_U8(ctx.r26.u32 + 3, ctx.r11.u8);
loc_8A02407C:
	// lbz r11,128(r18)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r18.u32 + 128);
	// rlwinm r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lbz r11,479(r19)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r19.u32 + 479);
	// beq cr6,0x8a02409c
	if (ctx.cr6.eq) goto loc_8A02409C;
	// addi r11,r11,-128
	ctx.r11.s64 = ctx.r11.s64 + -128;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stb r11,479(r19)
	REX_STORE_U8(ctx.r19.u32 + 479, ctx.r11.u8);
loc_8A02409C:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8a0240ac
	if (ctx.cr6.eq) goto loc_8A0240AC;
	// bl 0x8a00b2c8
	ctx.lr = 0x8A0240AC;
	sub_8A00B2C8(ctx, base);
loc_8A0240AC:
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x8a0114b8
	ctx.lr = 0x8A0240B8;
	sub_8A0114B8(ctx, base);
	// bl 0x8a012760
	ctx.lr = 0x8A0240BC;
	sub_8A012760(ctx, base);
	// lbz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r18.u32 + 0);
	// rlwinm r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8a023e80
	if (ctx.cr6.eq) goto loc_8A023E80;
	// bl 0x8a023c88
	ctx.lr = 0x8A0240D0;
	sub_8A023C88(ctx, base);
	// bl 0x8a02a498
	ctx.lr = 0x8A0240D4;
	sub_8A02A498(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8a0c236c
	__restgprlr_17(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8A028500) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8a0c2310
	ctx.lr = 0x8A028508;
	__savegprlr_14(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r30,-30185
	ctx.r30.s64 = -1978204160;
	// lis r28,-30185
	ctx.r28.s64 = -1978204160;
	// stb r11,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// lis r26,-30185
	ctx.r26.s64 = -1978204160;
	// stb r11,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// lis r21,-30185
	ctx.r21.s64 = -1978204160;
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// lis r3,-30185
	ctx.r3.s64 = -1978204160;
	// stb r11,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// addi r9,r28,22088
	ctx.r9.s64 = ctx.r28.s64 + 22088;
	// addi r10,r30,-4732
	ctx.r10.s64 = ctx.r30.s64 + -4732;
	// addi r6,r26,21948
	ctx.r6.s64 = ctx.r26.s64 + 21948;
	// stw r9,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// addi r4,r21,21696
	ctx.r4.s64 = ctx.r21.s64 + 21696;
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r3,r3,21040
	ctx.r3.s64 = ctx.r3.s64 + 21040;
	// stw r6,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// lis r27,-30185
	ctx.r27.s64 = -1978204160;
	// stw r4,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// lis r5,-30185
	ctx.r5.s64 = -1978204160;
	// stw r3,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lis r7,-30185
	ctx.r7.s64 = -1978204160;
	// lbz r21,83(r1)
	ctx.r21.u64 = REX_LOAD_U8(ctx.r1.u32 + 83);
	// lis r8,-30185
	ctx.r8.s64 = -1978204160;
	// lis r11,-30185
	ctx.r11.s64 = -1978204160;
	// lis r23,-30210
	ctx.r23.s64 = -1979842560;
	// lis r29,-30185
	ctx.r29.s64 = -1978204160;
	// lis r24,-30185
	ctx.r24.s64 = -1978204160;
	// lis r20,-30185
	ctx.r20.s64 = -1978204160;
	// lis r19,-30160
	ctx.r19.s64 = -1976565760;
	// lis r28,16576
	ctx.r28.s64 = 1086324736;
	// lis r17,32639
	ctx.r17.s64 = 2139029504;
	// lis r25,-30185
	ctx.r25.s64 = -1978204160;
	// lis r22,-30185
	ctx.r22.s64 = -1978204160;
	// lis r31,-30165
	ctx.r31.s64 = -1976893440;
	// lis r4,-30185
	ctx.r4.s64 = -1978204160;
	// lis r6,-30185
	ctx.r6.s64 = -1978204160;
	// lis r9,-30160
	ctx.r9.s64 = -1976565760;
	// lis r10,-30126
	ctx.r10.s64 = -1974337536;
	// addi r14,r27,21980
	ctx.r14.s64 = ctx.r27.s64 + 21980;
	// addi r5,r5,20944
	ctx.r5.s64 = ctx.r5.s64 + 20944;
	// addi r7,r7,21556
	ctx.r7.s64 = ctx.r7.s64 + 21556;
	// addi r3,r8,21508
	ctx.r3.s64 = ctx.r8.s64 + 21508;
	// stw r5,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// addi r11,r11,21604
	ctx.r11.s64 = ctx.r11.s64 + 21604;
	// stw r7,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// addi r27,r23,10216
	ctx.r27.s64 = ctx.r23.s64 + 10216;
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r15,r29,22140
	ctx.r15.s64 = ctx.r29.s64 + 22140;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r26,r24,19992
	ctx.r26.s64 = ctx.r24.s64 + 19992;
	// addi r23,r20,21684
	ctx.r23.s64 = ctx.r20.s64 + 21684;
	// addi r30,r19,14624
	ctx.r30.s64 = ctx.r19.s64 + 14624;
	// ori r16,r28,16384
	ctx.r16.u64 = ctx.r28.u64 | 16384;
	// li r18,1
	ctx.r18.s64 = 1;
	// ori r17,r17,32768
	ctx.r17.u64 = ctx.r17.u64 | 32768;
	// addi r25,r25,21848
	ctx.r25.s64 = ctx.r25.s64 + 21848;
	// addi r22,r22,21760
	ctx.r22.s64 = ctx.r22.s64 + 21760;
	// addi r29,r31,-32120
	ctx.r29.s64 = ctx.r31.s64 + -32120;
	// addi r19,r4,21460
	ctx.r19.s64 = ctx.r4.s64 + 21460;
	// addi r28,r6,21020
	ctx.r28.s64 = ctx.r6.s64 + 21020;
	// addi r20,r9,22776
	ctx.r20.s64 = ctx.r9.s64 + 22776;
	// addi r24,r10,-13092
	ctx.r24.s64 = ctx.r10.s64 + -13092;
loc_8A02860C:
	// bl 0x8a010f58
	ctx.lr = 0x8A028610;
	sub_8A010F58(ctx, base);
	// bl 0x8a011770
	ctx.lr = 0x8A028614;
	sub_8A011770(ctx, base);
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x8a0116c8
	ctx.lr = 0x8A02861C;
	sub_8A0116C8(ctx, base);
	// bl 0x8a011440
	ctx.lr = 0x8A028620;
	sub_8A011440(ctx, base);
	// lis r4,-32640
	ctx.r4.s64 = -2139095040;
	// lwz r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// bl 0x8a012b70
	ctx.lr = 0x8A028630;
	sub_8A012B70(ctx, base);
	// lbz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r24.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8a028644
	if (!ctx.cr6.eq) goto loc_8A028644;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
loc_8A028644:
	// lis r11,-30160
	ctx.r11.s64 = -1976565760;
	// lbz r8,1(r24)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r24.u32 + 1);
	// li r9,2
	ctx.r9.s64 = 2;
	// li r7,-1
	ctx.r7.s64 = -1;
	// cntlzw r5,r8
	ctx.r5.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// lbz r10,7291(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 7291);
	// rlwinm r3,r5,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// subfc r11,r9,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r11.u64 = ctx.r10.u64 - ctx.r9.u64;
	// subfze r11,r7
	temp.u8 = ~ctx.r7.u32 + ctx.xer.ca < ~ctx.r7.u32;
	ctx.r11.u64 = ~ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 & ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8a028680
	if (ctx.cr6.eq) goto loc_8A028680;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// extsb r6,r11
	ctx.r6.s64 = ctx.r11.s8;
loc_8A028680:
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x8a028694
	if (!ctx.cr6.eq) goto loc_8A028694;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// extsb r6,r11
	ctx.r6.s64 = ctx.r11.s8;
loc_8A028694:
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x8a0286a8
	if (!ctx.cr6.eq) goto loc_8A0286A8;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// extsb r6,r11
	ctx.r6.s64 = ctx.r11.s8;
loc_8A0286A8:
	// lbz r4,256(r20)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r20.u32 + 256);
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// extsb r5,r4
	ctx.r5.s64 = ctx.r4.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8a0286d4
	if (ctx.cr6.eq) goto loc_8A0286D4;
	// extsb r11,r6
	ctx.r11.s64 = ctx.r6.s8;
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// extsb r9,r21
	ctx.r9.s64 = ctx.r21.s8;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lbzx r21,r7,r9
	ctx.r21.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
loc_8A0286D4:
	// rlwinm r11,r5,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8a0286f8
	if (ctx.cr6.eq) goto loc_8A0286F8;
	// extsb r11,r6
	ctx.r11.s64 = ctx.r6.s8;
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// extsb r9,r21
	ctx.r9.s64 = ctx.r21.s8;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lbzx r21,r7,r9
	ctx.r21.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
loc_8A0286F8:
	// extsb r31,r21
	ctx.r31.s64 = ctx.r21.s8;
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r8,r29,8
	ctx.r8.s64 = ctx.r29.s64 + 8;
	// lbzx r9,r31,r28
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// lbz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r7,r9
	ctx.r7.s64 = ctx.r9.s8;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// rlwinm r9,r7,7,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0xFFFFFF80;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// beq cr6,0x8a028740
	if (ctx.cr6.eq) goto loc_8A028740;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
loc_8A028728:
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// add r3,r11,r16
	ctx.r3.u64 = ctx.r11.u64 + ctx.r16.u64;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// stwu r3,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r9.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8a028728
	if (!ctx.cr6.eq) goto loc_8A028728;
loc_8A028740:
	// extsb r11,r6
	ctx.r11.s64 = ctx.r6.s8;
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// stbx r18,r7,r30
	REX_STORE_U8(ctx.r7.u32 + ctx.r30.u32, ctx.r18.u8);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r5,0,28,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwzx r11,r9,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r9,r8,r19
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r19.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// beq cr6,0x8a02879c
	if (ctx.cr6.eq) goto loc_8A02879C;
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r6,r31,r8
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// extsb r7,r10
	ctx.r7.s64 = ctx.r10.s8;
	// extsb r5,r6
	ctx.r5.s64 = ctx.r6.s8;
	// cmpw cr6,r7,r5
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x8a028790
	if (!ctx.cr6.eq) goto loc_8A028790;
	// lbzx r10,r31,r9
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// b 0x8a028798
	goto loc_8A028798;
loc_8A028790:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
loc_8A028798:
	// lbz r4,256(r20)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r20.u32 + 256);
loc_8A02879C:
	// rlwinm r10,r4,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8a0287d4
	if (ctx.cr6.eq) goto loc_8A0287D4;
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r9,r31,r9
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// extsb r7,r10
	ctx.r7.s64 = ctx.r10.s8;
	// extsb r6,r9
	ctx.r6.s64 = ctx.r9.s8;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x8a0287cc
	if (!ctx.cr6.eq) goto loc_8A0287CC;
	// lbzx r10,r31,r8
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// b 0x8a0287d4
	goto loc_8A0287D4;
loc_8A0287CC:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
loc_8A0287D4:
	// lis r11,-30160
	ctx.r11.s64 = -1976565760;
	// lbz r10,1(r24)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r24.u32 + 1);
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r6,r8,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// lbz r5,7291(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 7291);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r7,r5,-2
	ctx.r7.s64 = ctx.r5.s64 + -2;
	// cntlzw r4,r7
	ctx.r4.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r3,r4,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// and r10,r6,r3
	ctx.r10.u64 = ctx.r6.u64 & ctx.r3.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8a02880c
	if (ctx.cr6.eq) goto loc_8A02880C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,1(r24)
	REX_STORE_U8(ctx.r24.u32 + 1, ctx.r11.u8);
loc_8A02880C:
	// lbz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r28.u32 + 0);
	// addi r7,r29,12
	ctx.r7.s64 = ctx.r29.s64 + 12;
	// lbz r9,0(r23)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r23.u32 + 0);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// rlwinm r6,r8,7,0,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0xFFFFFF80;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r9,r6,r7
	ctx.r9.u64 = ctx.r6.u64 + ctx.r7.u64;
	// beq cr6,0x8a028850
	if (ctx.cr6.eq) goto loc_8A028850;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
loc_8A028838:
	// lbzu r7,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r7.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// subf r4,r17,r11
	ctx.r4.u64 = ctx.r11.u64 - ctx.r17.u64;
	// extsb r11,r7
	ctx.r11.s64 = ctx.r7.s8;
	// stwu r4,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r9.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8a028838
	if (!ctx.cr6.eq) goto loc_8A028838;
loc_8A028850:
	// lwz r10,108(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// rlwinm r11,r5,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// stbx r18,r8,r30
	REX_STORE_U8(ctx.r8.u32 + ctx.r30.u32, ctx.r18.u8);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r29,56
	ctx.r11.s64 = ctx.r29.s64 + 56;
	// add r9,r6,r11
	ctx.r9.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r11,r7
	ctx.r11.s64 = ctx.r7.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8a028894
	if (ctx.cr6.eq) goto loc_8A028894;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
loc_8A02887C:
	// lbzu r7,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r7.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// add r6,r11,r16
	ctx.r6.u64 = ctx.r11.u64 + ctx.r16.u64;
	// extsb r11,r7
	ctx.r11.s64 = ctx.r7.s8;
	// stwu r6,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r9.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8a02887c
	if (!ctx.cr6.eq) goto loc_8A02887C;
loc_8A028894:
	// stbx r18,r8,r30
	REX_STORE_U8(ctx.r8.u32 + ctx.r30.u32, ctx.r18.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// lbz r11,1(r28)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r28.u32 + 1);
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// bl 0x8a029cd0
	ctx.lr = 0x8A0288A8;
	sub_8A029CD0(ctx, base);
	// lbz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r28.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// bl 0x8a029cd0
	ctx.lr = 0x8A0288B8;
	sub_8A029CD0(ctx, base);
	// bl 0x8a029ec0
	ctx.lr = 0x8A0288BC;
	sub_8A029EC0(ctx, base);
	// lbz r11,9(r28)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r28.u32 + 9);
	// lbz r9,0(r27)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r27.u32 + 0);
	// addi r8,r29,12
	ctx.r8.s64 = ctx.r29.s64 + 12;
	// extsb r7,r11
	ctx.r7.s64 = ctx.r11.s8;
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// rlwinm r9,r7,7,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0xFFFFFF80;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// beq cr6,0x8a028900
	if (ctx.cr6.eq) goto loc_8A028900;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
loc_8A0288E8:
	// lbzu r6,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r6.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// subf r5,r17,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r17.u64;
	// extsb r11,r6
	ctx.r11.s64 = ctx.r6.s8;
	// stwu r5,4(r8)
	ea = 4 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r8.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8a0288e8
	if (!ctx.cr6.eq) goto loc_8A0288E8;
loc_8A028900:
	// lis r11,-30160
	ctx.r11.s64 = -1976565760;
	// stbx r18,r7,r30
	REX_STORE_U8(ctx.r7.u32 + ctx.r30.u32, ctx.r18.u8);
	// lbz r11,8399(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 8399);
	// rotlwi r10,r11,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// addi r11,r29,68
	ctx.r11.s64 = ctx.r29.s64 + 68;
	// add r10,r10,r22
	ctx.r10.u64 = ctx.r10.u64 + ctx.r22.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lbz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8a028948
	if (ctx.cr6.eq) goto loc_8A028948;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
loc_8A028930:
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// add r6,r11,r16
	ctx.r6.u64 = ctx.r11.u64 + ctx.r16.u64;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// stwu r6,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r9.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8a028930
	if (!ctx.cr6.eq) goto loc_8A028930;
loc_8A028948:
	// lis r11,-30165
	ctx.r11.s64 = -1976893440;
	// lbz r10,10(r28)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r28.u32 + 10);
	// stbx r18,r7,r30
	REX_STORE_U8(ctx.r7.u32 + ctx.r30.u32, ctx.r18.u8);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// lbz r11,7214(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 7214);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,31,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x10;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8a02899c
	if (ctx.cr6.eq) goto loc_8A02899C;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// addi r7,r29,68
	ctx.r7.s64 = ctx.r29.s64 + 68;
	// rlwinm r6,r8,7,0,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0xFFFFFF80;
	// subf r8,r11,r6
	ctx.r8.u64 = ctx.r6.u64 - ctx.r11.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
loc_8A02898C:
	// stwx r10,r8,r11
	REX_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u32);
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8a02898c
	if (!ctx.cr6.eq) goto loc_8A02898C;
loc_8A02899C:
	// lbz r11,11(r28)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r28.u32 + 11);
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// lbz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r25.u32 + 0);
	// addi r9,r29,12
	ctx.r9.s64 = ctx.r29.s64 + 12;
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// rlwinm r7,r8,7,0,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0xFFFFFF80;
	// stbx r18,r6,r30
	REX_STORE_U8(ctx.r6.u32 + ctx.r30.u32, ctx.r18.u8);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8a0289e8
	if (ctx.cr6.eq) goto loc_8A0289E8;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
loc_8A0289D0:
	// lbzu r6,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r6.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// subf r5,r17,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r17.u64;
	// extsb r11,r6
	ctx.r11.s64 = ctx.r6.s8;
	// stwu r5,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r9.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8a0289d0
	if (!ctx.cr6.eq) goto loc_8A0289D0;
loc_8A0289E8:
	// lis r11,-30164
	ctx.r11.s64 = -1976827904;
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stbx r18,r8,r30
	REX_STORE_U8(ctx.r8.u32 + ctx.r30.u32, ctx.r18.u8);
	// lbz r11,1475(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1475);
	// rotlwi r6,r11,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// addi r11,r29,68
	ctx.r11.s64 = ctx.r29.s64 + 68;
	// add r9,r7,r11
	ctx.r9.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lwzx r10,r6,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// lbz r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r11,r5
	ctx.r11.s64 = ctx.r5.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8a028a34
	if (ctx.cr6.eq) goto loc_8A028A34;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
loc_8A028A1C:
	// add r11,r11,r16
	ctx.r11.u64 = ctx.r11.u64 + ctx.r16.u64;
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
	// bne cr6,0x8a028a1c
	if (!ctx.cr6.eq) goto loc_8A028A1C;
loc_8A028A34:
	// lbz r11,12(r28)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r28.u32 + 12);
	// addi r7,r29,12
	ctx.r7.s64 = ctx.r29.s64 + 12;
	// lbz r10,0(r14)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r14.u32 + 0);
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// stbx r18,r8,r30
	REX_STORE_U8(ctx.r8.u32 + ctx.r30.u32, ctx.r18.u8);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// rlwinm r8,r9,7,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFFFFFF80;
	// mr r10,r14
	ctx.r10.u64 = ctx.r14.u64;
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8a028a7c
	if (ctx.cr6.eq) goto loc_8A028A7C;
	// addi r7,r7,-4
	ctx.r7.s64 = ctx.r7.s64 + -4;
loc_8A028A64:
	// lbzu r6,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r6.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// subf r5,r17,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r17.u64;
	// extsb r11,r6
	ctx.r11.s64 = ctx.r6.s8;
	// stwu r5,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r7.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8a028a64
	if (!ctx.cr6.eq) goto loc_8A028A64;
loc_8A028A7C:
	// lis r11,-30163
	ctx.r11.s64 = -1976762368;
	// stbx r18,r9,r30
	REX_STORE_U8(ctx.r9.u32 + ctx.r30.u32, ctx.r18.u8);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lbz r11,-23170(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -23170);
	// rotlwi r7,r11,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// addi r11,r29,68
	ctx.r11.s64 = ctx.r29.s64 + 68;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwzx r10,r7,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// lbz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r11,r6
	ctx.r11.s64 = ctx.r6.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8a028ac8
	if (ctx.cr6.eq) goto loc_8A028AC8;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
loc_8A028AB0:
	// add r11,r11,r16
	ctx.r11.u64 = ctx.r11.u64 + ctx.r16.u64;
	// stwu r11,4(r8)
	ea = 4 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r8.u32 = ea;
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8a028ab0
	if (!ctx.cr6.eq) goto loc_8A028AB0;
loc_8A028AC8:
	// stbx r18,r9,r30
	REX_STORE_U8(ctx.r9.u32 + ctx.r30.u32, ctx.r18.u8);
	// lbz r3,13(r28)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r28.u32 + 13);
	// bl 0x8a029c18
	ctx.lr = 0x8A028AD4;
	sub_8A029C18(ctx, base);
	// lbz r3,14(r28)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r28.u32 + 14);
	// bl 0x8a029b80
	ctx.lr = 0x8A028ADC;
	sub_8A029B80(ctx, base);
	// lbz r7,15(r28)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r28.u32 + 15);
	// lbz r11,0(r15)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r15.u32 + 0);
	// addi r8,r29,12
	ctx.r8.s64 = ctx.r29.s64 + 12;
	// extsb r6,r7
	ctx.r6.s64 = ctx.r7.s8;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// rlwinm r9,r6,7,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 7) & 0xFFFFFF80;
	// mr r10,r15
	ctx.r10.u64 = ctx.r15.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// beq cr6,0x8a028b20
	if (ctx.cr6.eq) goto loc_8A028B20;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
loc_8A028B08:
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// subf r5,r17,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r17.u64;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// stwu r5,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r9.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8a028b08
	if (!ctx.cr6.eq) goto loc_8A028B08;
loc_8A028B20:
	// lis r11,-30160
	ctx.r11.s64 = -1976565760;
	// stbx r18,r6,r30
	REX_STORE_U8(ctx.r6.u32 + ctx.r30.u32, ctx.r18.u8);
	// extsb r9,r7
	ctx.r9.s64 = ctx.r7.s8;
	// lbz r11,8390(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 8390);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,31,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x10;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8a028b70
	if (ctx.cr6.eq) goto loc_8A028B70;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// addi r7,r29,68
	ctx.r7.s64 = ctx.r29.s64 + 68;
	// rlwinm r6,r8,7,0,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0xFFFFFF80;
	// subf r8,r11,r6
	ctx.r8.u64 = ctx.r6.u64 - ctx.r11.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
loc_8A028B60:
	// stwx r10,r8,r11
	REX_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u32);
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8a028b60
	if (!ctx.cr6.eq) goto loc_8A028B60;
loc_8A028B70:
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// cmpwi cr6,r31,16
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 16, ctx.xer);
	// stbx r18,r11,r30
	REX_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r18.u8);
	// beq cr6,0x8a028b8c
	if (ctx.cr6.eq) goto loc_8A028B8C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// b 0x8a028b9c
	goto loc_8A028B9C;
loc_8A028B8C:
	// lbz r3,82(r1)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// bl 0x8a02a328
	ctx.lr = 0x8A028B94;
	sub_8A02A328(ctx, base);
	// stb r3,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, ctx.r3.u8);
	// li r11,0
	ctx.r11.s64 = 0;
loc_8A028B9C:
	// cmpwi cr6,r31,17
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 17, ctx.xer);
	// beq cr6,0x8a028bac
	if (ctx.cr6.eq) goto loc_8A028BAC;
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// b 0x8a028bbc
	goto loc_8A028BBC;
loc_8A028BAC:
	// lbz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8a02a778
	ctx.lr = 0x8A028BB4;
	sub_8A02A778(ctx, base);
	// stb r3,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r3.u8);
	// li r11,0
	ctx.r11.s64 = 0;
loc_8A028BBC:
	// lbz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x8a028bd8
	if (!ctx.cr6.lt) goto loc_8A028BD8;
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// extsb r21,r10
	ctx.r21.s64 = ctx.r10.s8;
loc_8A028BD8:
	// extsb r31,r21
	ctx.r31.s64 = ctx.r21.s8;
	// cmpwi cr6,r31,18
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 18, ctx.xer);
	// beq cr6,0x8a028bec
	if (ctx.cr6.eq) goto loc_8A028BEC;
	// stb r11,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// b 0x8a028bf8
	goto loc_8A028BF8;
loc_8A028BEC:
	// lbz r3,81(r1)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x8a02aa48
	ctx.lr = 0x8A028BF4;
	sub_8A02AA48(ctx, base);
	// stb r3,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r3.u8);
loc_8A028BF8:
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x8a0114b8
	ctx.lr = 0x8A028C04;
	sub_8A0114B8(ctx, base);
	// bl 0x8a012760
	ctx.lr = 0x8A028C08;
	sub_8A012760(ctx, base);
	// lbz r10,81(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// addi r11,r31,-18
	ctx.r11.s64 = ctx.r31.s64 + -18;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// addi r10,r10,-3
	ctx.r10.s64 = ctx.r10.s64 + -3;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r8,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r7,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// subfe r6,r7,r11
	temp.u8 = (~ctx.r7.u32 + ctx.r11.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// or r5,r8,r6
	ctx.r5.u64 = ctx.r8.u64 | ctx.r6.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x8a02860c
	if (!ctx.cr6.eq) goto loc_8A02860C;
	// lbz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r24.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8a028c5c
	if (!ctx.cr6.eq) goto loc_8A028C5C;
	// lis r11,-30160
	ctx.r11.s64 = -1976565760;
	// lbz r11,7291(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 7291);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8a028c74
	if (!ctx.cr6.eq) goto loc_8A028C74;
	// lbz r11,1(r24)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r24.u32 + 1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8a028c74
	if (ctx.cr6.eq) goto loc_8A028C74;
loc_8A028C5C:
	// lis r9,-30165
	ctx.r9.s64 = -1976893440;
	// lis r8,-30165
	ctx.r8.s64 = -1976893440;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
	// stb r18,-32125(r9)
	REX_STORE_U8(ctx.r9.u32 + -32125, ctx.r18.u8);
	// stb r18,13207(r8)
	REX_STORE_U8(ctx.r8.u32 + 13207, ctx.r18.u8);
loc_8A028C74:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x8a0c2360
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8A02BC08) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8a0c2310
	ctx.lr = 0x8A02BC10;
	__savegprlr_14(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r8,-30137
	ctx.r8.s64 = -1975058432;
	// lis r7,-30185
	ctx.r7.s64 = -1978204160;
	// lis r6,-30185
	ctx.r6.s64 = -1978204160;
	// lis r5,-30185
	ctx.r5.s64 = -1978204160;
	// lis r4,-30160
	ctx.r4.s64 = -1976565760;
	// lis r3,-30185
	ctx.r3.s64 = -1978204160;
	// lis r31,16576
	ctx.r31.s64 = 1086324736;
	// li r19,0
	ctx.r19.s64 = 0;
	// li r22,25
	ctx.r22.s64 = 25;
	// li r23,16
	ctx.r23.s64 = 16;
	// stb r19,131(r1)
	REX_STORE_U8(ctx.r1.u32 + 131, ctx.r19.u8);
	// li r18,7
	ctx.r18.s64 = 7;
	// stb r22,132(r1)
	REX_STORE_U8(ctx.r1.u32 + 132, ctx.r22.u8);
	// lis r11,-30185
	ctx.r11.s64 = -1978204160;
	// stb r19,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r19.u8);
	// lis r10,-30160
	ctx.r10.s64 = -1976565760;
	// stb r19,128(r1)
	REX_STORE_U8(ctx.r1.u32 + 128, ctx.r19.u8);
	// lis r9,-30165
	ctx.r9.s64 = -1976893440;
	// stb r19,129(r1)
	REX_STORE_U8(ctx.r1.u32 + 129, ctx.r19.u8);
	// addi r16,r8,20300
	ctx.r16.s64 = ctx.r8.s64 + 20300;
	// stb r19,130(r1)
	REX_STORE_U8(ctx.r1.u32 + 130, ctx.r19.u8);
	// addi r24,r7,22808
	ctx.r24.s64 = ctx.r7.s64 + 22808;
	// stb r23,133(r1)
	REX_STORE_U8(ctx.r1.u32 + 133, ctx.r23.u8);
	// addi r26,r6,22748
	ctx.r26.s64 = ctx.r6.s64 + 22748;
	// stb r18,134(r1)
	REX_STORE_U8(ctx.r1.u32 + 134, ctx.r18.u8);
	// addi r27,r5,22740
	ctx.r27.s64 = ctx.r5.s64 + 22740;
	// stw r16,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r16.u32);
	// addi r28,r4,22776
	ctx.r28.s64 = ctx.r4.s64 + 22776;
	// stw r24,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
	// addi r17,r3,22832
	ctx.r17.s64 = ctx.r3.s64 + 22832;
	// stw r26,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// ori r15,r31,16384
	ctx.r15.u64 = ctx.r31.u64 | 16384;
	// stw r27,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// mr r25,r19
	ctx.r25.u64 = ctx.r19.u64;
	// stw r28,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// mr r21,r19
	ctx.r21.u64 = ctx.r19.u64;
	// stw r17,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r17.u32);
	// mr r14,r19
	ctx.r14.u64 = ctx.r19.u64;
	// mr r20,r19
	ctx.r20.u64 = ctx.r19.u64;
	// addi r31,r11,5280
	ctx.r31.s64 = ctx.r11.s64 + 5280;
	// addi r29,r10,14624
	ctx.r29.s64 = ctx.r10.s64 + 14624;
	// addi r30,r9,-32120
	ctx.r30.s64 = ctx.r9.s64 + -32120;
	// b 0x8a02bd00
	goto loc_8A02BD00;
loc_8A02BCC0:
	// lis r11,16576
	ctx.r11.s64 = 1086324736;
	// lbz r25,80(r1)
	ctx.r25.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r14,81(r1)
	ctx.r14.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r18,134(r1)
	ctx.r18.u64 = REX_LOAD_U8(ctx.r1.u32 + 134);
	// ori r15,r11,16384
	ctx.r15.u64 = ctx.r11.u64 | 16384;
	// lbz r23,133(r1)
	ctx.r23.u64 = REX_LOAD_U8(ctx.r1.u32 + 133);
	// lbz r22,132(r1)
	ctx.r22.u64 = REX_LOAD_U8(ctx.r1.u32 + 132);
	// lbz r19,130(r1)
	ctx.r19.u64 = REX_LOAD_U8(ctx.r1.u32 + 130);
	// lbz r20,129(r1)
	ctx.r20.u64 = REX_LOAD_U8(ctx.r1.u32 + 129);
	// lbz r21,128(r1)
	ctx.r21.u64 = REX_LOAD_U8(ctx.r1.u32 + 128);
	// lwz r16,84(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r24,88(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r26,92(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r27,96(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r28,100(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r17,104(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
loc_8A02BD00:
	// bl 0x8a010f58
	ctx.lr = 0x8A02BD04;
	sub_8A010F58(ctx, base);
	// bl 0x8a011770
	ctx.lr = 0x8A02BD08;
	sub_8A011770(ctx, base);
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x8a0116c8
	ctx.lr = 0x8A02BD10;
	sub_8A0116C8(ctx, base);
	// bl 0x8a011440
	ctx.lr = 0x8A02BD14;
	sub_8A011440(ctx, base);
	// lis r4,-32640
	ctx.r4.s64 = -2139095040;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// bl 0x8a012b70
	ctx.lr = 0x8A02BD24;
	sub_8A012B70(ctx, base);
	// lbz r11,256(r28)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r28.u32 + 256);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8a02bd44
	if (ctx.cr6.eq) goto loc_8A02BD44;
	// extsb r11,r25
	ctx.r11.s64 = ctx.r25.s8;
	// lbzx r25,r11,r27
	ctx.r25.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// stb r25,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r25.u8);
loc_8A02BD44:
	// rlwinm r11,r8,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8a02bd5c
	if (ctx.cr6.eq) goto loc_8A02BD5C;
	// extsb r11,r25
	ctx.r11.s64 = ctx.r25.s8;
	// lbzx r25,r11,r26
	ctx.r25.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r26.u32);
	// stb r25,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r25.u8);
loc_8A02BD5C:
	// extsb r28,r25
	ctx.r28.s64 = ctx.r25.s8;
	// cmplwi cr6,r28,5
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 5, ctx.xer);
	// bgt cr6,0x8a02c270
	if (ctx.cr6.gt) goto loc_8A02C270;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8a02be34
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8A02BE34;
	// bdzf 4*cr6+eq,0x8a02bf24
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8A02BF24;
	// bdzf 4*cr6+eq,0x8a02c004
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8A02C004;
	// bdzf 4*cr6+eq,0x8a02c0d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8A02C0D4;
	// bne cr6,0x8a02c1a4
	if (!ctx.cr6.eq) goto loc_8A02C1A4;
	// rlwinm r11,r8,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8a02bddc
	if (ctx.cr6.eq) goto loc_8A02BDDC;
	// clrlwi r10,r18,28
	ctx.r10.u64 = ctx.r18.u32 & 0xF;
	// rlwinm r11,r18,28,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 28) & 0xF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// bne cr6,0x8a02bdc8
	if (!ctx.cr6.eq) goto loc_8A02BDC8;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r9,r11,-10
	ctx.r9.s64 = ctx.r11.s64 + -10;
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 & ctx.r11.u64;
loc_8A02BDC8:
	// rlwinm r11,r11,4,20,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFF0;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// or r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r18,r9,24
	ctx.r18.u64 = ctx.r9.u32 & 0xFF;
	// stb r18,134(r1)
	REX_STORE_U8(ctx.r1.u32 + 134, ctx.r18.u8);
loc_8A02BDDC:
	// rlwinm r11,r8,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8a02c270
	if (ctx.cr6.eq) goto loc_8A02C270;
	// clrlwi r11,r18,28
	ctx.r11.u64 = ctx.r18.u32 & 0xF;
	// rlwinm r10,r18,28,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 28) & 0xF;
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x8a02be1c
	if (!ctx.cr6.eq) goto loc_8A02BE1C;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// bne cr6,0x8a02be18
	if (!ctx.cr6.eq) goto loc_8A02BE18;
	// li r10,9
	ctx.r10.s64 = 9;
loc_8A02BE18:
	// li r11,9
	ctx.r11.s64 = 9;
loc_8A02BE1C:
	// rlwinm r10,r10,4,20,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFF0;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// or r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 | ctx.r9.u64;
	// clrlwi r18,r8,24
	ctx.r18.u64 = ctx.r8.u32 & 0xFF;
	// stb r18,134(r1)
	REX_STORE_U8(ctx.r1.u32 + 134, ctx.r18.u8);
	// b 0x8a02c270
	goto loc_8A02C270;
loc_8A02BE34:
	// rlwinm r11,r8,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8a02be9c
	if (ctx.cr6.eq) goto loc_8A02BE9C;
	// clrlwi r10,r23,28
	ctx.r10.u64 = ctx.r23.u32 & 0xF;
	// rlwinm r11,r23,28,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 28) & 0xF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// bne cr6,0x8a02be78
	if (!ctx.cr6.eq) goto loc_8A02BE78;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r9,r11,-10
	ctx.r9.s64 = ctx.r11.s64 + -10;
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 & ctx.r11.u64;
loc_8A02BE78:
	// rlwinm r11,r11,4,20,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFF0;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// or r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r23,r9,24
	ctx.r23.u64 = ctx.r9.u32 & 0xFF;
	// stb r23,133(r1)
	REX_STORE_U8(ctx.r1.u32 + 133, ctx.r23.u8);
	// cmplwi cr6,r23,19
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 19, ctx.xer);
	// bne cr6,0x8a02be9c
	if (!ctx.cr6.eq) goto loc_8A02BE9C;
	// li r23,1
	ctx.r23.s64 = 1;
	// stb r23,133(r1)
	REX_STORE_U8(ctx.r1.u32 + 133, ctx.r23.u8);
loc_8A02BE9C:
	// rlwinm r11,r8,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8a02bf00
	if (ctx.cr6.eq) goto loc_8A02BF00;
	// clrlwi r11,r23,28
	ctx.r11.u64 = ctx.r23.u32 & 0xF;
	// rlwinm r10,r23,28,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 28) & 0xF;
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x8a02bedc
	if (!ctx.cr6.eq) goto loc_8A02BEDC;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// bne cr6,0x8a02bed8
	if (!ctx.cr6.eq) goto loc_8A02BED8;
	// li r10,9
	ctx.r10.s64 = 9;
loc_8A02BED8:
	// li r11,9
	ctx.r11.s64 = 9;
loc_8A02BEDC:
	// rlwinm r10,r10,4,20,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFF0;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// or r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 | ctx.r9.u64;
	// clrlwi r23,r8,24
	ctx.r23.u64 = ctx.r8.u32 & 0xFF;
	// stb r23,133(r1)
	REX_STORE_U8(ctx.r1.u32 + 133, ctx.r23.u8);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x8a02bf00
	if (!ctx.cr6.eq) goto loc_8A02BF00;
	// li r23,18
	ctx.r23.s64 = 18;
	// stb r23,133(r1)
	REX_STORE_U8(ctx.r1.u32 + 133, ctx.r23.u8);
loc_8A02BF00:
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// clrlwi r10,r22,24
	ctx.r10.u64 = ctx.r22.u32 & 0xFF;
	// lbzx r11,r11,r24
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r24.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8a02c270
	if (!ctx.cr6.gt) goto loc_8A02C270;
	// mr r22,r11
	ctx.r22.u64 = ctx.r11.u64;
	// stb r11,132(r1)
	REX_STORE_U8(ctx.r1.u32 + 132, ctx.r11.u8);
	// b 0x8a02c270
	goto loc_8A02C270;
loc_8A02BF24:
	// rlwinm r11,r8,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8a02bf98
	if (ctx.cr6.eq) goto loc_8A02BF98;
	// clrlwi r10,r22,28
	ctx.r10.u64 = ctx.r22.u32 & 0xF;
	// rlwinm r11,r22,28,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 28) & 0xF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// bne cr6,0x8a02bf68
	if (!ctx.cr6.eq) goto loc_8A02BF68;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r9,r11,-10
	ctx.r9.s64 = ctx.r11.s64 + -10;
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 & ctx.r11.u64;
loc_8A02BF68:
	// clrlwi r9,r23,24
	ctx.r9.u64 = ctx.r23.u32 & 0xFF;
	// rlwinm r7,r11,4,20,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFF0;
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// or r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 | ctx.r6.u64;
	// lbzx r11,r9,r24
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r24.u32);
	// clrlwi r22,r5,24
	ctx.r22.u64 = ctx.r5.u32 & 0xFF;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stb r22,132(r1)
	REX_STORE_U8(ctx.r1.u32 + 132, ctx.r22.u8);
	// cmpw cr6,r22,r4
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x8a02bf98
	if (!ctx.cr6.eq) goto loc_8A02BF98;
	// li r22,1
	ctx.r22.s64 = 1;
	// stb r22,132(r1)
	REX_STORE_U8(ctx.r1.u32 + 132, ctx.r22.u8);
loc_8A02BF98:
	// rlwinm r11,r8,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8a02c270
	if (ctx.cr6.eq) goto loc_8A02C270;
	// clrlwi r11,r22,28
	ctx.r11.u64 = ctx.r22.u32 & 0xF;
	// rlwinm r10,r22,28,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 28) & 0xF;
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x8a02bfd8
	if (!ctx.cr6.eq) goto loc_8A02BFD8;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// bne cr6,0x8a02bfd4
	if (!ctx.cr6.eq) goto loc_8A02BFD4;
	// li r10,9
	ctx.r10.s64 = 9;
loc_8A02BFD4:
	// li r11,9
	ctx.r11.s64 = 9;
loc_8A02BFD8:
	// rlwinm r10,r10,4,20,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFF0;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// or r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 | ctx.r9.u64;
	// clrlwi r22,r8,24
	ctx.r22.u64 = ctx.r8.u32 & 0xFF;
	// stb r22,132(r1)
	REX_STORE_U8(ctx.r1.u32 + 132, ctx.r22.u8);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// bne cr6,0x8a02c270
	if (!ctx.cr6.eq) goto loc_8A02C270;
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// lbzx r22,r11,r24
	ctx.r22.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r24.u32);
	// stb r22,132(r1)
	REX_STORE_U8(ctx.r1.u32 + 132, ctx.r22.u8);
	// b 0x8a02c270
	goto loc_8A02C270;
loc_8A02C004:
	// rlwinm r11,r8,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8a02c06c
	if (ctx.cr6.eq) goto loc_8A02C06C;
	// clrlwi r10,r19,28
	ctx.r10.u64 = ctx.r19.u32 & 0xF;
	// rlwinm r11,r19,28,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 28) & 0xF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// bne cr6,0x8a02c048
	if (!ctx.cr6.eq) goto loc_8A02C048;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r9,r11,-10
	ctx.r9.s64 = ctx.r11.s64 + -10;
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 & ctx.r11.u64;
loc_8A02C048:
	// rlwinm r11,r11,4,20,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFF0;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// or r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// addi r10,r11,-36
	ctx.r10.s64 = ctx.r11.s64 + -36;
	// subfic r7,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r7.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r19,r5,r11
	ctx.r19.u64 = ctx.r5.u64 & ctx.r11.u64;
	// stb r19,130(r1)
	REX_STORE_U8(ctx.r1.u32 + 130, ctx.r19.u8);
loc_8A02C06C:
	// rlwinm r11,r8,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8a02c270
	if (ctx.cr6.eq) goto loc_8A02C270;
	// clrlwi r11,r19,28
	ctx.r11.u64 = ctx.r19.u32 & 0xF;
	// rlwinm r10,r19,28,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 28) & 0xF;
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x8a02c0ac
	if (!ctx.cr6.eq) goto loc_8A02C0AC;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// bne cr6,0x8a02c0a8
	if (!ctx.cr6.eq) goto loc_8A02C0A8;
	// li r10,9
	ctx.r10.s64 = 9;
loc_8A02C0A8:
	// li r11,9
	ctx.r11.s64 = 9;
loc_8A02C0AC:
	// rlwinm r10,r10,4,20,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFF0;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// or r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 | ctx.r9.u64;
	// clrlwi r19,r8,24
	ctx.r19.u64 = ctx.r8.u32 & 0xFF;
	// stb r19,130(r1)
	REX_STORE_U8(ctx.r1.u32 + 130, ctx.r19.u8);
	// cmplwi cr6,r19,153
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 153, ctx.xer);
	// bne cr6,0x8a02c270
	if (!ctx.cr6.eq) goto loc_8A02C270;
	// li r19,35
	ctx.r19.s64 = 35;
	// stb r19,130(r1)
	REX_STORE_U8(ctx.r1.u32 + 130, ctx.r19.u8);
	// b 0x8a02c270
	goto loc_8A02C270;
loc_8A02C0D4:
	// rlwinm r11,r8,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8a02c13c
	if (ctx.cr6.eq) goto loc_8A02C13C;
	// clrlwi r10,r20,28
	ctx.r10.u64 = ctx.r20.u32 & 0xF;
	// rlwinm r11,r20,28,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 28) & 0xF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// bne cr6,0x8a02c118
	if (!ctx.cr6.eq) goto loc_8A02C118;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r9,r11,-10
	ctx.r9.s64 = ctx.r11.s64 + -10;
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 & ctx.r11.u64;
loc_8A02C118:
	// rlwinm r11,r11,4,20,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFF0;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// or r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// addi r10,r11,-96
	ctx.r10.s64 = ctx.r11.s64 + -96;
	// subfic r7,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r7.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r20,r5,r11
	ctx.r20.u64 = ctx.r5.u64 & ctx.r11.u64;
	// stb r20,129(r1)
	REX_STORE_U8(ctx.r1.u32 + 129, ctx.r20.u8);
loc_8A02C13C:
	// rlwinm r11,r8,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8a02c270
	if (ctx.cr6.eq) goto loc_8A02C270;
	// clrlwi r11,r20,28
	ctx.r11.u64 = ctx.r20.u32 & 0xF;
	// rlwinm r10,r20,28,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 28) & 0xF;
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x8a02c17c
	if (!ctx.cr6.eq) goto loc_8A02C17C;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// bne cr6,0x8a02c178
	if (!ctx.cr6.eq) goto loc_8A02C178;
	// li r10,9
	ctx.r10.s64 = 9;
loc_8A02C178:
	// li r11,9
	ctx.r11.s64 = 9;
loc_8A02C17C:
	// rlwinm r10,r10,4,20,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFF0;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// or r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 | ctx.r9.u64;
	// clrlwi r20,r8,24
	ctx.r20.u64 = ctx.r8.u32 & 0xFF;
	// stb r20,129(r1)
	REX_STORE_U8(ctx.r1.u32 + 129, ctx.r20.u8);
	// cmplwi cr6,r20,153
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 153, ctx.xer);
	// bne cr6,0x8a02c270
	if (!ctx.cr6.eq) goto loc_8A02C270;
	// li r20,89
	ctx.r20.s64 = 89;
	// stb r20,129(r1)
	REX_STORE_U8(ctx.r1.u32 + 129, ctx.r20.u8);
	// b 0x8a02c270
	goto loc_8A02C270;
loc_8A02C1A4:
	// rlwinm r11,r8,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8a02c20c
	if (ctx.cr6.eq) goto loc_8A02C20C;
	// clrlwi r10,r21,28
	ctx.r10.u64 = ctx.r21.u32 & 0xF;
	// rlwinm r11,r21,28,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 28) & 0xF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// bne cr6,0x8a02c1e8
	if (!ctx.cr6.eq) goto loc_8A02C1E8;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r9,r11,-10
	ctx.r9.s64 = ctx.r11.s64 + -10;
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 & ctx.r11.u64;
loc_8A02C1E8:
	// rlwinm r11,r11,4,20,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFF0;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// or r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// addi r10,r11,-96
	ctx.r10.s64 = ctx.r11.s64 + -96;
	// subfic r7,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r7.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r21,r5,r11
	ctx.r21.u64 = ctx.r5.u64 & ctx.r11.u64;
	// stb r21,128(r1)
	REX_STORE_U8(ctx.r1.u32 + 128, ctx.r21.u8);
loc_8A02C20C:
	// rlwinm r11,r8,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8a02c270
	if (ctx.cr6.eq) goto loc_8A02C270;
	// clrlwi r11,r21,28
	ctx.r11.u64 = ctx.r21.u32 & 0xF;
	// rlwinm r10,r21,28,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 28) & 0xF;
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x8a02c24c
	if (!ctx.cr6.eq) goto loc_8A02C24C;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// bne cr6,0x8a02c248
	if (!ctx.cr6.eq) goto loc_8A02C248;
	// li r10,9
	ctx.r10.s64 = 9;
loc_8A02C248:
	// li r11,9
	ctx.r11.s64 = 9;
loc_8A02C24C:
	// rlwinm r10,r10,4,20,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFF0;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// or r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 | ctx.r9.u64;
	// clrlwi r21,r8,24
	ctx.r21.u64 = ctx.r8.u32 & 0xFF;
	// stb r21,128(r1)
	REX_STORE_U8(ctx.r1.u32 + 128, ctx.r21.u8);
	// cmplwi cr6,r21,153
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 153, ctx.xer);
	// bne cr6,0x8a02c270
	if (!ctx.cr6.eq) goto loc_8A02C270;
	// li r21,89
	ctx.r21.s64 = 89;
	// stb r21,128(r1)
	REX_STORE_U8(ctx.r1.u32 + 128, ctx.r21.u8);
loc_8A02C270:
	// cmpwi cr6,r28,6
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 6, ctx.xer);
	// beq cr6,0x8a02c284
	if (ctx.cr6.eq) goto loc_8A02C284;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// b 0x8a02c294
	goto loc_8A02C294;
loc_8A02C284:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x8a02bae8
	ctx.lr = 0x8A02C290;
	sub_8A02BAE8(ctx, base);
	// stb r3,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r3.u8);
loc_8A02C294:
	// rlwinm r9,r28,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r11,-10012(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + -10012);
	// addi r7,r17,20
	ctx.r7.s64 = ctx.r17.s64 + 20;
	// addi r8,r30,16
	ctx.r8.s64 = ctx.r30.s64 + 16;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r10,r31,-10012
	ctx.r10.s64 = ctx.r31.s64 + -10012;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lbzx r6,r9,r7
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r7.u32);
	// extsb r9,r6
	ctx.r9.s64 = ctx.r6.s8;
	// stw r9,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// rlwinm r9,r9,7,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFFFFFF80;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// beq cr6,0x8a02c2e4
	if (ctx.cr6.eq) goto loc_8A02C2E4;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
loc_8A02C2CC:
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// add r7,r11,r15
	ctx.r7.u64 = ctx.r11.u64 + ctx.r15.u64;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// stwu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r9.u32 = ea;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8a02c2cc
	if (!ctx.cr6.eq) goto loc_8A02C2CC;
loc_8A02C2E4:
	// rlwinm r7,r18,30,26,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 30) & 0x3C;
	// lbz r8,2(r16)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r16.u32 + 2);
	// rlwinm r3,r23,30,26,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 30) & 0x3C;
	// lbz r11,6(r16)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r16.u32 + 6);
	// rlwinm r28,r23,2,26,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0x3C;
	// lbz r10,5(r16)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r16.u32 + 5);
	// rlwinm r4,r8,30,2,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFC;
	// lbz r9,4(r16)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r16.u32 + 4);
	// rlwinm r27,r22,30,26,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 30) & 0x3C;
	// lwz r14,108(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwzx r6,r7,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// rlwinm r26,r22,2,26,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0x3C;
	// rlwinm r7,r19,30,26,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 30) & 0x3C;
	// stw r4,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// lwzx r4,r3,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// rlwinm r22,r21,30,26,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 30) & 0x3C;
	// lwzx r3,r28,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// rlwinm r21,r21,2,26,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0x3C;
	// lwzx r28,r27,r31
	ctx.r28.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// rlwinm r5,r18,2,26,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0x3C;
	// lwzx r27,r26,r31
	ctx.r27.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r31.u32);
	// rlwinm r24,r20,30,26,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 30) & 0x3C;
	// lwzx r26,r7,r31
	ctx.r26.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// rlwinm r7,r11,30,2,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFC;
	// rlwinm r11,r11,2,26,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3C;
	// stw r6,3136(r30)
	REX_STORE_U32(ctx.r30.u32 + 3136, ctx.r6.u32);
	// rlwinm r23,r20,2,26,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0x3C;
	// stw r4,2880(r30)
	REX_STORE_U32(ctx.r30.u32 + 2880, ctx.r4.u32);
	// rlwinm r20,r10,30,2,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFC;
	// lwzx r5,r5,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// rlwinm r18,r10,2,26,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3C;
	// lwzx r10,r22,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r31.u32);
	// lwzx r22,r21,r31
	ctx.r22.u64 = REX_LOAD_U32(ctx.r21.u32 + ctx.r31.u32);
	// rlwinm r17,r9,30,2,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFC;
	// lwzx r21,r11,r31
	ctx.r21.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r15,r9,2,26,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3C;
	// lwzx r9,r7,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// stb r11,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// rlwinm r8,r8,2,26,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x3C;
	// lwzx r7,r18,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r18.u32 + ctx.r31.u32);
	// rlwinm r25,r19,2,26,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0x3C;
	// lwzx r17,r17,r31
	ctx.r17.u64 = REX_LOAD_U32(ctx.r17.u32 + ctx.r31.u32);
	// li r18,1
	ctx.r18.s64 = 1;
	// stw r8,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// lwzx r15,r15,r31
	ctx.r15.u64 = REX_LOAD_U32(ctx.r15.u32 + ctx.r31.u32);
	// lbz r11,0(r16)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r16.u32 + 0);
	// lwzx r25,r25,r31
	ctx.r25.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r31.u32);
	// stw r17,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r17.u32);
	// li r17,1
	ctx.r17.s64 = 1;
	// lwzx r19,r20,r31
	ctx.r19.u64 = REX_LOAD_U32(ctx.r20.u32 + ctx.r31.u32);
	// li r20,1
	ctx.r20.s64 = 1;
	// stw r15,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r15.u32);
	// li r15,1
	ctx.r15.s64 = 1;
	// lwzx r24,r24,r31
	ctx.r24.u64 = REX_LOAD_U32(ctx.r24.u32 + ctx.r31.u32);
	// std r15,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r15.u64);
	// lwz r15,112(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r7,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// lbz r7,1(r16)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r16.u32 + 1);
	// li r16,1
	ctx.r16.s64 = 1;
	// lwzx r23,r23,r31
	ctx.r23.u64 = REX_LOAD_U32(ctx.r23.u32 + ctx.r31.u32);
	// stw r5,3140(r30)
	REX_STORE_U32(ctx.r30.u32 + 3140, ctx.r5.u32);
	// stw r3,2884(r30)
	REX_STORE_U32(ctx.r30.u32 + 2884, ctx.r3.u32);
	// stw r28,2624(r30)
	REX_STORE_U32(ctx.r30.u32 + 2624, ctx.r28.u32);
	// stw r27,2628(r30)
	REX_STORE_U32(ctx.r30.u32 + 2628, ctx.r27.u32);
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// stw r26,2368(r30)
	REX_STORE_U32(ctx.r30.u32 + 2368, ctx.r26.u32);
	// stw r25,2372(r30)
	REX_STORE_U32(ctx.r30.u32 + 2372, ctx.r25.u32);
	// stbx r8,r14,r29
	REX_STORE_U8(ctx.r14.u32 + ctx.r29.u32, ctx.r8.u8);
	// rlwinm r8,r7,30,2,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFC;
	// lwz r14,112(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r7,r7,2,26,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3C;
	// stw r14,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r14.u32);
	// lwzx r14,r15,r31
	ctx.r14.u64 = REX_LOAD_U32(ctx.r15.u32 + ctx.r31.u32);
	// rlwinm r15,r11,30,2,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFC;
	// rlwinm r11,r11,2,26,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3C;
	// std r14,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r14.u64);
	// lwz r14,108(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// stw r14,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r14.u32);
	// lwz r14,116(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stw r14,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r14.u32);
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,3632(r30)
	REX_STORE_U32(ctx.r30.u32 + 3632, ctx.r9.u32);
	// rotlwi r27,r14,0
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r14.u32, 0);
	// stb r11,16(r29)
	REX_STORE_U8(ctx.r29.u32 + 16, ctx.r11.u8);
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// li r3,8
	ctx.r3.s64 = 8;
	// lwzx r9,r8,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// lwzx r8,r7,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// lwzx r7,r15,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r15.u32 + ctx.r31.u32);
	// lwz r5,112(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r28,108(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// ld r15,136(r1)
	ctx.r15.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// ld r14,144(r1)
	ctx.r14.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// stw r10,1856(r30)
	REX_STORE_U32(ctx.r30.u32 + 1856, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r24,2112(r30)
	REX_STORE_U32(ctx.r30.u32 + 2112, ctx.r24.u32);
	// stw r23,2116(r30)
	REX_STORE_U32(ctx.r30.u32 + 2116, ctx.r23.u32);
	// stw r22,1860(r30)
	REX_STORE_U32(ctx.r30.u32 + 1860, ctx.r22.u32);
	// stw r21,3636(r30)
	REX_STORE_U32(ctx.r30.u32 + 3636, ctx.r21.u32);
	// stb r20,24(r29)
	REX_STORE_U8(ctx.r29.u32 + 24, ctx.r20.u8);
	// stw r19,3644(r30)
	REX_STORE_U32(ctx.r30.u32 + 3644, ctx.r19.u32);
	// stb r18,22(r29)
	REX_STORE_U8(ctx.r29.u32 + 22, ctx.r18.u8);
	// lwz r6,116(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stb r17,20(r29)
	REX_STORE_U8(ctx.r29.u32 + 20, ctx.r17.u8);
	// stb r16,18(r29)
	REX_STORE_U8(ctx.r29.u32 + 18, ctx.r16.u8);
	// stb r15,14(r29)
	REX_STORE_U8(ctx.r29.u32 + 14, ctx.r15.u8);
	// stw r14,3668(r30)
	REX_STORE_U32(ctx.r30.u32 + 3668, ctx.r14.u32);
	// lwzx r6,r6,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// stw r5,3648(r30)
	REX_STORE_U32(ctx.r30.u32 + 3648, ctx.r5.u32);
	// stw r28,3656(r30)
	REX_STORE_U32(ctx.r30.u32 + 3656, ctx.r28.u32);
	// stw r27,3660(r30)
	REX_STORE_U32(ctx.r30.u32 + 3660, ctx.r27.u32);
	// stw r11,3672(r30)
	REX_STORE_U32(ctx.r30.u32 + 3672, ctx.r11.u32);
	// stb r10,28(r29)
	REX_STORE_U8(ctx.r29.u32 + 28, ctx.r10.u8);
	// stw r9,3680(r30)
	REX_STORE_U32(ctx.r30.u32 + 3680, ctx.r9.u32);
	// stw r8,3684(r30)
	REX_STORE_U32(ctx.r30.u32 + 3684, ctx.r8.u32);
	// stw r7,3692(r30)
	REX_STORE_U32(ctx.r30.u32 + 3692, ctx.r7.u32);
	// stw r6,3696(r30)
	REX_STORE_U32(ctx.r30.u32 + 3696, ctx.r6.u32);
	// bl 0x8a0114b8
	ctx.lr = 0x8A02C4CC;
	sub_8A0114B8(ctx, base);
	// bl 0x8a012760
	ctx.lr = 0x8A02C4D0;
	sub_8A012760(ctx, base);
	// lis r11,-30137
	ctx.r11.s64 = -1975058432;
	// lbz r11,11928(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 11928);
	// rlwinm r4,r11,0,0,24
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8a02bcc0
	if (ctx.cr6.eq) goto loc_8A02BCC0;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x8a0c2360
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8A037578) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8a0c2310
	ctx.lr = 0x8A037580;
	__savegprlr_14(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30103
	ctx.r11.s64 = -1972830208;
	// sth r3,342(r1)
	REX_STORE_U16(ctx.r1.u32 + 342, ctx.r3.u16);
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// addi r11,r11,-31664
	ctx.r11.s64 = ctx.r11.s64 + -31664;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r10,r11,22
	ctx.r10.s64 = ctx.r11.s64 + 22;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lbzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 15, ctx.xer);
	// beq cr6,0x8a0375c8
	if (ctx.cr6.eq) goto loc_8A0375C8;
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// lbzx r10,r9,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8a0375c8
	if (!ctx.cr6.eq) goto loc_8A0375C8;
loc_8A0375BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x8a0c2360
	__restgprlr_14(ctx, base);
	return;
loc_8A0375C8:
	// lis r10,-30160
	ctx.r10.s64 = -1976565760;
	// mulli r31,r9,696
	ctx.r31.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(696));
	// addi r28,r10,27472
	ctx.r28.s64 = ctx.r10.s64 + 27472;
	// lis r11,-30185
	ctx.r11.s64 = -1978204160;
	// addi r29,r28,4
	ctx.r29.s64 = ctx.r28.s64 + 4;
	// addi r10,r11,26900
	ctx.r10.s64 = ctx.r11.s64 + 26900;
	// li r11,8
	ctx.r11.s64 = 8;
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// lis r8,16
	ctx.r8.s64 = 1048576;
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// lwzx r30,r31,r29
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// lis r7,17
	ctx.r7.s64 = 1114112;
	// lis r6,18
	ctx.r6.s64 = 1179648;
	// stb r9,96(r1)
	REX_STORE_U8(ctx.r1.u32 + 96, ctx.r9.u8);
	// rlwinm r5,r30,0,30,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	// stw r8,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// lis r4,19
	ctx.r4.s64 = 1245184;
	// stb r11,108(r1)
	REX_STORE_U8(ctx.r1.u32 + 108, ctx.r11.u8);
	// lis r3,24
	ctx.r3.s64 = 1572864;
	// stw r7,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// stb r11,120(r1)
	REX_STORE_U8(ctx.r1.u32 + 120, ctx.r11.u8);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r10,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// stw r6,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r6.u32);
	// stb r11,132(r1)
	REX_STORE_U8(ctx.r1.u32 + 132, ctx.r11.u8);
	// stw r10,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// stw r4,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// stb r11,144(r1)
	REX_STORE_U8(ctx.r1.u32 + 144, ctx.r11.u8);
	// stw r10,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// stw r3,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r3.u32);
	// bne cr6,0x8a037668
	if (!ctx.cr6.eq) goto loc_8A037668;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8a014a58
	ctx.lr = 0x8A037654;
	sub_8A014A58(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8a0375bc
	if (ctx.cr6.eq) goto loc_8A0375BC;
	// ori r11,r30,2
	ctx.r11.u64 = ctx.r30.u64 | 2;
	// stwx r11,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u32);
loc_8A037668:
	// addi r11,r28,637
	ctx.r11.s64 = ctx.r28.s64 + 637;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lbzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r10,r11,r9
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r26,r11,r8
	ctx.r26.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// extsb r19,r10
	ctx.r19.s64 = ctx.r10.s8;
	// lwzx r27,r11,r7
	ctx.r27.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// rlwinm r9,r19,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r18,r19
	ctx.r18.u64 = ctx.r19.u64;
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// bl 0x8a013a40
	ctx.lr = 0x8A0376B4;
	sub_8A013A40(ctx, base);
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8a0375bc
	if (ctx.cr6.eq) goto loc_8A0375BC;
	// lis r11,-30160
	ctx.r11.s64 = -1976565760;
	// lis r20,-30137
	ctx.r20.s64 = -1975058432;
	// addi r11,r11,5704
	ctx.r11.s64 = ctx.r11.s64 + 5704;
	// lis r9,16838
	ctx.r9.s64 = 1103495168;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
	// lis r11,-30210
	ctx.r11.s64 = -1979842560;
	// lis r8,128
	ctx.r8.s64 = 8388608;
	// addi r10,r26,-4
	ctx.r10.s64 = ctx.r26.s64 + -4;
	// ori r3,r9,20077
	ctx.r3.u64 = ctx.r9.u64 | 20077;
	// lwz r9,-916(r20)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r20.u32 + -916);
	// addi r21,r28,28
	ctx.r21.s64 = ctx.r28.s64 + 28;
	// li r7,0
	ctx.r7.s64 = 0;
	// srawi r29,r27,4
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0xF) != 0);
	ctx.r29.s64 = ctx.r27.s32 >> 4;
	// lis r22,-16384
	ctx.r22.s64 = -1073741824;
	// li r23,1
	ctx.r23.s64 = 1;
	// li r24,512
	ctx.r24.s64 = 512;
	// li r25,255
	ctx.r25.s64 = 255;
	// li r26,128
	ctx.r26.s64 = 128;
	// ori r4,r8,32896
	ctx.r4.u64 = ctx.r8.u64 | 32896;
	// addi r6,r11,9016
	ctx.r6.s64 = ctx.r11.s64 + 9016;
loc_8A037710:
	// lwzu r11,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// mullw r9,r9,r3
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r3.s32);
	// stw r22,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r22.u32);
	// stw r23,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// addi r9,r9,12345
	ctx.r9.s64 = ctx.r9.s64 + 12345;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// addi r5,r8,1
	ctx.r5.s64 = ctx.r8.s64 + 1;
	// srawi r8,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 16;
	// extsh r7,r5
	ctx.r7.s64 = ctx.r5.s16;
	// rlwinm r8,r8,19,30,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 19) & 0x3;
	// addi r17,r28,24
	ctx.r17.s64 = ctx.r28.s64 + 24;
	// addi r5,r8,4
	ctx.r5.s64 = ctx.r8.s64 + 4;
	// clrlwi r16,r7,16
	ctx.r16.u64 = ctx.r7.u32 & 0xFFFF;
	// stw r5,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// lhz r5,8(r10)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + 8);
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// addi r15,r8,4
	ctx.r15.s64 = ctx.r8.s64 + 4;
	// sth r5,124(r11)
	REX_STORE_U16(ctx.r11.u32 + 124, ctx.r5.u16);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// stw r27,116(r11)
	REX_STORE_U32(ctx.r11.u32 + 116, ctx.r27.u32);
	// srawi r15,r15,3
	ctx.xer.ca = (ctx.r15.s32 < 0) & ((ctx.r15.u32 & 0x7) != 0);
	ctx.r15.s64 = ctx.r15.s32 >> 3;
	// rlwinm r14,r8,1,22,30
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x3FE;
	// clrlwi r8,r15,26
	ctx.r8.u64 = ctx.r15.u32 & 0x3F;
	// rlwinm r15,r5,1,22,30
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x3FE;
	// stw r8,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// cmplwi cr6,r16,2
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 2, ctx.xer);
	// lwzx r5,r31,r17
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r17.u32);
	// lhz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// rotlwi r8,r8,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// add r5,r8,r5
	ctx.r5.u64 = ctx.r8.u64 + ctx.r5.u64;
	// stw r5,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r5.u32);
	// lwzx r5,r31,r21
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r21.u32);
	// lhzu r8,6(r10)
	ea = 6 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// rotlwi r8,r8,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// stw r8,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// lhzx r5,r14,r6
	ctx.r5.u64 = REX_LOAD_U16(ctx.r14.u32 + ctx.r6.u32);
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// mullw r5,r8,r29
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r29.s32);
	// srawi r8,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r5.s32 >> 8;
	// stw r8,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r8.u32);
	// lhzx r5,r15,r6
	ctx.r5.u64 = REX_LOAD_U16(ctx.r15.u32 + ctx.r6.u32);
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// mullw r5,r8,r29
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r29.s32);
	// sth r24,36(r11)
	REX_STORE_U16(ctx.r11.u32 + 36, ctx.r24.u16);
	// stb r25,38(r11)
	REX_STORE_U8(ctx.r11.u32 + 38, ctx.r25.u8);
	// stb r26,39(r11)
	REX_STORE_U8(ctx.r11.u32 + 39, ctx.r26.u8);
	// stw r4,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r4.u32);
	// srawi r8,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r5.s32 >> 8;
	// stw r8,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r8.u32);
	// blt cr6,0x8a037710
	if (ctx.cr6.lt) goto loc_8A037710;
	// stw r9,-916(r20)
	REX_STORE_U32(ctx.r20.u32 + -916, ctx.r9.u32);
	// li r4,50
	ctx.r4.s64 = 50;
	// lhz r30,342(r1)
	ctx.r30.u64 = REX_LOAD_U16(ctx.r1.u32 + 342);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8a0174c0
	ctx.lr = 0x8A0377F4;
	sub_8A0174C0(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// extsh r11,r30
	ctx.r11.s64 = ctx.r30.s16;
	// lbzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// addi r11,r28,636
	ctx.r11.s64 = ctx.r28.s64 + 636;
	// cmplwi cr6,r9,15
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 15, ctx.xer);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bne cr6,0x8a03781c
	if (!ctx.cr6.eq) goto loc_8A03781C;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// b 0x8a037820
	goto loc_8A037820;
loc_8A03781C:
	// stb r23,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r23.u8);
loc_8A037820:
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8a03784c
	if (ctx.cr6.eq) goto loc_8A03784C;
	// addi r11,r18,24
	ctx.r11.s64 = ctx.r18.s64 + 24;
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// bl 0x8a034788
	ctx.lr = 0x8A037840;
	sub_8A034788(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x8a0c2360
	__restgprlr_14(ctx, base);
	return;
loc_8A03784C:
	// addi r11,r18,16
	ctx.r11.s64 = ctx.r18.s64 + 16;
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// bl 0x8a036330
	ctx.lr = 0x8A037858;
	sub_8A036330(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x8a0c2360
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8A039090) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8a0c234c
	ctx.lr = 0x8A039098;
	__savegprlr_29(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30117
	ctx.r11.s64 = -1973747712;
	// li r31,6
	ctx.r31.s64 = 6;
	// addi r30,r11,-1160
	ctx.r30.s64 = ctx.r11.s64 + -1160;
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
	// bl 0x8a015b08
	ctx.lr = 0x8A0390D8;
	sub_8A015B08(ctx, base);
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
	// bl 0x8a016560
	ctx.lr = 0x8A039108;
	sub_8A016560(ctx, base);
	// lis r11,-30193
	ctx.r11.s64 = -1978728448;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r11,-19836
	ctx.r29.s64 = ctx.r11.s64 + -19836;
loc_8A039114:
	// rlwinm r6,r31,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,0
	ctx.r9.s64 = 0;
loc_8A03911C:
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r6,r9
	ctx.r10.u64 = ctx.r6.u64 + ctx.r9.u64;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// addi r9,r30,-648
	ctx.r9.s64 = ctx.r30.s64 + -648;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r5,8(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// lhz r4,10(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lhz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// lhz r11,14(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// sth r5,8(r10)
	REX_STORE_U16(ctx.r10.u32 + 8, ctx.r5.u16);
	// sth r4,10(r10)
	REX_STORE_U16(ctx.r10.u32 + 10, ctx.r4.u16);
	// sth r3,12(r10)
	REX_STORE_U16(ctx.r10.u32 + 12, ctx.r3.u16);
	// sth r11,14(r10)
	REX_STORE_U16(ctx.r10.u32 + 14, ctx.r11.u16);
	// blt cr6,0x8a03911c
	if (ctx.cr6.lt) goto loc_8A03911C;
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
	// bl 0x8a0168b8
	ctx.lr = 0x8A0391B8;
	sub_8A0168B8(ctx, base);
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 9, ctx.xer);
	// blt cr6,0x8a039114
	if (ctx.cr6.lt) goto loc_8A039114;
	// lis r11,-30193
	ctx.r11.s64 = -1978728448;
	// addi r3,r30,560
	ctx.r3.s64 = ctx.r30.s64 + 560;
	// addi r4,r11,-19140
	ctx.r4.s64 = ctx.r11.s64 + -19140;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r4,20
	ctx.r5.s64 = ctx.r4.s64 + 20;
	// bl 0x8a038d08
	ctx.lr = 0x8A0391E4;
	sub_8A038D08(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x8a0c239c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8A03A7B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8a0c234c
	ctx.lr = 0x8A03A7C0;
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
	// bl 0x8a03a508
	ctx.lr = 0x8A03A7D4;
	sub_8A03A508(ctx, base);
	// lbz r11,74(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 74);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stb r10,74(r31)
	REX_STORE_U8(ctx.r31.u32 + 74, ctx.r10.u8);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x8a03a804
	if (!ctx.cr6.gt) goto loc_8A03A804;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stb r10,74(r31)
	REX_STORE_U8(ctx.r31.u32 + 74, ctx.r10.u8);
	// clrlwi r8,r9,30
	ctx.r8.u64 = ctx.r9.u32 & 0x3;
	// stw r8,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
loc_8A03A804:
	// lbz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8a03a8ec
	if (!ctx.cr6.eq) goto loc_8A03A8EC;
	// lis r11,-30160
	ctx.r11.s64 = -1976565760;
	// extsh r10,r30
	ctx.r10.s64 = ctx.r30.s16;
	// addi r11,r11,27472
	ctx.r11.s64 = ctx.r11.s64 + 27472;
	// mulli r9,r10,696
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(696));
	// addi r8,r11,651
	ctx.r8.s64 = ctx.r11.s64 + 651;
	// lbzx r11,r9,r8
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8a03a8a8
	if (ctx.cr6.lt) goto loc_8A03A8A8;
	// beq cr6,0x8a03a874
	if (ctx.cr6.eq) goto loc_8A03A874;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x8a03a8ec
	if (!ctx.cr6.eq) goto loc_8A03A8EC;
	// lis r11,-30160
	ctx.r11.s64 = -1976565760;
	// lis r10,26214
	ctx.r10.s64 = 1717960704;
	// ori r9,r10,26215
	ctx.r9.u64 = ctx.r10.u64 | 26215;
	// lwz r11,29276(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 29276);
	// mulhw r8,r11,r9
	ctx.r8.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32)) >> 32;
	// srawi r10,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 1;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf. r6,r7,r11
	ctx.r6.u64 = ctx.r11.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x8a03a8ec
	if (!ctx.cr0.eq) goto loc_8A03A8EC;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x8a03a8dc
	goto loc_8A03A8DC;
loc_8A03A874:
	// lis r11,-30160
	ctx.r11.s64 = -1976565760;
	// lis r10,21845
	ctx.r10.s64 = 1431633920;
	// ori r9,r10,21846
	ctx.r9.u64 = ctx.r10.u64 | 21846;
	// lwz r11,29276(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 29276);
	// mulhw r10,r11,r9
	ctx.r10.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32)) >> 32;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf. r7,r8,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x8a03a8ec
	if (!ctx.cr0.eq) goto loc_8A03A8EC;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x8a03a8dc
	goto loc_8A03A8DC;
loc_8A03A8A8:
	// lis r11,-30160
	ctx.r11.s64 = -1976565760;
	// lwz r11,29276(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 29276);
	// srawi r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf. r7,r8,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x8a03a8ec
	if (!ctx.cr0.eq) goto loc_8A03A8EC;
	// lis r6,4
	ctx.r6.s64 = 262144;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8a03ad80
	ctx.lr = 0x8A03A8D8;
	sub_8A03AD80(ctx, base);
	// lis r6,-4
	ctx.r6.s64 = -262144;
loc_8A03A8DC:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8a03ad80
	ctx.lr = 0x8A03A8EC;
	sub_8A03AD80(ctx, base);
loc_8A03A8EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8a0c239c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8A03B650) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8a0c2314
	ctx.lr = 0x8A03B658;
	__savegprlr_15(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30103
	ctx.r11.s64 = -1972830208;
	// extsh r30,r3
	ctx.r30.s64 = ctx.r3.s16;
	// addi r11,r11,-31664
	ctx.r11.s64 = ctx.r11.s64 + -31664;
	// li r16,1
	ctx.r16.s64 = 1;
	// addi r10,r11,76
	ctx.r10.s64 = ctx.r11.s64 + 76;
	// addi r9,r11,45
	ctx.r9.s64 = ctx.r11.s64 + 45;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stbx r16,r30,r10
	REX_STORE_U8(ctx.r30.u32 + ctx.r10.u32, ctx.r16.u8);
	// stbx r16,r30,r9
	REX_STORE_U8(ctx.r30.u32 + ctx.r9.u32, ctx.r16.u8);
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8a03b7fc
	if (ctx.cr6.lt) goto loc_8A03B7FC;
	// bne cr6,0x8a03b964
	if (!ctx.cr6.eq) goto loc_8A03B964;
	// lwz r11,72(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 72);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8a03b734
	if (ctx.cr6.eq) goto loc_8A03B734;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8a03b748
	if (ctx.cr6.eq) goto loc_8A03B748;
	// lhz r10,76(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 76);
	// lhz r9,76(r4)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r4.u32 + 76);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8a03b748
	if (!ctx.cr6.eq) goto loc_8A03B748;
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
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r6,r7,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r4,r9,r7
	ctx.r4.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r6,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r8,4(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r8,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// lwz r5,8(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// stw r5,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r5.u32);
	// lwz r4,4(r6)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// stw r4,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r4.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8a0c2364
	__restgprlr_15(ctx, base);
	return;
loc_8A03B734:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// beq cr6,0x8a03b758
	if (ctx.cr6.eq) goto loc_8A03B758;
	// cmplwi cr6,r11,23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 23, ctx.xer);
	// bne cr6,0x8a03b774
	if (!ctx.cr6.eq) goto loc_8A03B774;
loc_8A03B748:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8a0c2364
	__restgprlr_15(ctx, base);
	return;
loc_8A03B758:
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
	// bne cr6,0x8a03b77c
	if (!ctx.cr6.eq) goto loc_8A03B77C;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
loc_8A03B774:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x8a03b780
	goto loc_8A03B780;
loc_8A03B77C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8A03B780:
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
	// b 0x8a0c2364
	__restgprlr_15(ctx, base);
	return;
loc_8A03B7FC:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x8a03b884
	if (ctx.cr6.eq) goto loc_8A03B884;
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
	// lwz r4,4(r8)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// stw r4,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r4.u32);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,8(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// stw r3,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// lwz r11,4(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8a0c2364
	__restgprlr_15(ctx, base);
	return;
loc_8A03B884:
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x89ff95c0
	ctx.lr = 0x8A03B88C;
	sub_89FF95C0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8a03b964
	if (ctx.cr6.eq) goto loc_8A03B964;
	// lis r11,-30160
	ctx.r11.s64 = -1976565760;
	// lis r8,-30135
	ctx.r8.s64 = -1974927360;
	// addi r11,r11,27472
	ctx.r11.s64 = ctx.r11.s64 + 27472;
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r9,-30185
	ctx.r9.s64 = -1978204160;
	// lis r10,-30160
	ctx.r10.s64 = -1976565760;
	// mulli r18,r30,696
	ctx.r18.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(696));
	// lhz r26,20444(r8)
	ctx.r26.u64 = REX_LOAD_U16(ctx.r8.u32 + 20444);
	// addi r17,r11,28
	ctx.r17.s64 = ctx.r11.s64 + 28;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r19,-13296
	ctx.r19.s64 = -871366656;
	// li r20,6
	ctx.r20.s64 = 6;
	// li r21,10
	ctx.r21.s64 = 10;
	// li r22,519
	ctx.r22.s64 = 519;
	// li r23,176
	ctx.r23.s64 = 176;
	// li r24,96
	ctx.r24.s64 = 96;
	// li r25,7
	ctx.r25.s64 = 7;
	// addi r27,r9,29140
	ctx.r27.s64 = ctx.r9.s64 + 29140;
	// addi r29,r10,27408
	ctx.r29.s64 = ctx.r10.s64 + 27408;
loc_8A03B8E8:
	// lwzx r15,r11,r29
	ctx.r15.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// stw r19,0(r15)
	REX_STORE_U32(ctx.r15.u32 + 0, ctx.r19.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// sth r26,76(r15)
	REX_STORE_U16(ctx.r15.u32 + 76, ctx.r26.u16);
	// stw r11,72(r15)
	REX_STORE_U32(ctx.r15.u32 + 72, ctx.r11.u32);
	// stw r20,4(r15)
	REX_STORE_U32(ctx.r15.u32 + 4, ctx.r20.u32);
	// stw r16,8(r15)
	REX_STORE_U32(ctx.r15.u32 + 8, ctx.r16.u32);
	// stw r28,12(r15)
	REX_STORE_U32(ctx.r15.u32 + 12, ctx.r28.u32);
	// bl 0x89ff9218
	ctx.lr = 0x8A03B910;
	sub_89FF9218(ctx, base);
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r30,1
	ctx.r9.s64 = ctx.r30.s64 + 1;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// lhzx r7,r10,r27
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r27.u32);
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// rotlwi r6,r7,16
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 16);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r6,48(r15)
	REX_STORE_U32(ctx.r15.u32 + 48, ctx.r6.u32);
	// lwzx r5,r18,r17
	ctx.r5.u64 = REX_LOAD_U32(ctx.r18.u32 + ctx.r17.u32);
	// stw r5,52(r15)
	REX_STORE_U32(ctx.r15.u32 + 52, ctx.r5.u32);
	// lbz r4,96(r31)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r31.u32 + 96);
	// stb r4,96(r15)
	REX_STORE_U8(ctx.r15.u32 + 96, ctx.r4.u8);
	// stb r21,68(r15)
	REX_STORE_U8(ctx.r15.u32 + 68, ctx.r21.u8);
	// sth r22,64(r15)
	REX_STORE_U16(ctx.r15.u32 + 64, ctx.r22.u16);
	// stb r23,66(r15)
	REX_STORE_U8(ctx.r15.u32 + 66, ctx.r23.u8);
	// stb r24,67(r15)
	REX_STORE_U8(ctx.r15.u32 + 67, ctx.r24.u8);
	// stb r25,95(r15)
	REX_STORE_U8(ctx.r15.u32 + 95, ctx.r25.u8);
	// stb r28,94(r15)
	REX_STORE_U8(ctx.r15.u32 + 94, ctx.r28.u8);
	// blt cr6,0x8a03b8e8
	if (ctx.cr6.lt) goto loc_8A03B8E8;
	// stw r28,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_8A03B964:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8a0c2364
	__restgprlr_15(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8A03DAE0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8a0c2310
	ctx.lr = 0x8A03DAE8;
	__savegprlr_14(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30160
	ctx.r11.s64 = -1976565760;
	// li r20,0
	ctx.r20.s64 = 0;
	// addi r16,r11,27472
	ctx.r16.s64 = ctx.r11.s64 + 27472;
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
	// bgt cr6,0x8a03db78
	if (ctx.cr6.gt) goto loc_8A03DB78;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8a03dec0
	if (ctx.cr6.eq) goto loc_8A03DEC0;
	// bdz 0x8a03db38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8A03DB38;
	// bdz 0x8a03db40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8A03DB40;
	// b 0x8a03db4c
	goto loc_8A03DB4C;
loc_8A03DB38:
	// stb r20,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r20.u8);
	// b 0x8a03db78
	goto loc_8A03DB78;
loc_8A03DB40:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// b 0x8a03db78
	goto loc_8A03DB78;
loc_8A03DB4C:
	// lis r10,-30137
	ctx.r10.s64 = -1975058432;
	// lis r9,16838
	ctx.r9.s64 = 1103495168;
	// ori r8,r9,20077
	ctx.r8.u64 = ctx.r9.u64 | 20077;
	// lwz r11,-916(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -916);
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r11,-916(r10)
	REX_STORE_U32(ctx.r10.u32 + -916, ctx.r11.u32);
	// srawi r6,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 16;
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// stb r5,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r5.u8);
loc_8A03DB78:
	// lis r11,-30165
	ctx.r11.s64 = -1976893440;
	// lis r10,-30193
	ctx.r10.s64 = -1978728448;
	// addi r9,r10,-23288
	ctx.r9.s64 = ctx.r10.s64 + -23288;
	// lbz r11,10463(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 10463);
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
	// bl 0x8a0154b0
	ctx.lr = 0x8A03DBB0;
	sub_8A0154B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8a03dec0
	if (ctx.cr6.eq) goto loc_8A03DEC0;
	// li r3,19
	ctx.r3.s64 = 19;
	// bl 0x8a00cfb8
	ctx.lr = 0x8A03DBC0;
	sub_8A00CFB8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8a03dec0
	if (ctx.cr6.eq) goto loc_8A03DEC0;
	// lis r6,-30126
	ctx.r6.s64 = -1974337536;
	// lis r10,-30185
	ctx.r10.s64 = -1978204160;
	// lis r9,-30185
	ctx.r9.s64 = -1978204160;
	// addi r17,r10,29408
	ctx.r17.s64 = ctx.r10.s64 + 29408;
	// lis r10,-30193
	ctx.r10.s64 = -1978728448;
	// lwz r5,-13288(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + -13288);
	// lis r8,-30164
	ctx.r8.s64 = -1976827904;
	// lis r7,-30137
	ctx.r7.s64 = -1975058432;
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
	// addi r14,r9,29400
	ctx.r14.s64 = ctx.r9.s64 + 29400;
	// addi r30,r8,1528
	ctx.r30.s64 = ctx.r8.s64 + 1528;
	// addi r21,r7,3704
	ctx.r21.s64 = ctx.r7.s64 + 3704;
loc_8A03DC14:
	// extsh r22,r11
	ctx.r22.s64 = ctx.r11.s16;
	// lbz r11,1(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 1);
	// lwz r10,-4(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + -4);
	// addi r6,r30,104
	ctx.r6.s64 = ctx.r30.s64 + 104;
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
	// mulli r31,r25,116
	ctx.r31.s64 = static_cast<int64_t>(ctx.r25.u64 * static_cast<uint64_t>(116));
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
	// bl 0x8a00ca60
	ctx.lr = 0x8A03DC70;
	sub_8A00CA60(ctx, base);
	// addi r11,r28,-2
	ctx.r11.s64 = ctx.r28.s64 + -2;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bgt cr6,0x8a03dd54
	if (ctx.cr6.gt) goto loc_8A03DD54;
	// lis r12,-30204
	ctx.r12.s64 = -1979449344;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-9068
	ctx.r12.s64 = ctx.r12.s64 + -9068;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8A03DCC0;
	case 1:
		goto loc_8A03DCC0;
	case 2:
		goto loc_8A03DD54;
	case 3:
		goto loc_8A03DD54;
	case 4:
		goto loc_8A03DD54;
	case 5:
		goto loc_8A03DD54;
	case 6:
		goto loc_8A03DD54;
	case 7:
		goto loc_8A03DD54;
	case 8:
		goto loc_8A03DCF0;
	case 9:
		goto loc_8A03DD3C;
	case 10:
		goto loc_8A03DD24;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_8A03DCC0:
	// extsb r11,r26
	ctx.r11.s64 = ctx.r26.s8;
	// mulli r11,r11,696
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(696));
	// lwzx r10,r11,r16
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r16.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8a03dd1c
	if (ctx.cr6.eq) goto loc_8A03DD1C;
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
	// b 0x8a03dd54
	goto loc_8A03DD54;
loc_8A03DCF0:
	// extsb r11,r26
	ctx.r11.s64 = ctx.r26.s8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8a03dd54
	if (ctx.cr6.eq) goto loc_8A03DD54;
	// mulli r10,r11,696
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(696));
	// lwzx r9,r10,r16
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r16.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8a03dd1c
	if (ctx.cr6.eq) goto loc_8A03DD1C;
	// lbz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8a03dd54
	if (ctx.cr6.eq) goto loc_8A03DD54;
loc_8A03DD1C:
	// stwx r20,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r20.u32);
	// b 0x8a03dd54
	goto loc_8A03DD54;
loc_8A03DD24:
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
loc_8A03DD3C:
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
loc_8A03DD54:
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
	// bge cr6,0x8a03de1c
	if (!ctx.cr6.lt) goto loc_8A03DE1C;
	// extsh r11,r23
	ctx.r11.s64 = ctx.r23.s16;
	// lhz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r29.u32 + 4);
	// addi r9,r30,56
	ctx.r9.s64 = ctx.r30.s64 + 56;
	// lhz r8,6(r29)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r29.u32 + 6);
	// mulli r7,r11,116
	ctx.r7.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(116));
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
	// b 0x8a03de54
	goto loc_8A03DE54;
loc_8A03DE1C:
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
loc_8A03DE54:
	// lhz r9,8(r29)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r29.u32 + 8);
	// addi r11,r30,80
	ctx.r11.s64 = ctx.r30.s64 + 80;
	// addi r5,r30,98
	ctx.r5.s64 = ctx.r30.s64 + 98;
	// lhz r7,10(r29)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r29.u32 + 10);
	// addi r8,r22,1
	ctx.r8.s64 = ctx.r22.s64 + 1;
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r6,r30,92
	ctx.r6.s64 = ctx.r30.s64 + 92;
	// addi r4,r30,64
	ctx.r4.s64 = ctx.r30.s64 + 64;
	// addi r3,r30,44
	ctx.r3.s64 = ctx.r30.s64 + 44;
	// sthx r9,r31,r5
	REX_STORE_U16(ctx.r31.u32 + ctx.r5.u32, ctx.r9.u16);
	// addi r28,r30,84
	ctx.r28.s64 = ctx.r30.s64 + 84;
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
	// blt cr6,0x8a03dc14
	if (ctx.cr6.lt) goto loc_8A03DC14;
	// lis r10,-30137
	ctx.r10.s64 = -1975058432;
	// li r11,5940
	ctx.r11.s64 = 5940;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,-1768(r10)
	REX_STORE_U32(ctx.r10.u32 + -1768, ctx.r11.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8a0c2360
	__restgprlr_14(ctx, base);
	return;
loc_8A03DEC0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8a0c2360
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8A041F38) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8a0c2340
	ctx.lr = 0x8A041F40;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30164
	ctx.r11.s64 = -1976827904;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r30,r11,1528
	ctx.r30.s64 = ctx.r11.s64 + 1528;
	// mulli r31,r10,116
	ctx.r31.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(116));
	// addi r27,r30,8
	ctx.r27.s64 = ctx.r30.s64 + 8;
	// addi r26,r30,108
	ctx.r26.s64 = ctx.r30.s64 + 108;
	// lwzx r8,r31,r27
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// lhzx r7,r31,r26
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r26.u32);
	// cmplwi cr6,r8,3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 3, ctx.xer);
	// beq cr6,0x8a0422e0
	if (ctx.cr6.eq) goto loc_8A0422E0;
	// addi r11,r30,104
	ctx.r11.s64 = ctx.r30.s64 + 104;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mulli r11,r9,116
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(116));
	// lwzx r7,r11,r30
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8a041fa0
	if (ctx.cr6.eq) goto loc_8A041FA0;
	// addi r9,r30,106
	ctx.r9.s64 = ctx.r30.s64 + 106;
	// addi r7,r30,106
	ctx.r7.s64 = ctx.r30.s64 + 106;
	// lhzx r6,r11,r9
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// lhzx r5,r31,r7
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r7.u32);
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x8a041fa4
	if (ctx.cr6.eq) goto loc_8A041FA4;
loc_8A041FA0:
	// li r10,-1
	ctx.r10.s64 = -1;
loc_8A041FA4:
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8a04233c
	if (ctx.cr6.lt) goto loc_8A04233C;
	// addi r29,r30,4
	ctx.r29.s64 = ctx.r30.s64 + 4;
	// mulli r28,r11,116
	ctx.r28.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(116));
	// lwzx r10,r31,r29
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// addi r9,r30,4
	ctx.r9.s64 = ctx.r30.s64 + 4;
	// lwzx r11,r28,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r9.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8a04208c
	if (ctx.cr6.eq) goto loc_8A04208C;
	// stwx r11,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u32);
	// bl 0x8a041ec8
	ctx.lr = 0x8A041FD4;
	sub_8A041EC8(ctx, base);
	// lis r10,-30194
	ctx.r10.s64 = -1978793984;
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
	// beq cr6,0x8a042014
	if (ctx.cr6.eq) goto loc_8A042014;
	// rotlwi r8,r8,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// li r10,0
	ctx.r10.s64 = 0;
loc_8A041FF8:
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
	// bne cr6,0x8a041ff8
	if (!ctx.cr6.eq) goto loc_8A041FF8;
loc_8A042014:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lwzx r8,r31,r27
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// rlwinm r7,r11,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r10,-30095
	ctx.r10.s64 = -1972305920;
	// lwzx r11,r7,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lbz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stw r11,528(r10)
	REX_STORE_U32(ctx.r10.u32 + 528, ctx.r11.u32);
	// extsb r5,r6
	ctx.r5.s64 = ctx.r6.s8;
	// cmplw cr6,r5,r8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8a042058
	if (ctx.cr6.eq) goto loc_8A042058;
	// rotlwi r9,r8,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
loc_8A042044:
	// lbzu r7,10(r11)
	ea = 10 + ctx.r11.u32;
	ctx.r7.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// extsb r6,r7
	ctx.r6.s64 = ctx.r7.s8;
	// cmplw cr6,r6,r9
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8a042044
	if (!ctx.cr6.eq) goto loc_8A042044;
	// stw r11,528(r10)
	REX_STORE_U32(ctx.r10.u32 + 528, ctx.r11.u32);
loc_8A042058:
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
	// beq cr6,0x8a04208c
	if (ctx.cr6.eq) goto loc_8A04208C;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
loc_8A04208C:
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
	// bgt cr6,0x8a042174
	if (ctx.cr6.gt) goto loc_8A042174;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8a042174
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8A042174;
	// bdzf 4*cr6+eq,0x8a042174
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8A042174;
	// bdzf 4*cr6+eq,0x8a0421ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8A0421AC;
	// bdzf 4*cr6+eq,0x8a0421ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8A0421AC;
	// bdzf 4*cr6+eq,0x8a04224c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8A04224C;
	// bdzf 4*cr6+eq,0x8a04220c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8A04220C;
	// bne cr6,0x8a04220c
	if (!ctx.cr6.eq) goto loc_8A04220C;
	// addi r11,r30,115
	ctx.r11.s64 = ctx.r30.s64 + 115;
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
	// bne cr6,0x8a042174
	if (!ctx.cr6.eq) goto loc_8A042174;
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
loc_8A042174:
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
	// b 0x8a0c2390
	__restgprlr_26(ctx, base);
	return;
loc_8A0421AC:
	// addi r11,r30,98
	ctx.r11.s64 = ctx.r30.s64 + 98;
	// lis r10,-30210
	ctx.r10.s64 = -1979842560;
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
loc_8A04220C:
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
	// b 0x8a0c2390
	__restgprlr_26(ctx, base);
	return;
loc_8A04224C:
	// addi r11,r30,98
	ctx.r11.s64 = ctx.r30.s64 + 98;
	// lis r10,-30210
	ctx.r10.s64 = -1979842560;
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
	// b 0x8a0c2390
	__restgprlr_26(ctx, base);
	return;
loc_8A0422E0:
	// addi r10,r30,52
	ctx.r10.s64 = ctx.r30.s64 + 52;
	// lis r9,512
	ctx.r9.s64 = 33554432;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8a042304
	if (!ctx.cr6.lt) goto loc_8A042304;
	// addis r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 1048576;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8a0c2390
	__restgprlr_26(ctx, base);
	return;
loc_8A042304:
	// ble cr6,0x8a042318
	if (!ctx.cr6.gt) goto loc_8A042318;
	// addis r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -1048576;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8a0c2390
	__restgprlr_26(ctx, base);
	return;
loc_8A042318:
	// addi r10,r30,112
	ctx.r10.s64 = ctx.r30.s64 + 112;
	// lbzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8a042368
	if (ctx.cr6.lt) goto loc_8A042368;
	// bne cr6,0x8a0423d8
	if (!ctx.cr6.eq) goto loc_8A0423D8;
	// addi r10,r30,66
	ctx.r10.s64 = ctx.r30.s64 + 66;
	// lbzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x8a04234c
	if (!ctx.cr6.lt) goto loc_8A04234C;
loc_8A04233C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8a0c2390
	__restgprlr_26(ctx, base);
	return;
loc_8A04234C:
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
	// b 0x8a0c2390
	__restgprlr_26(ctx, base);
	return;
loc_8A042368:
	// lis r11,-30160
	ctx.r11.s64 = -1976565760;
	// extsh r8,r7
	ctx.r8.s64 = ctx.r7.s16;
	// lis r7,-30193
	ctx.r7.s64 = -1978728448;
	// addi r11,r11,27472
	ctx.r11.s64 = ctx.r11.s64 + 27472;
	// mulli r9,r8,696
	ctx.r9.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(696));
	// addi r6,r7,-17540
	ctx.r6.s64 = ctx.r7.s64 + -17540;
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
	// beq cr6,0x8a0423a8
	if (ctx.cr6.eq) goto loc_8A0423A8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stbx r11,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8a0c2390
	__restgprlr_26(ctx, base);
	return;
loc_8A0423A8:
	// addi r11,r11,651
	ctx.r11.s64 = ctx.r11.s64 + 651;
	// lis r8,-30194
	ctx.r8.s64 = -1978793984;
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
	// beq cr6,0x8a0423d8
	if (ctx.cr6.eq) goto loc_8A0423D8;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// bl 0x8a041ec8
	ctx.lr = 0x8A0423D8;
	sub_8A041EC8(ctx, base);
loc_8A0423D8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8a0c2390
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8A045390) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8a0c2324
	ctx.lr = 0x8A045398;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x8a00cfb8
	ctx.lr = 0x8A0453A4;
	sub_8A00CFB8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8a0453b4
	if (!ctx.cr6.eq) goto loc_8A0453B4;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8a0c2374
	__restgprlr_19(ctx, base);
	return;
loc_8A0453B4:
	// lis r11,-30137
	ctx.r11.s64 = -1975058432;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r11,r11,3704
	ctx.r11.s64 = ctx.r11.s64 + 3704;
	// lis r9,-30164
	ctx.r9.s64 = -1976827904;
	// addi r26,r11,-2
	ctx.r26.s64 = ctx.r11.s64 + -2;
	// lis r11,-30185
	ctx.r11.s64 = -1978204160;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// lis r22,-16384
	ctx.r22.s64 = -1073741824;
	// li r23,16
	ctx.r23.s64 = 16;
	// li r24,7
	ctx.r24.s64 = 7;
	// li r25,116
	ctx.r25.s64 = 116;
	// addi r28,r11,32288
	ctx.r28.s64 = ctx.r11.s64 + 32288;
	// addi r30,r9,1528
	ctx.r30.s64 = ctx.r9.s64 + 1528;
loc_8A0453E8:
	// extsh r29,r10
	ctx.r29.s64 = ctx.r10.s16;
	// lhzu r3,2(r26)
	ea = 2 + ctx.r26.u32;
	ctx.r3.u64 = REX_LOAD_U16(ea);
	ctx.r26.u32 = ea;
	// addi r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 4;
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// add r8,r29,r11
	ctx.r8.u64 = ctx.r29.u64 + ctx.r11.u64;
	// mulli r31,r9,116
	ctx.r31.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(116));
	// stwx r22,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r22.u32);
	// stwx r23,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r23.u32);
	// rlwinm r21,r8,1,0,30
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r30,8
	ctx.r7.s64 = ctx.r30.s64 + 8;
	// addi r6,r30,12
	ctx.r6.s64 = ctx.r30.s64 + 12;
	// lbzx r5,r21,r28
	ctx.r5.u64 = REX_LOAD_U8(ctx.r21.u32 + ctx.r28.u32);
	// extsb r4,r5
	ctx.r4.s64 = ctx.r5.s8;
	// stwx r27,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r27.u32);
	// stwx r4,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r4.u32);
	// bl 0x8a00ca60
	ctx.lr = 0x8A04542C;
	sub_8A00CA60(ctx, base);
	// addi r3,r28,2
	ctx.r3.s64 = ctx.r28.s64 + 2;
	// addi r10,r28,4
	ctx.r10.s64 = ctx.r28.s64 + 4;
	// addi r9,r29,1
	ctx.r9.s64 = ctx.r29.s64 + 1;
	// addi r11,r30,80
	ctx.r11.s64 = ctx.r30.s64 + 80;
	// addi r7,r30,56
	ctx.r7.s64 = ctx.r30.s64 + 56;
	// lhzx r8,r21,r3
	ctx.r8.u64 = REX_LOAD_U16(ctx.r21.u32 + ctx.r3.u32);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lhzx r6,r21,r10
	ctx.r6.u64 = REX_LOAD_U16(ctx.r21.u32 + ctx.r10.u32);
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
	// addi r5,r30,48
	ctx.r5.s64 = ctx.r30.s64 + 48;
	// addi r4,r30,60
	ctx.r4.s64 = ctx.r30.s64 + 60;
	// addi r3,r30,52
	ctx.r3.s64 = ctx.r30.s64 + 52;
	// addi r29,r30,68
	ctx.r29.s64 = ctx.r30.s64 + 68;
	// stw r27,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// addi r21,r30,44
	ctx.r21.s64 = ctx.r30.s64 + 44;
	// addi r20,r30,84
	ctx.r20.s64 = ctx.r30.s64 + 84;
	// addi r19,r30,92
	ctx.r19.s64 = ctx.r30.s64 + 92;
	// rotlwi r9,r8,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// rotlwi r8,r6,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r6.u32, 16);
	// stbx r24,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r24.u8);
	// clrlwi r6,r10,16
	ctx.r6.u64 = ctx.r10.u32 & 0xFFFF;
	// stwx r11,r31,r21
	REX_STORE_U32(ctx.r31.u32 + ctx.r21.u32, ctx.r11.u32);
	// stwx r9,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r9.u32);
	// stwx r9,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r9.u32);
	// cmplwi cr6,r6,6
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 6, ctx.xer);
	// stwx r8,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r8.u32);
	// stwx r8,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r8.u32);
	// stwx r27,r31,r20
	REX_STORE_U32(ctx.r31.u32 + ctx.r20.u32, ctx.r27.u32);
	// stbx r25,r31,r19
	REX_STORE_U8(ctx.r31.u32 + ctx.r19.u32, ctx.r25.u8);
	// blt cr6,0x8a0453e8
	if (ctx.cr6.lt) goto loc_8A0453E8;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8a0c2374
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8A045D50) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8a0c2314
	ctx.lr = 0x8A045D58;
	__savegprlr_15(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,25
	ctx.r3.s64 = 25;
	// bl 0x8a0154b0
	ctx.lr = 0x8A045D64;
	sub_8A0154B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8a045f94
	if (ctx.cr6.eq) goto loc_8A045F94;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x8a00d118
	ctx.lr = 0x8A045D74;
	sub_8A00D118(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8a045f94
	if (ctx.cr6.eq) goto loc_8A045F94;
	// lis r11,-30164
	ctx.r11.s64 = -1976827904;
	// lis r10,-30185
	ctx.r10.s64 = -1978204160;
	// lis r6,-30126
	ctx.r6.s64 = -1974337536;
	// addi r10,r10,32348
	ctx.r10.s64 = ctx.r10.s64 + 32348;
	// li r27,0
	ctx.r27.s64 = 0;
	// lbz r11,1523(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1523);
	// addi r29,r10,-4
	ctx.r29.s64 = ctx.r10.s64 + -4;
	// lis r10,-30165
	ctx.r10.s64 = -1976893440;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// lwz r25,-13288(r6)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r6.u32 + -13288);
	// lis r11,-30137
	ctx.r11.s64 = -1975058432;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// addi r24,r11,3704
	ctx.r24.s64 = ctx.r11.s64 + 3704;
	// lbz r5,10463(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 10463);
	// lis r11,-30185
	ctx.r11.s64 = -1978204160;
	// lis r10,-30164
	ctx.r10.s64 = -1976827904;
	// sth r7,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r7.u16);
	// addi r8,r11,32396
	ctx.r8.s64 = ctx.r11.s64 + 32396;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// lhz r19,0(r24)
	ctx.r19.u64 = REX_LOAD_U16(ctx.r24.u32 + 0);
	// li r20,127
	ctx.r20.s64 = 127;
	// li r21,516
	ctx.r21.s64 = 516;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r22,9
	ctx.r22.s64 = 9;
	// stb r5,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r5.u8);
	// li r26,256
	ctx.r26.s64 = 256;
	// li r23,32
	ctx.r23.s64 = 32;
	// addi r30,r10,1528
	ctx.r30.s64 = ctx.r10.s64 + 1528;
	// b 0x8a045df8
	goto loc_8A045DF8;
loc_8A045DF0:
	// lhz r7,82(r1)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_8A045DF8:
	// extsh r28,r9
	ctx.r28.s64 = ctx.r9.s16;
	// lhz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 4);
	// addi r10,r30,104
	ctx.r10.s64 = ctx.r30.s64 + 104;
	// rlwinm r9,r28,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r30,4
	ctx.r6.s64 = ctx.r30.s64 + 4;
	// addi r5,r30,8
	ctx.r5.s64 = ctx.r30.s64 + 8;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lis r4,-16384
	ctx.r4.s64 = -1073741824;
	// lhzx r3,r9,r24
	ctx.r3.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r24.u32);
	// li r9,25
	ctx.r9.s64 = 25;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// extsh r31,r3
	ctx.r31.s64 = ctx.r3.s16;
	// mulli r31,r31,116
	ctx.r31.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(116));
	// sthx r19,r31,r10
	REX_STORE_U16(ctx.r31.u32 + ctx.r10.u32, ctx.r19.u16);
	// stwx r9,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r9.u32);
	// stwx r11,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u32);
	// stwx r4,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r4.u32);
	// beq cr6,0x8a045e6c
	if (ctx.cr6.eq) goto loc_8A045E6C;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x8a045e54
	if (ctx.cr6.eq) goto loc_8A045E54;
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// stwx r27,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r27.u32);
	// b 0x8a045ef0
	goto loc_8A045EF0;
loc_8A045E54:
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// clrlwi r9,r11,29
	ctx.r9.u64 = ctx.r11.u32 & 0x7;
	// lbzx r8,r9,r8
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// stwx r8,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u32);
	// b 0x8a045ef0
	goto loc_8A045EF0;
loc_8A045E6C:
	// lbz r11,10(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 10);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8a045ebc
	if (ctx.cr6.lt) goto loc_8A045EBC;
	// bne cr6,0x8a045ef0
	if (!ctx.cr6.eq) goto loc_8A045EF0;
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// lis r10,-13108
	ctx.r10.s64 = -859045888;
	// li r9,10
	ctx.r9.s64 = 10;
	// ori r8,r10,52429
	ctx.r8.u64 = ctx.r10.u64 | 52429;
	// divw r7,r11,r9
	ctx.r7.u64 = uint32_t((ctx.r9.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r11.s32 / ctx.r9.s32 : 0);
	// addi r6,r30,12
	ctx.r6.s64 = ctx.r30.s64 + 12;
	// mulhwu r5,r7,r8
	ctx.r5.u64 = (uint64_t(ctx.r7.u32) * uint64_t(ctx.r8.u32)) >> 32;
	// stwx r7,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r7.u32);
	// rlwinm r11,r5,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// subf. r10,r11,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8a045ef0
	if (!ctx.cr0.eq) goto loc_8A045EF0;
	// stwx r27,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r27.u32);
	// b 0x8a045ef0
	goto loc_8A045EF0;
loc_8A045EBC:
	// lis r11,26214
	ctx.r11.s64 = 1717960704;
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// ori r8,r11,26215
	ctx.r8.u64 = ctx.r11.u64 | 26215;
	// addi r7,r30,12
	ctx.r7.s64 = ctx.r30.s64 + 12;
	// mulhw r6,r9,r8
	ctx.r6.s64 = (int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32)) >> 32;
	// srawi r11,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 2;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r4,r5,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r4,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r4.u64;
	// stwx r11,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
loc_8A045EF0:
	// bl 0x8a00ca60
	ctx.lr = 0x8A045EF4;
	sub_8A00CA60(ctx, base);
	// lhz r8,6(r29)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r29.u32 + 6);
	// lhzu r11,8(r29)
	ea = 8 + ctx.r29.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r29.u32 = ea;
	// addi r9,r30,80
	ctx.r9.s64 = ctx.r30.s64 + 80;
	// addi r5,r30,60
	ctx.r5.s64 = ctx.r30.s64 + 60;
	// rotlwi r10,r11,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// addi r7,r28,1
	ctx.r7.s64 = ctx.r28.s64 + 1;
	// add r11,r31,r9
	ctx.r11.u64 = ctx.r31.u64 + ctx.r9.u64;
	// addi r9,r30,92
	ctx.r9.s64 = ctx.r30.s64 + 92;
	// addi r28,r30,64
	ctx.r28.s64 = ctx.r30.s64 + 64;
	// stwx r10,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r10.u32);
	// addi r5,r30,66
	ctx.r5.s64 = ctx.r30.s64 + 66;
	// addi r6,r30,56
	ctx.r6.s64 = ctx.r30.s64 + 56;
	// addi r4,r30,48
	ctx.r4.s64 = ctx.r30.s64 + 48;
	// stw r26,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// stbx r20,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r20.u8);
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// sthx r21,r31,r28
	REX_STORE_U16(ctx.r31.u32 + ctx.r28.u32, ctx.r21.u16);
	// addi r3,r30,52
	ctx.r3.s64 = ctx.r30.s64 + 52;
	// addi r18,r30,67
	ctx.r18.s64 = ctx.r30.s64 + 67;
	// stbx r27,r31,r5
	REX_STORE_U8(ctx.r31.u32 + ctx.r5.u32, ctx.r27.u8);
	// addi r17,r30,68
	ctx.r17.s64 = ctx.r30.s64 + 68;
	// addi r16,r30,44
	ctx.r16.s64 = ctx.r30.s64 + 44;
	// addi r15,r30,84
	ctx.r15.s64 = ctx.r30.s64 + 84;
	// addi r28,r30,88
	ctx.r28.s64 = ctx.r30.s64 + 88;
	// rotlwi r8,r8,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// stbx r27,r31,r18
	REX_STORE_U8(ctx.r31.u32 + ctx.r18.u32, ctx.r27.u8);
	// add r7,r10,r25
	ctx.r7.u64 = ctx.r10.u64 + ctx.r25.u64;
	// stbx r22,r31,r17
	REX_STORE_U8(ctx.r31.u32 + ctx.r17.u32, ctx.r22.u8);
	// clrlwi r5,r9,16
	ctx.r5.u64 = ctx.r9.u32 & 0xFFFF;
	// stwx r11,r31,r16
	REX_STORE_U32(ctx.r31.u32 + ctx.r16.u32, ctx.r11.u32);
	// stwx r8,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r8.u32);
	// stwx r8,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r8.u32);
	// cmplwi cr6,r5,6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 6, ctx.xer);
	// stwx r7,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r7.u32);
	// stwx r26,r31,r15
	REX_STORE_U32(ctx.r31.u32 + ctx.r15.u32, ctx.r26.u32);
	// stwx r23,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r23.u32);
	// blt cr6,0x8a045df0
	if (ctx.cr6.lt) goto loc_8A045DF0;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8a0c2364
	__restgprlr_15(ctx, base);
	return;
loc_8A045F94:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8a0c2364
	__restgprlr_15(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8A0480E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8a0c2318
	ctx.lr = 0x8A0480E8;
	__savegprlr_16(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30165
	ctx.r11.s64 = -1976893440;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r30,r11,13736
	ctx.r30.s64 = ctx.r11.s64 + 13736;
	// mulli r31,r10,208
	ctx.r31.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// addi r26,r30,8
	ctx.r26.s64 = ctx.r30.s64 + 8;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwzx r11,r31,r26
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// bgt cr6,0x8a049b84
	if (ctx.cr6.gt) goto loc_8A049B84;
	// lis r12,-30203
	ctx.r12.s64 = -1979383808;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-32472
	ctx.r12.s64 = ctx.r12.s64 + -32472;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8A0482C0;
	case 1:
		goto loc_8A048164;
	case 2:
		goto loc_8A04870C;
	case 3:
		goto loc_8A048AC4;
	case 4:
		goto loc_8A048C30;
	case 5:
		goto loc_8A048E30;
	case 6:
		goto loc_8A048E30;
	case 7:
		goto loc_8A048F0C;
	case 8:
		goto loc_8A0490A4;
	case 9:
		goto loc_8A0493A0;
	case 10:
		goto loc_8A048F0C;
	case 11:
		goto loc_8A0490A4;
	case 12:
		goto loc_8A0493A0;
	case 13:
		goto loc_8A049614;
	case 14:
		goto loc_8A0499E8;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_8A048164:
	// addi r11,r30,72
	ctx.r11.s64 = ctx.r30.s64 + 72;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8a048284
	if (ctx.cr6.eq) goto loc_8A048284;
	// bl 0x8a047a38
	ctx.lr = 0x8A04817C;
	sub_8A047A38(ctx, base);
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8a04829c
	if (ctx.cr6.eq) goto loc_8A04829C;
	// addi r11,r30,193
	ctx.r11.s64 = ctx.r30.s64 + 193;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8a04829c
	if (ctx.cr6.eq) goto loc_8A04829C;
	// addi r11,r30,197
	ctx.r11.s64 = ctx.r30.s64 + 197;
	// lis r10,-30184
	ctx.r10.s64 = -1978138624;
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r9,r10,-31300
	ctx.r9.s64 = ctx.r10.s64 + -31300;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lbzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r11,r9
	ctx.r28.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r4,8(r28)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r28.u32 + 8);
	// bl 0x89ffe588
	ctx.lr = 0x8A0481D8;
	sub_89FFE588(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8a04829c
	if (ctx.cr6.eq) goto loc_8A04829C;
	// addi r10,r30,185
	ctx.r10.s64 = ctx.r30.s64 + 185;
	// lis r8,-30137
	ctx.r8.s64 = -1975058432;
	// lis r7,16838
	ctx.r7.s64 = 1103495168;
	// lis r6,-30184
	ctx.r6.s64 = -1978138624;
	// ori r5,r7,20077
	ctx.r5.u64 = ctx.r7.u64 | 20077;
	// lbzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// addi r4,r30,48
	ctx.r4.s64 = ctx.r30.s64 + 48;
	// lwz r11,-916(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + -916);
	// addi r3,r6,-31216
	ctx.r3.s64 = ctx.r6.s64 + -31216;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mullw r11,r11,r5
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// lwzx r7,r31,r4
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// clrlwi r6,r9,24
	ctx.r6.u64 = ctx.r9.u32 & 0xFF;
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r5,r30,52
	ctx.r5.s64 = ctx.r30.s64 + 52;
	// stbx r6,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r6.u8);
	// rlwinm r4,r6,2,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x4;
	// stw r11,-916(r8)
	REX_STORE_U32(ctx.r8.u32 + -916, ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addis r27,r7,30
	ctx.r27.s64 = ctx.r7.s64 + 1966080;
	// srawi r10,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 16;
	// lwzx r8,r31,r5
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwzx r11,r4,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r3.u32);
	// clrlwi r25,r10,17
	ctx.r25.u64 = ctx.r10.u32 & 0x7FFF;
	// add r26,r11,r8
	ctx.r26.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_8A048248:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r10,r29,13,0,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 13) & 0xFFFFE000;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// lwz r8,0(r28)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x8a0afbf8
	ctx.lr = 0x8A04826C;
	sub_8A0AFBF8(ctx, base);
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x8a048248
	if (ctx.cr6.lt) goto loc_8A048248;
	// b 0x8a04829c
	goto loc_8A04829C;
loc_8A048284:
	// bl 0x89ffd2f0
	ctx.lr = 0x8A048288;
	sub_89FFD2F0(ctx, base);
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8a04829c
	if (!ctx.cr6.eq) goto loc_8A04829C;
	// li r3,78
	ctx.r3.s64 = 78;
	// bl 0x8a017608
	ctx.lr = 0x8A04829C;
	sub_8A017608(ctx, base);
loc_8A04829C:
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8a049b84
	if (!ctx.cr6.eq) goto loc_8A049B84;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// clrlwi r3,r10,16
	ctx.r3.u64 = ctx.r10.u32 & 0xFFFF;
	// bl 0x8a014e30
	ctx.lr = 0x8A0482B8;
	sub_8A014E30(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8a0c2368
	__restgprlr_16(ctx, base);
	return;
loc_8A0482C0:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x89ffc2b8
	ctx.lr = 0x8A0482C8;
	sub_89FFC2B8(ctx, base);
	// extsh r29,r3
	ctx.r29.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bge cr6,0x8a0482e8
	if (!ctx.cr6.lt) goto loc_8A0482E8;
loc_8A0482DC:
	// bl 0x8a0476c0
	ctx.lr = 0x8A0482E0;
	sub_8A0476C0(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8a0c2368
	__restgprlr_16(ctx, base);
	return;
loc_8A0482E8:
	// bl 0x8a048018
	ctx.lr = 0x8A0482EC;
	sub_8A048018(ctx, base);
	// mulli r29,r29,208
	ctx.r29.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(208));
	// addi r27,r30,192
	ctx.r27.s64 = ctx.r30.s64 + 192;
	// addi r9,r30,196
	ctx.r9.s64 = ctx.r30.s64 + 196;
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// addi r8,r30,196
	ctx.r8.s64 = ctx.r30.s64 + 196;
	// addi r26,r30,197
	ctx.r26.s64 = ctx.r30.s64 + 197;
	// lbzx r7,r29,r27
	ctx.r7.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r27.u32);
	// addi r10,r30,72
	ctx.r10.s64 = ctx.r30.s64 + 72;
	// lbzx r6,r31,r9
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// addi r24,r30,197
	ctx.r24.s64 = ctx.r30.s64 + 197;
	// stbx r7,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r7.u8);
	// stbx r6,r29,r8
	REX_STORE_U8(ctx.r29.u32 + ctx.r8.u32, ctx.r6.u8);
	// lbzx r4,r31,r26
	ctx.r4.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r26.u32);
	// lhzx r5,r29,r10
	ctx.r5.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r10.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stbx r4,r29,r24
	REX_STORE_U8(ctx.r29.u32 + ctx.r24.u32, ctx.r4.u8);
	// bne cr6,0x8a04850c
	if (!ctx.cr6.eq) goto loc_8A04850C;
	// addi r11,r30,182
	ctx.r11.s64 = ctx.r30.s64 + 182;
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
	// bne cr6,0x8a049b84
	if (!ctx.cr6.eq) goto loc_8A049B84;
	// lis r24,-30137
	ctx.r24.s64 = -1975058432;
	// lwzx r3,r31,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// lis r11,32642
	ctx.r11.s64 = 2139226112;
	// lis r10,-22780
	ctx.r10.s64 = -1492910080;
	// ori r9,r11,17227
	ctx.r9.u64 = ctx.r11.u64 | 17227;
	// ori r7,r10,10207
	ctx.r7.u64 = ctx.r10.u64 | 10207;
	// lwz r11,-916(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + -916);
	// lis r8,16838
	ctx.r8.s64 = 1103495168;
	// addi r28,r30,48
	ctx.r28.s64 = ctx.r30.s64 + 48;
	// mullw r6,r11,r9
	ctx.r6.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// subf r11,r6,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r6.u64;
	// ori r29,r8,20077
	ctx.r29.u64 = ctx.r8.u64 | 20077;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// mullw r10,r11,r29
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// addi r11,r10,12345
	ctx.r11.s64 = ctx.r10.s64 + 12345;
	// srawi r4,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 16;
	// mullw r10,r11,r29
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r11,r10,12345
	ctx.r11.s64 = ctx.r10.s64 + 12345;
	// srawi r7,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 16;
	// mullw r8,r11,r29
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// clrlwi r10,r4,17
	ctx.r10.u64 = ctx.r4.u32 & 0x7FFF;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// addi r11,r8,12345
	ctx.r11.s64 = ctx.r8.s64 + 12345;
	// clrlwi r9,r7,17
	ctx.r9.u64 = ctx.r7.u32 & 0x7FFF;
	// rlwinm r8,r10,6,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// stw r11,-916(r24)
	REX_STORE_U32(ctx.r24.u32 + -916, ctx.r11.u32);
	// rlwinm r7,r9,6,0,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// add r5,r8,r10
	ctx.r5.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r4,r7,r9
	ctx.r4.u64 = ctx.r7.u64 + ctx.r9.u64;
	// rlwinm r10,r5,17,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 17) & 0xFFFF;
	// rlwinm r9,r4,17,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 17) & 0xFFFF;
	// srawi r7,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r6.s32 >> 16;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// lwzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// addi r6,r10,-72
	ctx.r6.s64 = ctx.r10.s64 + -72;
	// addi r27,r30,52
	ctx.r27.s64 = ctx.r30.s64 + 52;
	// addi r5,r9,-32
	ctx.r5.s64 = ctx.r9.s64 + -32;
	// srawi r4,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 16;
	// rlwinm r10,r6,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFFFF0000;
	// lis r23,-30184
	ctx.r23.s64 = -1978138624;
	// rlwinm r7,r7,30,19,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x1FFF;
	// lwzx r8,r31,r27
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// rlwinm r9,r5,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF0000;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r4,r4,21,28,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 21) & 0xC;
	// addi r26,r30,200
	ctx.r26.s64 = ctx.r30.s64 + 200;
	// addi r25,r30,207
	ctx.r25.s64 = ctx.r30.s64 + 207;
	// addi r23,r23,-31252
	ctx.r23.s64 = ctx.r23.s64 + -31252;
	// addi r11,r7,-4096
	ctx.r11.s64 = ctx.r7.s64 + -4096;
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lis r9,-6
	ctx.r9.s64 = -393216;
	// lbzx r8,r31,r26
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r26.u32);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lbzx r7,r31,r25
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r25.u32);
	// lwzx r4,r4,r23
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r23.u32);
	// bl 0x8a0b8680
	ctx.lr = 0x8A048434;
	sub_8A0B8680(ctx, base);
	// lwz r11,-916(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + -916);
	// lis r10,-30210
	ctx.r10.s64 = -1979842560;
	// lwzx r3,r31,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// lwzx r9,r31,r28
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// lwzx r6,r31,r27
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// lbzx r8,r31,r26
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r26.u32);
	// lbzx r7,r31,r25
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r25.u32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r5,r10,9016
	ctx.r5.s64 = ctx.r10.s64 + 9016;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// srawi r10,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 16;
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// clrlwi r4,r10,17
	ctx.r4.u64 = ctx.r10.u32 & 0x7FFF;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// rlwinm r4,r4,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x3FE;
	// addi r30,r10,128
	ctx.r30.s64 = ctx.r10.s64 + 128;
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// rlwinm r30,r30,1,22,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0x3FE;
	// mullw r10,r11,r29
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// lhzx r4,r4,r5
	ctx.r4.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r5.u32);
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// lhzx r5,r30,r5
	ctx.r5.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r5.u32);
	// addi r11,r10,12345
	ctx.r11.s64 = ctx.r10.s64 + 12345;
	// srawi r10,r31,16
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r31.s32 >> 16;
	// stw r11,-916(r24)
	REX_STORE_U32(ctx.r24.u32 + -916, ctx.r11.u32);
	// srawi r31,r29,16
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xFFFF) != 0);
	ctx.r31.s64 = ctx.r29.s32 >> 16;
	// rlwinm r10,r10,6,11,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x1F0000;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// mullw r4,r4,r10
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// mullw r10,r5,r10
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srawi r5,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r4.s32 >> 8;
	// srawi r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// srawi r4,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 16;
	// lis r30,-30184
	ctx.r30.s64 = -1978138624;
	// rlwinm r11,r31,29,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 29) & 0xFFF;
	// addi r31,r30,-31236
	ctx.r31.s64 = ctx.r30.s64 + -31236;
	// rlwinm r4,r4,20,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 20) & 0x4;
	// add r30,r10,r9
	ctx.r30.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r11,r11,-2048
	ctx.r11.s64 = ctx.r11.s64 + -2048;
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
	// lis r9,-3
	ctx.r9.s64 = -196608;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r4,r4,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// addis r5,r30,32
	ctx.r5.s64 = ctx.r30.s64 + 2097152;
	// bl 0x8a0b8680
	ctx.lr = 0x8A048504;
	sub_8A0B8680(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8a0c2368
	__restgprlr_16(ctx, base);
	return;
loc_8A04850C:
	// addi r28,r30,188
	ctx.r28.s64 = ctx.r30.s64 + 188;
	// lbzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x8a048610
	if (ctx.cr6.gt) goto loc_8A048610;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8a048578
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8A048578;
	// bdzf 4*cr6+eq,0x8a0485b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8A0485B8;
	// bne cr6,0x8a0485d4
	if (!ctx.cr6.eq) goto loc_8A0485D4;
	// lbzx r11,r29,r27
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r27.u32);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8a048610
	if (ctx.cr6.eq) goto loc_8A048610;
	// addi r11,r30,56
	ctx.r11.s64 = ctx.r30.s64 + 56;
	// addi r10,r30,164
	ctx.r10.s64 = ctx.r30.s64 + 164;
	// addi r9,r30,168
	ctx.r9.s64 = ctx.r30.s64 + 168;
	// li r3,45
	ctx.r3.s64 = 45;
	// lwzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addis r7,r8,36
	ctx.r7.s64 = ctx.r8.s64 + 2359296;
	// stwx r7,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r7.u32);
	// stwx r8,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u32);
	// bl 0x8a017608
	ctx.lr = 0x8A048568;
	sub_8A017608(ctx, base);
	// lbzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stbx r5,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r5.u8);
	// b 0x8a048610
	goto loc_8A048610;
loc_8A048578:
	// addi r11,r30,56
	ctx.r11.s64 = ctx.r30.s64 + 56;
	// addi r10,r30,168
	ctx.r10.s64 = ctx.r30.s64 + 168;
	// lwzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwzx r8,r31,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addis r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 65536;
	// stwx r7,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r7.u32);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x8a048610
	if (!ctx.cr6.eq) goto loc_8A048610;
	// addi r11,r30,193
	ctx.r11.s64 = ctx.r30.s64 + 193;
	// lbzx r9,r29,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// ori r8,r9,2
	ctx.r8.u64 = ctx.r9.u64 | 2;
	// stbx r8,r29,r11
	REX_STORE_U8(ctx.r29.u32 + ctx.r11.u32, ctx.r8.u8);
	// lbzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stbx r5,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r5.u8);
	// b 0x8a048610
	goto loc_8A048610;
loc_8A0485B8:
	// lbzx r10,r29,r27
	ctx.r10.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r27.u32);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8a048610
	if (!ctx.cr6.eq) goto loc_8A048610;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r11.u8);
	// b 0x8a048610
	goto loc_8A048610;
loc_8A0485D4:
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
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x8a048610
	if (!ctx.cr6.eq) goto loc_8A048610;
	// addi r11,r30,193
	ctx.r11.s64 = ctx.r30.s64 + 193;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbzx r9,r29,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// rlwinm r7,r8,0,31,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stbx r7,r29,r11
	REX_STORE_U8(ctx.r29.u32 + ctx.r11.u32, ctx.r7.u8);
	// stbx r10,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r10.u8);
loc_8A048610:
	// addi r28,r30,184
	ctx.r28.s64 = ctx.r30.s64 + 184;
	// lbzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8a048688
	if (ctx.cr6.eq) goto loc_8A048688;
	// lbzx r10,r31,r26
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r26.u32);
	// addi r9,r30,48
	ctx.r9.s64 = ctx.r30.s64 + 48;
	// addi r8,r30,158
	ctx.r8.s64 = ctx.r30.s64 + 158;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// addi r7,r30,52
	ctx.r7.s64 = ctx.r30.s64 + 52;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// lis r3,-30186
	ctx.r3.s64 = -1978269696;
	// lwzx r4,r31,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// mullw r11,r6,r11
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// lhzx r6,r31,r8
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r8.u32);
	// lwzx r5,r31,r7
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// addi r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 + 72;
	// addi r8,r3,-26052
	ctx.r8.s64 = ctx.r3.s64 + -26052;
	// rlwinm r7,r11,11,0,20
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0xFFFFF800;
	// addis r4,r4,29
	ctx.r4.s64 = ctx.r4.s64 + 1900544;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8a0b0580
	ctx.lr = 0x8A048664;
	sub_8A0B0580(ctx, base);
	// lbzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// addi r10,r11,255
	ctx.r10.s64 = ctx.r11.s64 + 255;
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// stbx r10,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r10.u8);
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// addi r9,r10,2
	ctx.r9.s64 = ctx.r10.s64 + 2;
	// sthx r9,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u16);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8a0c2368
	__restgprlr_16(ctx, base);
	return;
loc_8A048688:
	// lbzx r11,r29,r27
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r27.u32);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8a0486f4
	if (ctx.cr6.eq) goto loc_8A0486F4;
	// addi r11,r30,193
	ctx.r11.s64 = ctx.r30.s64 + 193;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// rlwinm r9,r10,0,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8a0486f4
	if (ctx.cr6.eq) goto loc_8A0486F4;
	// lbzx r11,r31,r26
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r26.u32);
	// lis r10,-30184
	ctx.r10.s64 = -1978138624;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r9,r10,-31228
	ctx.r9.s64 = ctx.r10.s64 + -31228;
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lbzx r4,r8,r9
	ctx.r4.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// bl 0x89ffe588
	ctx.lr = 0x8A0486CC;
	sub_89FFE588(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8a0486f4
	if (ctx.cr6.eq) goto loc_8A0486F4;
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// addi r9,r10,12
	ctx.r9.s64 = ctx.r10.s64 + 12;
	// sthx r9,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u16);
	// lbzx r11,r29,r24
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r24.u32);
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// rlwinm r6,r7,1,24,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFE;
	// stbx r6,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r6.u8);
loc_8A0486F4:
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// addi r9,r10,2
	ctx.r9.s64 = ctx.r10.s64 + 2;
	// sthx r9,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u16);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8a0c2368
	__restgprlr_16(ctx, base);
	return;
loc_8A04870C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x89ffc468
	ctx.lr = 0x8A048714;
	sub_89FFC468(ctx, base);
	// extsh r28,r3
	ctx.r28.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// blt cr6,0x8a0482dc
	if (ctx.cr6.lt) goto loc_8A0482DC;
	// bl 0x8a048018
	ctx.lr = 0x8A04872C;
	sub_8A048018(ctx, base);
	// addi r29,r30,188
	ctx.r29.s64 = ctx.r30.s64 + 188;
	// li r21,0
	ctx.r21.s64 = 0;
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x8a04884c
	if (ctx.cr6.gt) goto loc_8A04884C;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8a0487a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8A0487A8;
	// bdzf 4*cr6+eq,0x8a0487f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8A0487F0;
	// bne cr6,0x8a048814
	if (!ctx.cr6.eq) goto loc_8A048814;
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
	// beq cr6,0x8a04884c
	if (ctx.cr6.eq) goto loc_8A04884C;
	// li r3,45
	ctx.r3.s64 = 45;
	// bl 0x8a017608
	ctx.lr = 0x8A048778;
	sub_8A017608(ctx, base);
	// addi r11,r30,56
	ctx.r11.s64 = ctx.r30.s64 + 56;
	// lbzx r8,r31,r29
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r10,r30,164
	ctx.r10.s64 = ctx.r30.s64 + 164;
	// addi r9,r30,168
	ctx.r9.s64 = ctx.r30.s64 + 168;
	// addi r5,r8,1
	ctx.r5.s64 = ctx.r8.s64 + 1;
	// lwzx r7,r31,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// stbx r5,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r5.u8);
	// addis r6,r7,28
	ctx.r6.s64 = ctx.r7.s64 + 1835008;
	// stwx r6,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r6.u32);
	// stwx r7,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r7.u32);
	// b 0x8a04884c
	goto loc_8A04884C;
loc_8A0487A8:
	// addi r11,r30,56
	ctx.r11.s64 = ctx.r30.s64 + 56;
	// addi r10,r30,168
	ctx.r10.s64 = ctx.r30.s64 + 168;
	// lwzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwzx r8,r31,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addis r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 65536;
	// stwx r7,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r7.u32);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x8a04884c
	if (!ctx.cr6.eq) goto loc_8A04884C;
	// addi r11,r30,193
	ctx.r11.s64 = ctx.r30.s64 + 193;
	// mulli r10,r28,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(208));
	// lbzx r7,r10,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// li r8,-128
	ctx.r8.s64 = -128;
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// stbx r6,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r6.u8);
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stbx r3,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r3.u8);
	// b 0x8a04884c
	goto loc_8A04884C;
loc_8A0487F0:
	// mulli r10,r28,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(208));
	// addi r9,r30,192
	ctx.r9.s64 = ctx.r30.s64 + 192;
	// lbzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r7,r8,0,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x8a04884c
	if (!ctx.cr6.eq) goto loc_8A04884C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
	// b 0x8a04884c
	goto loc_8A04884C;
loc_8A048814:
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
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x8a04884c
	if (!ctx.cr6.eq) goto loc_8A04884C;
	// mulli r10,r28,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(208));
	// addi r11,r30,193
	ctx.r11.s64 = ctx.r30.s64 + 193;
	// lbzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// clrlwi r8,r9,25
	ctx.r8.u64 = ctx.r9.u32 & 0x7F;
	// stbx r8,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u8);
	// stbx r21,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r21.u8);
loc_8A04884C:
	// addi r22,r30,158
	ctx.r22.s64 = ctx.r30.s64 + 158;
	// lhzx r11,r31,r22
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r22.u32);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,128
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 128, ctx.xer);
	// bge cr6,0x8a048868
	if (!ctx.cr6.lt) goto loc_8A048868;
	// li r11,128
	ctx.r11.s64 = 128;
	// sthx r11,r31,r22
	REX_STORE_U16(ctx.r31.u32 + ctx.r22.u32, ctx.r11.u16);
loc_8A048868:
	// lhzx r11,r31,r22
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r22.u32);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,384
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 384, ctx.xer);
	// ble cr6,0x8a048880
	if (!ctx.cr6.gt) goto loc_8A048880;
	// li r11,384
	ctx.r11.s64 = 384;
	// sthx r11,r31,r22
	REX_STORE_U16(ctx.r31.u32 + ctx.r22.u32, ctx.r11.u16);
loc_8A048880:
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
	// addi r24,r30,184
	ctx.r24.s64 = ctx.r30.s64 + 184;
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
	// lbzx r10,r31,r24
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r24.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
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
	// beq cr6,0x8a048920
	if (ctx.cr6.eq) goto loc_8A048920;
	// addi r11,r30,180
	ctx.r11.s64 = ctx.r30.s64 + 180;
	// lis r10,-30184
	ctx.r10.s64 = -1978138624;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r9,r10,-31148
	ctx.r9.s64 = ctx.r10.s64 + -31148;
	// add r26,r31,r11
	ctx.r26.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lbzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// lbzx r4,r8,r9
	ctx.r4.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// bl 0x89ffe588
	ctx.lr = 0x8A048914;
	sub_89FFE588(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8a049b84
	if (ctx.cr6.eq) goto loc_8A049B84;
	// b 0x8a048998
	goto loc_8A048998;
loc_8A048920:
	// addi r11,r30,193
	ctx.r11.s64 = ctx.r30.s64 + 193;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// rlwinm r9,r10,0,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8a049b84
	if (!ctx.cr6.eq) goto loc_8A049B84;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8a013dc0
	ctx.lr = 0x8A04893C;
	sub_8A013DC0(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8a013fd8
	ctx.lr = 0x8A048948;
	sub_8A013FD8(ctx, base);
	// mulli r29,r28,208
	ctx.r29.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(208));
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
	// beq cr6,0x8a049b84
	if (ctx.cr6.eq) goto loc_8A049B84;
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,50
	ctx.r4.s64 = 50;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x89ffe588
	ctx.lr = 0x8A04897C;
	sub_89FFE588(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8a049b84
	if (ctx.cr6.eq) goto loc_8A049B84;
	// addi r10,r30,197
	ctx.r10.s64 = ctx.r30.s64 + 197;
	// addi r11,r30,180
	ctx.r11.s64 = ctx.r30.s64 + 180;
	// add r26,r31,r11
	ctx.r26.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lbzx r9,r29,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r10.u32);
	// stbx r9,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u8);
loc_8A048998:
	// lis r11,-30184
	ctx.r11.s64 = -1978138624;
	// lis r10,-30184
	ctx.r10.s64 = -1978138624;
	// addi r11,r11,-31208
	ctx.r11.s64 = ctx.r11.s64 + -31208;
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
	// addi r29,r11,-4
	ctx.r29.s64 = ctx.r11.s64 + -4;
	// lis r11,-30210
	ctx.r11.s64 = -1979842560;
	// lis r23,10
	ctx.r23.s64 = 655360;
	// addi r27,r11,9016
	ctx.r27.s64 = ctx.r11.s64 + 9016;
	// addi r25,r10,-31144
	ctx.r25.s64 = ctx.r10.s64 + -31144;
loc_8A0489BC:
	// lhzx r5,r31,r22
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r22.u32);
	// addi r10,r30,52
	ctx.r10.s64 = ctx.r30.s64 + 52;
	// lhz r3,4(r29)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r29.u32 + 4);
	// addi r4,r30,48
	ctx.r4.s64 = ctx.r30.s64 + 48;
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// lhz r8,6(r29)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r29.u32 + 6);
	// rotlwi r3,r3,16
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 16);
	// lbz r20,0(r26)
	ctx.r20.u64 = REX_LOAD_U8(ctx.r26.u32 + 0);
	// addi r6,r11,128
	ctx.r6.s64 = ctx.r11.s64 + 128;
	// lbzx r18,r31,r24
	ctx.r18.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r24.u32);
	// rlwinm r7,r5,1,22,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x3FE;
	// lhz r19,8(r29)
	ctx.r19.u64 = REX_LOAD_U16(ctx.r29.u32 + 8);
	// rlwinm r17,r6,1,22,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x3FE;
	// lwzx r6,r31,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// rotlwi r8,r8,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// lwzx r9,r31,r4
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// srawi r11,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 4;
	// lbzx r4,r20,r25
	ctx.r4.u64 = REX_LOAD_U8(ctx.r20.u32 + ctx.r25.u32);
	// srawi r10,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 4;
	// lhzx r7,r7,r27
	ctx.r7.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r27.u32);
	// mullw r4,r4,r18
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r18.s32);
	// lhzx r8,r17,r27
	ctx.r8.u64 = REX_LOAD_U16(ctx.r17.u32 + ctx.r27.u32);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// extsh r3,r7
	ctx.r3.s64 = ctx.r7.s16;
	// lwzu r7,12(r29)
	ea = 12 + ctx.r29.u32;
	ctx.r7.u64 = REX_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// mullw r18,r8,r11
	ctx.r18.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// mullw r20,r3,r10
	ctx.r20.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// srawi r18,r18,8
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0xFF) != 0);
	ctx.r18.s64 = ctx.r18.s32 >> 8;
	// srawi r20,r20,8
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0xFF) != 0);
	ctx.r20.s64 = ctx.r20.s32 >> 8;
	// mullw r8,r8,r10
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// subf r10,r20,r18
	ctx.r10.u64 = ctx.r18.u64 - ctx.r20.u64;
	// mullw r3,r3,r11
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// extsh r20,r19
	ctx.r20.s64 = ctx.r19.s16;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mullw r4,r4,r20
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r20.s32);
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// srawi r8,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 8;
	// srawi r10,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 8;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r8,r10
	ctx.r11.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r8,r4,r5
	ctx.r8.u64 = ctx.r4.u64 + ctx.r5.u64;
	// add r5,r11,r6
	ctx.r5.u64 = ctx.r11.u64 + ctx.r6.u64;
	// subf r4,r23,r9
	ctx.r4.u64 = ctx.r9.u64 - ctx.r23.u64;
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8a0b0438
	ctx.lr = 0x8A048A78;
	sub_8A0B0438(ctx, base);
	// extsh r11,r28
	ctx.r11.s64 = ctx.r28.s16;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// extsh r28,r7
	ctx.r28.s64 = ctx.r7.s16;
	// clrlwi r6,r28,16
	ctx.r6.u64 = ctx.r28.u32 & 0xFFFF;
	// cmplwi cr6,r6,5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 5, ctx.xer);
	// blt cr6,0x8a0489bc
	if (ctx.cr6.lt) goto loc_8A0489BC;
	// lis r10,-30184
	ctx.r10.s64 = -1978138624;
	// lbzx r11,r31,r24
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r24.u32);
	// lbz r9,0(r26)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r26.u32 + 0);
	// addi r8,r10,-31140
	ctx.r8.s64 = ctx.r10.s64 + -31140;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// clrlwi r6,r7,24
	ctx.r6.u64 = ctx.r7.u32 & 0xFF;
	// lbzx r5,r9,r8
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// stbx r6,r31,r24
	REX_STORE_U8(ctx.r31.u32 + ctx.r24.u32, ctx.r6.u8);
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x8a049b84
	if (!ctx.cr6.eq) goto loc_8A049B84;
	// stbx r21,r31,r24
	REX_STORE_U8(ctx.r31.u32 + ctx.r24.u32, ctx.r21.u8);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8a0c2368
	__restgprlr_16(ctx, base);
	return;
loc_8A048AC4:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x89ffc338
	ctx.lr = 0x8A048ACC;
	sub_89FFC338(ctx, base);
	// extsh r28,r3
	ctx.r28.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// blt cr6,0x8a0482dc
	if (ctx.cr6.lt) goto loc_8A0482DC;
	// bl 0x8a048018
	ctx.lr = 0x8A048AE4;
	sub_8A048018(ctx, base);
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
	// beq cr6,0x8a049b84
	if (ctx.cr6.eq) goto loc_8A049B84;
	// addi r29,r30,12
	ctx.r29.s64 = ctx.r30.s64 + 12;
	// lwzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8a048b9c
	if (ctx.cr6.eq) goto loc_8A048B9C;
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
	// beq cr6,0x8a048b40
	if (ctx.cr6.eq) goto loc_8A048B40;
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// blt cr6,0x8a049b84
	if (ctx.cr6.lt) goto loc_8A049B84;
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// b 0x8a048bc8
	goto loc_8A048BC8;
loc_8A048B40:
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// blt cr6,0x8a049b84
	if (ctx.cr6.lt) goto loc_8A049B84;
	// addi r10,r30,160
	ctx.r10.s64 = ctx.r30.s64 + 160;
	// li r21,0
	ctx.r21.s64 = 0;
	// stbx r21,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r21.u8);
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
	// blt cr6,0x8a048bc8
	if (ctx.cr6.lt) goto loc_8A048BC8;
	// bne cr6,0x8a049b84
	if (!ctx.cr6.eq) goto loc_8A049B84;
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stwx r21,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r21.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// rlwinm r9,r11,0,18,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// stwx r10,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r10.u32);
	// stwx r9,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r9.u32);
	// bl 0x89ffbed8
	ctx.lr = 0x8A048B94;
	sub_89FFBED8(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8a0c2368
	__restgprlr_16(ctx, base);
	return;
loc_8A048B9C:
	// mulli r11,r28,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(208));
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// lbzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r8,r9,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8a049b84
	if (ctx.cr6.eq) goto loc_8A049B84;
	// li r3,46
	ctx.r3.s64 = 46;
	// bl 0x8a017608
	ctx.lr = 0x8A048BBC;
	sub_8A017608(ctx, base);
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// li r10,1
	ctx.r10.s64 = 1;
	// sthx r10,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u16);
loc_8A048BC8:
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
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8a0c2368
	__restgprlr_16(ctx, base);
	return;
loc_8A048C30:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x89ffc338
	ctx.lr = 0x8A048C38;
	sub_89FFC338(ctx, base);
	// extsh r29,r3
	ctx.r29.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// blt cr6,0x8a0482dc
	if (ctx.cr6.lt) goto loc_8A0482DC;
	// bl 0x8a048018
	ctx.lr = 0x8A048C50;
	sub_8A048018(ctx, base);
	// addi r27,r30,12
	ctx.r27.s64 = ctx.r30.s64 + 12;
	// lwzx r11,r31,r27
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8a048c78
	if (!ctx.cr6.eq) goto loc_8A048C78;
	// mulli r10,r29,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(208));
	// addi r9,r30,192
	ctx.r9.s64 = ctx.r30.s64 + 192;
	// lbzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r7,r8,0,27,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8a048df8
	if (ctx.cr6.eq) goto loc_8A048DF8;
loc_8A048C78:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r30,28
	ctx.r9.s64 = ctx.r30.s64 + 28;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// addi r8,r30,16
	ctx.r8.s64 = ctx.r30.s64 + 16;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r11,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r11.u32);
	// addi r7,r30,20
	ctx.r7.s64 = ctx.r30.s64 + 20;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r9,r30,36
	ctx.r9.s64 = ctx.r30.s64 + 36;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r30,32
	ctx.r6.s64 = ctx.r30.s64 + 32;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r10,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r10.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r8,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r7,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r7.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r11,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r11.u32);
	// bl 0x89ffe588
	ctx.lr = 0x8A048CDC;
	sub_89FFE588(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8a049b84
	if (ctx.cr6.eq) goto loc_8A049B84;
	// lis r10,-30103
	ctx.r10.s64 = -1972830208;
	// lis r11,-30210
	ctx.r11.s64 = -1979842560;
	// addi r24,r10,-31664
	ctx.r24.s64 = ctx.r10.s64 + -31664;
	// addi r25,r30,52
	ctx.r25.s64 = ctx.r30.s64 + 52;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r26,45
	ctx.r26.s64 = 2949120;
	// addi r28,r11,9016
	ctx.r28.s64 = ctx.r11.s64 + 9016;
	// lwz r3,112(r24)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r24.u32 + 112);
loc_8A048D04:
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r10,r31,r27
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// addi r9,r30,48
	ctx.r9.s64 = ctx.r30.s64 + 48;
	// lwzx r5,r31,r25
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r25.u32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r31,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r8,r11,43
	ctx.r8.s64 = ctx.r11.s64 + 43;
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// rlwinm r7,r11,1,22,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x3FE;
	// addi r4,r11,128
	ctx.r4.s64 = ctx.r11.s64 + 128;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwinm r8,r4,1,22,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x3FE;
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// lhzx r7,r7,r28
	ctx.r7.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r28.u32);
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// lhzx r4,r8,r28
	ctx.r4.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r28.u32);
	// rlwinm r7,r9,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// extsh r8,r4
	ctx.r8.s64 = ctx.r4.s16;
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r9,r8,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r4,r7,14,0,17
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 14) & 0xFFFFC000;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r8,r9,14,0,17
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 14) & 0xFFFFC000;
	// srawi r9,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 8;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// srawi r9,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 3;
	// srawi r8,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r4.s32 >> 8;
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r5,r8,r5
	ctx.r5.u64 = ctx.r8.u64 + ctx.r5.u64;
	// subf r4,r26,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r26.u64;
	// blt cr6,0x8a048d98
	if (ctx.cr6.lt) goto loc_8A048D98;
	// cmpwi cr6,r11,384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 384, ctx.xer);
	// ble cr6,0x8a048da0
	if (!ctx.cr6.gt) goto loc_8A048DA0;
loc_8A048D98:
	// subfic r11,r10,256
	ctx.xer.ca = ctx.r10.u32 <= 256;
	ctx.r11.u64 = static_cast<uint64_t>(256) - ctx.r10.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
loc_8A048DA0:
	// cmpwi cr6,r3,252
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 252, ctx.xer);
	// bge cr6,0x8a048dd4
	if (!ctx.cr6.lt) goto loc_8A048DD4;
	// clrlwi r11,r11,23
	ctx.r11.u64 = ctx.r11.u32 & 0x1FF;
	// lis r8,5
	ctx.r8.s64 = 327680;
	// addi r11,r11,-256
	ctx.r11.s64 = ctx.r11.s64 + -256;
	// li r6,116
	ctx.r6.s64 = 116;
	// srawi r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// addi r9,r11,256
	ctx.r9.s64 = ctx.r11.s64 + 256;
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// bl 0x8a08ac98
	ctx.lr = 0x8A048DD0;
	sub_8A08AC98(ctx, base);
	// lwz r3,112(r24)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r24.u32 + 112);
loc_8A048DD4:
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// stw r3,112(r24)
	REX_STORE_U32(ctx.r24.u32 + 112, ctx.r3.u32);
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// blt cr6,0x8a048d04
	if (ctx.cr6.lt) goto loc_8A048D04;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8a0c2368
	__restgprlr_16(ctx, base);
	return;
loc_8A048DF8:
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,15
	ctx.r9.s64 = 15;
	// ori r8,r11,16384
	ctx.r8.u64 = ctx.r11.u64 | 16384;
	// stwx r10,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r10.u32);
	// stwx r9,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r9.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stwx r8,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r8.u32);
	// bl 0x89ffbed8
	ctx.lr = 0x8A048E1C;
	sub_89FFBED8(ctx, base);
	// addi r7,r30,160
	ctx.r7.s64 = ctx.r30.s64 + 160;
	// li r6,-1
	ctx.r6.s64 = -1;
	// sthx r6,r31,r7
	REX_STORE_U16(ctx.r31.u32 + ctx.r7.u32, ctx.r6.u16);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8a0c2368
	__restgprlr_16(ctx, base);
	return;
loc_8A048E30:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x89ffc2b8
	ctx.lr = 0x8A048E38;
	sub_89FFC2B8(ctx, base);
	// extsh r29,r3
	ctx.r29.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// blt cr6,0x8a0482dc
	if (ctx.cr6.lt) goto loc_8A0482DC;
	// bl 0x8a048018
	ctx.lr = 0x8A048E50;
	sub_8A048018(ctx, base);
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
	// lwzx r9,r31,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
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
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwzx r8,r31,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// stwx r7,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r7.u32);
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// add r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r10,r7
	ctx.r5.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r6,4(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// stwx r6,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r6.u32);
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,4(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stwx r5,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r5.u32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// stwx r11,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8a0c2368
	__restgprlr_16(ctx, base);
	return;
loc_8A048F0C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x89ffc2b8
	ctx.lr = 0x8A048F14;
	sub_89FFC2B8(ctx, base);
	// extsh r29,r3
	ctx.r29.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// blt cr6,0x8a0482dc
	if (ctx.cr6.lt) goto loc_8A0482DC;
	// bl 0x8a048018
	ctx.lr = 0x8A048F2C;
	sub_8A048018(ctx, base);
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
	// beq cr6,0x8a049b84
	if (ctx.cr6.eq) goto loc_8A049B84;
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8a048fe8
	if (!ctx.cr6.eq) goto loc_8A048FE8;
	// addi r9,r30,192
	ctx.r9.s64 = ctx.r30.s64 + 192;
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
	// beq cr6,0x8a048fe8
	if (ctx.cr6.eq) goto loc_8A048FE8;
	// addi r9,r30,60
	ctx.r9.s64 = ctx.r30.s64 + 60;
	// li r7,0
	ctx.r7.s64 = 0;
	// lis r8,-30184
	ctx.r8.s64 = -1978138624;
	// stwx r7,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r7.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r10,r8,-31224
	ctx.r10.s64 = ctx.r8.s64 + -31224;
	// lwzx r6,r31,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// neg r4,r6
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r6.u64);
	// andc r11,r4,r6
	ctx.r11.u64 = ctx.r4.u64 & ~ctx.r6.u64;
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbzx r9,r10,r5
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r5.u32);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// stwx r8,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r8.u32);
	// bl 0x89ffbed8
	ctx.lr = 0x8A048FC0;
	sub_89FFBED8(ctx, base);
	// lwzx r5,r31,r30
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// addi r7,r30,160
	ctx.r7.s64 = ctx.r30.s64 + 160;
	// li r6,1
	ctx.r6.s64 = 1;
	// rlwinm r4,r5,0,18,16
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// li r3,45
	ctx.r3.s64 = 45;
	// stwx r4,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r4.u32);
	// sthx r6,r31,r7
	REX_STORE_U16(ctx.r31.u32 + ctx.r7.u32, ctx.r6.u16);
	// bl 0x8a017608
	ctx.lr = 0x8A048FE0;
	sub_8A017608(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8a0c2368
	__restgprlr_16(ctx, base);
	return;
loc_8A048FE8:
	// addi r9,r30,183
	ctx.r9.s64 = ctx.r30.s64 + 183;
	// lbzx r10,r31,r9
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// stbx r8,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r8.u8);
	// cmplwi cr6,r8,2
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 2, ctx.xer);
	// blt cr6,0x8a049b84
	if (ctx.cr6.lt) goto loc_8A049B84;
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r7,r30,28
	ctx.r7.s64 = ctx.r30.s64 + 28;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// stbx r6,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r6.u8);
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// clrlwi r10,r5,28
	ctx.r10.u64 = ctx.r5.u32 & 0xF;
	// addi r3,r30,20
	ctx.r3.s64 = ctx.r30.s64 + 20;
	// stwx r10,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwzx r10,r31,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r5,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r6,r30,36
	ctx.r6.s64 = ctx.r30.s64 + 36;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// lwzx r8,r7,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// stwx r8,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r8.u32);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r5,4(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stwx r5,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r5.u32);
	// lwz r4,4(r7)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stwx r4,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r4.u32);
	// lwz r3,8(r8)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// stwx r3,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r3.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8a0c2368
	__restgprlr_16(ctx, base);
	return;
loc_8A0490A4:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x89ffc2b8
	ctx.lr = 0x8A0490AC;
	sub_89FFC2B8(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// blt cr6,0x8a0482dc
	if (ctx.cr6.lt) goto loc_8A0482DC;
	// bl 0x8a048018
	ctx.lr = 0x8A0490C4;
	sub_8A048018(ctx, base);
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
	// beq cr6,0x8a049b84
	if (ctx.cr6.eq) goto loc_8A049B84;
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
	// blt cr6,0x8a049b84
	if (ctx.cr6.lt) goto loc_8A049B84;
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// li r21,0
	ctx.r21.s64 = 0;
	// stbx r21,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r21.u8);
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8a0492a8
	if (ctx.cr6.eq) goto loc_8A0492A8;
	// cmplwi cr6,r10,15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 15, ctx.xer);
	// addi r10,r30,160
	ctx.r10.s64 = ctx.r30.s64 + 160;
	// beq cr6,0x8a0491bc
	if (ctx.cr6.eq) goto loc_8A0491BC;
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
	// stwx r9,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// add r3,r9,r7
	ctx.r3.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// lwzx r8,r3,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwx r8,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r8.u32);
	// lwz r9,4(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stwx r9,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r9.u32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,4(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stwx r8,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r8.u32);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r5,8(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// stwx r5,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r5.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8a0c2368
	__restgprlr_16(ctx, base);
	return;
loc_8A0491BC:
	// lhzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bgt cr6,0x8a049260
	if (ctx.cr6.gt) goto loc_8A049260;
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r7,r30,28
	ctx.r7.s64 = ctx.r30.s64 + 28;
	// addi r5,r30,16
	ctx.r5.s64 = ctx.r30.s64 + 16;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r9,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwzx r10,r31,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r29,r7,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// lwzx r7,r29,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r8,r30,32
	ctx.r8.s64 = ctx.r30.s64 + 32;
	// add r30,r9,r10
	ctx.r30.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r7,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r7.u32);
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// stwx r11,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r11.u32);
	// lwz r10,4(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// stwx r10,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r10.u32);
	// lwz r9,8(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// stwx r9,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8a0c2368
	__restgprlr_16(ctx, base);
	return;
loc_8A049260:
	// addi r9,r30,60
	ctx.r9.s64 = ctx.r30.s64 + 60;
	// stwx r21,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r21.u32);
	// lis r8,-30184
	ctx.r8.s64 = -1978138624;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r10,r8,-31224
	ctx.r10.s64 = ctx.r8.s64 + -31224;
	// lwzx r7,r31,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r6,r10,2
	ctx.r6.s64 = ctx.r10.s64 + 2;
	// neg r5,r7
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r7.u64);
	// andc r4,r5,r7
	ctx.r4.u64 = ctx.r5.u64 & ~ctx.r7.u64;
	// rlwinm r11,r4,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbzx r10,r11,r6
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// stwx r9,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r9.u32);
	// bl 0x89ffbed8
	ctx.lr = 0x8A0492A0;
	sub_89FFBED8(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8a0c2368
	__restgprlr_16(ctx, base);
	return;
loc_8A0492A8:
	// addi r10,r30,160
	ctx.r10.s64 = ctx.r30.s64 + 160;
	// lhzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8a049350
	if (!ctx.cr6.gt) goto loc_8A049350;
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
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r29,r7,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwzx r7,r29,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r7.u32);
	// add r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r30,32
	ctx.r7.s64 = ctx.r30.s64 + 32;
	// lwz r5,4(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r5.u32);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r5,4(r8)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// stwx r5,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r5.u32);
	// lwz r3,8(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// stwx r3,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r3.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8a0c2368
	__restgprlr_16(ctx, base);
	return;
loc_8A049350:
	// addi r10,r30,60
	ctx.r10.s64 = ctx.r30.s64 + 60;
	// stwx r21,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r21.u32);
	// lis r9,-30184
	ctx.r9.s64 = -1978138624;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r8,r9,-31224
	ctx.r8.s64 = ctx.r9.s64 + -31224;
	// lwzx r7,r31,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// neg r6,r7
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r7.u64);
	// andc r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 & ~ctx.r7.u64;
	// rlwinm r11,r5,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbzx r11,r4,r8
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r8.u32);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// stwx r10,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r10.u32);
	// bl 0x89ffbed8
	ctx.lr = 0x8A04938C;
	sub_89FFBED8(ctx, base);
	// lwzx r9,r31,r30
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// ori r8,r9,16384
	ctx.r8.u64 = ctx.r9.u64 | 16384;
	// stwx r8,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r8.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8a0c2368
	__restgprlr_16(ctx, base);
	return;
loc_8A0493A0:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x89ffc2b8
	ctx.lr = 0x8A0493A8;
	sub_89FFC2B8(ctx, base);
	// extsh r28,r3
	ctx.r28.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// blt cr6,0x8a0482dc
	if (ctx.cr6.lt) goto loc_8A0482DC;
	// bl 0x8a048018
	ctx.lr = 0x8A0493C0;
	sub_8A048018(ctx, base);
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
	// bne cr6,0x8a0493f4
	if (!ctx.cr6.eq) goto loc_8A0493F4;
	// addi r11,r30,180
	ctx.r11.s64 = ctx.r30.s64 + 180;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// clrlwi r9,r10,25
	ctx.r9.u64 = ctx.r10.u32 & 0x7F;
	// stbx r9,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8a0c2368
	__restgprlr_16(ctx, base);
	return;
loc_8A0493F4:
	// addi r29,r30,12
	ctx.r29.s64 = ctx.r30.s64 + 12;
	// lwzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8a049480
	if (!ctx.cr6.eq) goto loc_8A049480;
	// mulli r11,r28,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(208));
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// addi r9,r30,192
	ctx.r9.s64 = ctx.r30.s64 + 192;
	// lbzx r6,r11,r10
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lbzx r5,r31,r9
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// and r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 & ctx.r5.u64;
	// extsb r11,r4
	ctx.r11.s64 = ctx.r4.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8a049480
	if (!ctx.cr6.eq) goto loc_8A049480;
	// addi r10,r30,60
	ctx.r10.s64 = ctx.r30.s64 + 60;
	// lis r9,-30184
	ctx.r9.s64 = -1978138624;
	// li r8,15
	ctx.r8.s64 = 15;
	// addi r11,r9,-31224
	ctx.r11.s64 = ctx.r9.s64 + -31224;
	// stwx r8,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r8.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwzx r7,r31,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// neg r5,r7
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r7.u64);
	// andc r4,r5,r7
	ctx.r4.u64 = ctx.r5.u64 & ~ctx.r7.u64;
	// rlwinm r11,r4,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbzx r10,r11,r6
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// stwx r9,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r9.u32);
	// bl 0x89ffbed8
	ctx.lr = 0x8A04946C;
	sub_89FFBED8(ctx, base);
	// addi r8,r30,160
	ctx.r8.s64 = ctx.r30.s64 + 160;
	// li r7,-1
	ctx.r7.s64 = -1;
	// sthx r7,r31,r8
	REX_STORE_U16(ctx.r31.u32 + ctx.r8.u32, ctx.r7.u16);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8a0c2368
	__restgprlr_16(ctx, base);
	return;
loc_8A049480:
	// lwzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// addi r9,r30,28
	ctx.r9.s64 = ctx.r30.s64 + 28;
	// addi r6,r30,16
	ctx.r6.s64 = ctx.r30.s64 + 16;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// addi r28,r30,20
	ctx.r28.s64 = ctx.r30.s64 + 20;
	// clrlwi r10,r5,28
	ctx.r10.u64 = ctx.r5.u32 & 0xF;
	// lwzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r27,r30,36
	ctx.r27.s64 = ctx.r30.s64 + 36;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r10,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u32);
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwzx r9,r31,r29
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r4,r3,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r4.u32);
	// add r3,r9,r7
	ctx.r3.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r26,r30,32
	ctx.r26.s64 = ctx.r30.s64 + 32;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,8
	ctx.r5.s64 = 8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r6,4(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stwx r6,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r6.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stwx r10,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r10.u32);
	// lwz r9,8(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// stwx r9,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r9.u32);
	// bl 0x89ffe588
	ctx.lr = 0x8A049520;
	sub_89FFE588(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8a049b84
	if (ctx.cr6.eq) goto loc_8A049B84;
	// lis r11,-30103
	ctx.r11.s64 = -1972830208;
	// lis r10,-30210
	ctx.r10.s64 = -1979842560;
	// addi r24,r11,-31664
	ctx.r24.s64 = ctx.r11.s64 + -31664;
	// addi r25,r30,52
	ctx.r25.s64 = ctx.r30.s64 + 52;
	// li r27,0
	ctx.r27.s64 = 0;
	// lis r26,74
	ctx.r26.s64 = 4849664;
	// addi r28,r10,9016
	ctx.r28.s64 = ctx.r10.s64 + 9016;
	// lwz r3,116(r24)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r24.u32 + 116);
loc_8A049548:
	// lwzx r10,r31,r29
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r30,48
	ctx.r9.s64 = ctx.r30.s64 + 48;
	// lwzx r8,r31,r25
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r25.u32);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r6,r7,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// lwzx r6,r31,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r4,r11,128
	ctx.r4.s64 = ctx.r11.s64 + 128;
	// rlwinm r5,r11,1,22,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x3FE;
	// rlwinm r9,r4,1,22,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x3FE;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// lhzx r7,r5,r28
	ctx.r7.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r28.u32);
	// lhzx r4,r9,r28
	ctx.r4.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r28.u32);
	// rotlwi r5,r7,16
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 16);
	// rotlwi r9,r4,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r4.u32, 16);
	// srawi r9,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 8;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// srawi r7,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 3;
	// srawi r9,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 8;
	// add r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// subf r4,r26,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r26.u64;
	// blt cr6,0x8a0495b8
	if (ctx.cr6.lt) goto loc_8A0495B8;
	// cmpwi cr6,r11,384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 384, ctx.xer);
	// ble cr6,0x8a0495c0
	if (!ctx.cr6.gt) goto loc_8A0495C0;
loc_8A0495B8:
	// subfic r11,r10,256
	ctx.xer.ca = ctx.r10.u32 <= 256;
	ctx.r11.u64 = static_cast<uint64_t>(256) - ctx.r10.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
loc_8A0495C0:
	// cmpwi cr6,r3,352
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 352, ctx.xer);
	// bge cr6,0x8a0495f0
	if (!ctx.cr6.lt) goto loc_8A0495F0;
	// clrlwi r11,r11,23
	ctx.r11.u64 = ctx.r11.u32 & 0x1FF;
	// lis r8,3
	ctx.r8.s64 = 196608;
	// addi r11,r11,-256
	ctx.r11.s64 = ctx.r11.s64 + -256;
	// li r6,116
	ctx.r6.s64 = 116;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r10,r11,256
	ctx.r10.s64 = ctx.r11.s64 + 256;
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// bl 0x8a08ac98
	ctx.lr = 0x8A0495EC;
	sub_8A08AC98(ctx, base);
	// lwz r3,116(r24)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r24.u32 + 116);
loc_8A0495F0:
	// addi r11,r27,1
	ctx.r11.s64 = ctx.r27.s64 + 1;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// stw r3,116(r24)
	REX_STORE_U32(ctx.r24.u32 + 116, ctx.r3.u32);
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// blt cr6,0x8a049548
	if (ctx.cr6.lt) goto loc_8A049548;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8a0c2368
	__restgprlr_16(ctx, base);
	return;
loc_8A049614:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x89ffc2b8
	ctx.lr = 0x8A04961C;
	sub_89FFC2B8(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8a049638
	if (!ctx.cr6.lt) goto loc_8A049638;
loc_8A049628:
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8a0c2368
	__restgprlr_16(ctx, base);
	return;
loc_8A049638:
	// addi r10,r30,150
	ctx.r10.s64 = ctx.r30.s64 + 150;
	// addi r9,r30,72
	ctx.r9.s64 = ctx.r30.s64 + 72;
	// li r21,0
	ctx.r21.s64 = 0;
	// lhzx r3,r31,r10
	ctx.r3.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// mulli r7,r3,208
	ctx.r7.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(208));
	// lhzx r6,r7,r9
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r9.u32);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8a049660
	if (!ctx.cr6.eq) goto loc_8A049660;
	// stwx r21,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r21.u32);
loc_8A049660:
	// mulli r29,r11,208
	ctx.r29.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// lis r10,-30210
	ctx.r10.s64 = -1979842560;
	// addi r9,r30,56
	ctx.r9.s64 = ctx.r30.s64 + 56;
	// addi r4,r10,9016
	ctx.r4.s64 = ctx.r10.s64 + 9016;
	// addi r10,r30,60
	ctx.r10.s64 = ctx.r30.s64 + 60;
	// lwzx r11,r29,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// addi r8,r30,48
	ctx.r8.s64 = ctx.r30.s64 + 48;
	// addi r6,r30,48
	ctx.r6.s64 = ctx.r30.s64 + 48;
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// lwzx r5,r31,r9
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r27,r30,52
	ctx.r27.s64 = ctx.r30.s64 + 52;
	// lwzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// srawi r10,r5,4
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 4;
	// lwzx r5,r29,r8
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r8.u32);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// srawi r9,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 4;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// rlwinm r8,r8,1,22,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x3FE;
	// addi r7,r11,128
	ctx.r7.s64 = ctx.r11.s64 + 128;
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// rlwinm r28,r7,1,22,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x3FE;
	// addi r7,r30,52
	ctx.r7.s64 = ctx.r30.s64 + 52;
	// lhzx r8,r8,r4
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r4.u32);
	// addi r26,r30,68
	ctx.r26.s64 = ctx.r30.s64 + 68;
	// addi r24,r30,68
	ctx.r24.s64 = ctx.r30.s64 + 68;
	// extsh r23,r8
	ctx.r23.s64 = ctx.r8.s16;
	// lwzx r8,r31,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lhzx r4,r28,r4
	ctx.r4.u64 = REX_LOAD_U16(ctx.r28.u32 + ctx.r4.u32);
	// addi r22,r30,200
	ctx.r22.s64 = ctx.r30.s64 + 200;
	// mullw r28,r23,r9
	ctx.r28.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r9.s32);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// mullw r23,r23,r10
	ctx.r23.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r10.s32);
	// mullw r10,r4,r10
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// srawi r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// srawi r28,r28,8
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0xFF) != 0);
	ctx.r28.s64 = ctx.r28.s32 >> 8;
	// mullw r4,r4,r9
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// subf r10,r28,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r28.u64;
	// addi r20,r8,1
	ctx.r20.s64 = ctx.r8.s64 + 1;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r19,r30,28
	ctx.r19.s64 = ctx.r30.s64 + 28;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r28,r30,189
	ctx.r28.s64 = ctx.r30.s64 + 189;
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// srawi r10,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 8;
	// add r8,r9,r5
	ctx.r8.u64 = ctx.r9.u64 + ctx.r5.u64;
	// srawi r9,r23,8
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r23.s32 >> 8;
	// stwx r8,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r8.u32);
	// addi r23,r30,200
	ctx.r23.s64 = ctx.r30.s64 + 200;
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbzx r4,r31,r28
	ctx.r4.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// clrlwi r9,r20,28
	ctx.r9.u64 = ctx.r20.u32 & 0xF;
	// addi r20,r30,16
	ctx.r20.s64 = ctx.r30.s64 + 16;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r18,r30,20
	ctx.r18.s64 = ctx.r30.s64 + 20;
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwzx r10,r31,r19
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r19.u32);
	// addi r19,r30,36
	ctx.r19.s64 = ctx.r30.s64 + 36;
	// rlwinm r17,r5,2,0,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r29,r27
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r27.u32);
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// stwx r8,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r8.u32);
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwzx r5,r29,r26
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r26.u32);
	// addi r16,r30,32
	ctx.r16.s64 = ctx.r30.s64 + 32;
	// stwx r5,r31,r24
	REX_STORE_U32(ctx.r31.u32 + ctx.r24.u32, ctx.r5.u32);
	// lbzx r5,r29,r22
	ctx.r5.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r22.u32);
	// stbx r5,r31,r23
	REX_STORE_U8(ctx.r31.u32 + ctx.r23.u32, ctx.r5.u8);
	// rlwinm r5,r8,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// stwx r9,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwzx r27,r17,r10
	ctx.r27.u64 = REX_LOAD_U32(ctx.r17.u32 + ctx.r10.u32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r27,r31,r20
	REX_STORE_U32(ctx.r31.u32 + ctx.r20.u32, ctx.r27.u32);
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// add r27,r8,r10
	ctx.r27.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r5,r9,r5
	ctx.r5.u64 = ctx.r9.u64 + ctx.r5.u64;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r9,r31,r18
	REX_STORE_U32(ctx.r31.u32 + ctx.r18.u32, ctx.r9.u32);
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// stwx r11,r31,r19
	REX_STORE_U32(ctx.r31.u32 + ctx.r19.u32, ctx.r11.u32);
	// lwz r10,8(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// stwx r10,r31,r16
	REX_STORE_U32(ctx.r31.u32 + ctx.r16.u32, ctx.r10.u32);
	// blt cr6,0x8a04996c
	if (ctx.cr6.lt) goto loc_8A04996C;
	// beq cr6,0x8a0498dc
	if (ctx.cr6.eq) goto loc_8A0498DC;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// bge cr6,0x8a049b84
	if (!ctx.cr6.lt) goto loc_8A049B84;
	// addi r9,r30,185
	ctx.r9.s64 = ctx.r30.s64 + 185;
	// addi r10,r30,184
	ctx.r10.s64 = ctx.r30.s64 + 184;
	// lbzx r8,r31,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// lbzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r5,r11,2
	ctx.r5.s64 = ctx.r11.s64 + 2;
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// rlwinm r4,r5,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// stbx r11,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u8);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x8a04989c
	if (ctx.cr6.eq) goto loc_8A04989C;
	// lis r8,-30137
	ctx.r8.s64 = -1975058432;
	// lwzx r5,r31,r7
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// lis r7,16838
	ctx.r7.s64 = 1103495168;
	// lwzx r4,r31,r6
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// ori r6,r7,20077
	ctx.r6.u64 = ctx.r7.u64 | 20077;
	// addi r7,r9,14
	ctx.r7.s64 = ctx.r9.s64 + 14;
	// lwz r10,-916(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + -916);
	// addi r3,r30,158
	ctx.r3.s64 = ctx.r30.s64 + 158;
	// addi r9,r30,180
	ctx.r9.s64 = ctx.r30.s64 + 180;
	// mullw r11,r10,r6
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// lhzx r6,r31,r3
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r3.u32);
	// lbzx r3,r31,r9
	ctx.r3.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// extsh r10,r6
	ctx.r10.s64 = ctx.r6.s16;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r11,-916(r8)
	REX_STORE_U32(ctx.r8.u32 + -916, ctx.r11.u32);
	// lis r8,-30184
	ctx.r8.s64 = -1978138624;
	// srawi r6,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 16;
	// addi r8,r8,-31136
	ctx.r8.s64 = ctx.r8.s64 + -31136;
	// clrlwi r11,r6,17
	ctx.r11.u64 = ctx.r6.u32 & 0x7FFF;
	// rotlwi r6,r3,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r3.u32, 2);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r7,13,0,18
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 13) & 0xFFFFE000;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// rlwinm r11,r11,17,15,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1FFFF;
	// lwzx r8,r6,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,-3
	ctx.r10.s64 = ctx.r11.s64 + -3;
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// bl 0x8a0b0580
	ctx.lr = 0x8A049894;
	sub_8A0B0580(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8a0c2368
	__restgprlr_16(ctx, base);
	return;
loc_8A04989C:
	// addi r11,r30,193
	ctx.r11.s64 = ctx.r30.s64 + 193;
	// addi r9,r30,192
	ctx.r9.s64 = ctx.r30.s64 + 192;
	// lbzx r8,r29,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// lbzx r7,r31,r9
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// extsb r6,r8
	ctx.r6.s64 = ctx.r8.s8;
	// extsb r5,r7
	ctx.r5.s64 = ctx.r7.s8;
	// andc r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 & ~ctx.r5.u64;
	// stbx r4,r29,r11
	REX_STORE_U8(ctx.r29.u32 + ctx.r11.u32, ctx.r4.u8);
	// lbzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// lbzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// stbx r8,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u8);
	// stbx r7,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r7.u8);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8a0c2368
	__restgprlr_16(ctx, base);
	return;
loc_8A0498DC:
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
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
	// bne cr6,0x8a049910
	if (!ctx.cr6.eq) goto loc_8A049910;
	// stbx r21,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r21.u8);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8a0c2368
	__restgprlr_16(ctx, base);
	return;
loc_8A049910:
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,50
	ctx.r4.s64 = 50;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x89ffe588
	ctx.lr = 0x8A049920;
	sub_89FFE588(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8a049b84
	if (ctx.cr6.eq) goto loc_8A049B84;
	// addi r10,r30,185
	ctx.r10.s64 = ctx.r30.s64 + 185;
	// addi r9,r30,158
	ctx.r9.s64 = ctx.r30.s64 + 158;
	// addi r7,r30,193
	ctx.r7.s64 = ctx.r30.s64 + 193;
	// addi r8,r30,158
	ctx.r8.s64 = ctx.r30.s64 + 158;
	// addi r11,r30,193
	ctx.r11.s64 = ctx.r30.s64 + 193;
	// stbx r21,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r21.u8);
	// lhzx r4,r29,r9
	ctx.r4.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r9.u32);
	// lbzx r5,r31,r7
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r7.u32);
	// sthx r4,r31,r8
	REX_STORE_U16(ctx.r31.u32 + ctx.r8.u32, ctx.r4.u16);
	// lbzx r10,r29,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// or r9,r5,r10
	ctx.r9.u64 = ctx.r5.u64 | ctx.r10.u64;
	// stbx r9,r29,r11
	REX_STORE_U8(ctx.r29.u32 + ctx.r11.u32, ctx.r9.u8);
	// lbzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stbx r6,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r6.u8);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8a0c2368
	__restgprlr_16(ctx, base);
	return;
loc_8A04996C:
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// mulli r11,r11,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lbzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// addi r8,r30,192
	ctx.r8.s64 = ctx.r30.s64 + 192;
	// extsb r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	// lbzx r6,r31,r8
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// and r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 & ctx.r10.u64;
	// extsb r9,r5
	ctx.r9.s64 = ctx.r5.s8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8a0499b4
	if (!ctx.cr6.eq) goto loc_8A0499B4;
	// addi r9,r30,196
	ctx.r9.s64 = ctx.r30.s64 + 196;
	// lbzx r8,r11,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// and r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 & ctx.r10.u64;
	// rlwinm r5,r6,0,27,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8a049b84
	if (ctx.cr6.eq) goto loc_8A049B84;
loc_8A0499B4:
	// addi r8,r30,181
	ctx.r8.s64 = ctx.r30.s64 + 181;
	// addi r9,r30,184
	ctx.r9.s64 = ctx.r30.s64 + 184;
	// addi r7,r30,197
	ctx.r7.s64 = ctx.r30.s64 + 197;
	// addi r6,r30,180
	ctx.r6.s64 = ctx.r30.s64 + 180;
	// addi r5,r4,1
	ctx.r5.s64 = ctx.r4.s64 + 1;
	// stbx r21,r31,r8
	REX_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r21.u8);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// stbx r21,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r21.u8);
	// lbzx r3,r11,r7
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// stbx r5,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r5.u8);
	// stbx r3,r31,r6
	REX_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r3.u8);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8a0c2368
	__restgprlr_16(ctx, base);
	return;
loc_8A0499E8:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x89ffc2b8
	ctx.lr = 0x8A0499F0;
	sub_89FFC2B8(ctx, base);
	// extsh r29,r3
	ctx.r29.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x8a049628
	if (ctx.cr6.lt) goto loc_8A049628;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8a048018
	ctx.lr = 0x8A049A08;
	sub_8A048018(ctx, base);
	// lwzx r8,r31,r30
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// mulli r10,r29,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(208));
	// rlwinm r11,r8,0,2,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// addi r9,r30,8
	ctx.r9.s64 = ctx.r30.s64 + 8;
	// stwx r11,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u32);
	// lwzx r7,r10,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r7,3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3, ctx.xer);
	// bne cr6,0x8a049a3c
	if (!ctx.cr6.eq) goto loc_8A049A3C;
	// addi r9,r30,12
	ctx.r9.s64 = ctx.r30.s64 + 12;
	// lwzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8a049a40
	if (ctx.cr6.eq) goto loc_8A049A40;
loc_8A049A3C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8A049A40:
	// addi r9,r30,188
	ctx.r9.s64 = ctx.r30.s64 + 188;
	// rlwinm r10,r10,30,0,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0xC0000000;
	// addi r7,r30,150
	ctx.r7.s64 = ctx.r30.s64 + 150;
	// or r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 | ctx.r11.u64;
	// lbzx r10,r31,r9
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// stwx r6,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
	// lhzx r11,r31,r7
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r7.u32);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x8a049a74
	if (ctx.cr6.lt) goto loc_8A049A74;
	// beq cr6,0x8a049a94
	if (ctx.cr6.eq) goto loc_8A049A94;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8a0c2368
	__restgprlr_16(ctx, base);
	return;
loc_8A049A74:
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// addi r7,r30,72
	ctx.r7.s64 = ctx.r30.s64 + 72;
	// mulli r6,r8,208
	ctx.r6.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(208));
	// lhzx r5,r6,r7
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r7.u32);
	// addi r4,r30,72
	ctx.r4.s64 = ctx.r30.s64 + 72;
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// stbx r3,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r3.u8);
	// sthx r5,r31,r4
	REX_STORE_U16(ctx.r31.u32 + ctx.r4.u32, ctx.r5.u16);
loc_8A049A94:
	// lis r10,-30137
	ctx.r10.s64 = -1975058432;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// lis r8,16838
	ctx.r8.s64 = 1103495168;
	// mulli r7,r9,208
	ctx.r7.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(208));
	// lwz r11,-916(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -916);
	// ori r6,r8,20077
	ctx.r6.u64 = ctx.r8.u64 | 20077;
	// addi r5,r30,72
	ctx.r5.s64 = ctx.r30.s64 + 72;
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// lhzx r4,r7,r5
	ctx.r4.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r5.u32);
	// addi r3,r30,72
	ctx.r3.s64 = ctx.r30.s64 + 72;
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r11,-916(r10)
	REX_STORE_U32(ctx.r10.u32 + -916, ctx.r11.u32);
	// rlwinm r7,r9,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lhzx r6,r31,r3
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r3.u32);
	// srawi r5,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 16;
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// rlwinm r9,r5,20,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 20) & 0x7;
	// divw r11,r7,r4
	ctx.r11.u64 = uint32_t((ctx.r4.s32 && !(ctx.r7.s32 == INT32_MIN && ctx.r4.s32 == -1)) ? ctx.r7.s32 / ctx.r4.s32 : 0);
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r6,r30,16
	ctx.r6.s64 = ctx.r30.s64 + 16;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// twllei r4,0
	if (ctx.r4.s32 == 0 || ctx.r4.u32 < 0u) ppc_trap(ctx, base, 0);
	// add r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwzx r11,r31,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// addi r5,r30,20
	ctx.r5.s64 = ctx.r30.s64 + 20;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// lwzx r29,r8,r11
	ctx.r29.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stwx r29,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r29.u32);
	// rotlwi r9,r7,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// lwzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// add r6,r8,r11
	ctx.r6.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// andc r4,r4,r7
	ctx.r4.u64 = ctx.r4.u64 & ~ctx.r7.u64;
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// twlgei r4,-1
	if (ctx.r4.s32 == -1 || ctx.r4.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stwx r11,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u32);
	// lwz r10,4(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// stwx r10,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r10.u32);
	// lwz r9,8(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// stwx r9,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r9.u32);
loc_8A049B84:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8a0c2368
	__restgprlr_16(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8A06BB88) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8a0c2320
	ctx.lr = 0x8A06BB90;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30165
	ctx.r11.s64 = -1976893440;
	// lis r10,-30184
	ctx.r10.s64 = -1978138624;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r9,r10,-16200
	ctx.r9.s64 = ctx.r10.s64 + -16200;
	// li r3,1
	ctx.r3.s64 = 1;
	// lbz r11,13208(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 13208);
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
	// bl 0x89ffc148
	ctx.lr = 0x8A06BBC4;
	sub_89FFC148(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8a06bbd4
	if (!ctx.cr6.eq) goto loc_8A06BBD4;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8a0c2370
	__restgprlr_18(ctx, base);
	return;
loc_8A06BBD4:
	// lis r11,-30137
	ctx.r11.s64 = -1975058432;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lis r9,-30165
	ctx.r9.s64 = -1976893440;
	// lis r8,-30160
	ctx.r8.s64 = -1976565760;
	// addi r30,r9,13736
	ctx.r30.s64 = ctx.r9.s64 + 13736;
	// lis r7,-16208
	ctx.r7.s64 = -1062207488;
	// lhz r3,3704(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 3704);
	// addi r4,r30,100
	ctx.r4.s64 = ctx.r30.s64 + 100;
	// addi r28,r30,8
	ctx.r28.s64 = ctx.r30.s64 + 8;
	// extsh r5,r3
	ctx.r5.s64 = ctx.r3.s16;
	// lhz r9,29208(r8)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r8.u32 + 29208);
	// addi r6,r30,4
	ctx.r6.s64 = ctx.r30.s64 + 4;
	// mulli r31,r5,208
	ctx.r31.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(208));
	// stwx r10,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r10.u32);
	// stwx r10,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r10.u32);
	// stwx r9,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r9.u32);
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// ori r8,r7,260
	ctx.r8.u64 = ctx.r7.u64 | 260;
	// li r27,0
	ctx.r27.s64 = 0;
	// stwx r8,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r8.u32);
	// stwx r27,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r27.u32);
	// bl 0x89ffbe00
	ctx.lr = 0x8A06BC2C;
	sub_89FFBE00(ctx, base);
	// addi r7,r30,24
	ctx.r7.s64 = ctx.r30.s64 + 24;
	// addi r5,r30,76
	ctx.r5.s64 = ctx.r30.s64 + 76;
	// addi r4,r30,80
	ctx.r4.s64 = ctx.r30.s64 + 80;
	// addi r9,r30,52
	ctx.r9.s64 = ctx.r30.s64 + 52;
	// lis r3,-30137
	ctx.r3.s64 = -1975058432;
	// lwzx r11,r31,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// rlwinm r26,r26,16,0,15
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 16) & 0xFFFF0000;
	// li r10,512
	ctx.r10.s64 = 512;
	// lis r25,-30165
	ctx.r25.s64 = -1976893440;
	// addi r24,r30,48
	ctx.r24.s64 = ctx.r30.s64 + 48;
	// lhz r8,-1220(r3)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r3.u32 + -1220);
	// addi r3,r30,72
	ctx.r3.s64 = ctx.r30.s64 + 72;
	// addi r23,r30,158
	ctx.r23.s64 = ctx.r30.s64 + 158;
	// subfic r8,r8,512
	ctx.xer.ca = ctx.r8.u32 <= 512;
	ctx.r8.u64 = static_cast<uint64_t>(512) - ctx.r8.u64;
	// addi r22,r30,56
	ctx.r22.s64 = ctx.r30.s64 + 56;
	// addi r21,r30,60
	ctx.r21.s64 = ctx.r30.s64 + 60;
	// addi r20,r30,168
	ctx.r20.s64 = ctx.r30.s64 + 168;
	// addi r19,r30,204
	ctx.r19.s64 = ctx.r30.s64 + 204;
	// addi r30,r30,200
	ctx.r30.s64 = ctx.r30.s64 + 200;
	// li r6,116
	ctx.r6.s64 = 116;
	// lis r18,2
	ctx.r18.s64 = 131072;
	// lwzx r7,r31,r28
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// lhz r28,4(r29)
	ctx.r28.u64 = REX_LOAD_U16(ctx.r29.u32 + 4);
	// rlwinm r7,r7,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r29,8(r29)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// rotlwi r28,r28,16
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r28.u32, 16);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r7,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r7.u32);
	// lwz r5,8(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r5,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r5.u32);
	// lwz r4,12(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// extsh r7,r4
	ctx.r7.s64 = ctx.r4.s16;
	// stwx r26,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r26.u32);
	// lhzx r5,r31,r9
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r9.u32);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// subfc r9,r4,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r4.u32;
	ctx.r9.u64 = ctx.r10.u64 - ctx.r4.u64;
	// lbz r11,10463(r25)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r25.u32 + 10463);
	// eqv r5,r4,r10
	ctx.r5.u64 = ~(ctx.r4.u64 ^ ctx.r10.u64);
	// stwx r28,r31,r24
	REX_STORE_U32(ctx.r31.u32 + ctx.r24.u32, ctx.r28.u32);
	// mullw r4,r7,r8
	ctx.r4.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// stwx r29,r31,r22
	REX_STORE_U32(ctx.r31.u32 + ctx.r22.u32, ctx.r29.u32);
	// stwx r27,r31,r21
	REX_STORE_U32(ctx.r31.u32 + ctx.r21.u32, ctx.r27.u32);
	// stwx r18,r31,r20
	REX_STORE_U32(ctx.r31.u32 + ctx.r20.u32, ctx.r18.u32);
	// stbx r6,r31,r19
	REX_STORE_U8(ctx.r31.u32 + ctx.r19.u32, ctx.r6.u8);
	// stbx r6,r31,r30
	REX_STORE_U8(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u8);
	// rlwinm r10,r5,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// rlwinm r9,r4,24,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFFFF;
	// addze r8,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r8.s64 = temp.s64;
	// sthx r9,r31,r3
	REX_STORE_U16(ctx.r31.u32 + ctx.r3.u32, ctx.r9.u16);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// rlwinm r5,r8,8,23,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0x100;
	// sthx r5,r31,r23
	REX_STORE_U16(ctx.r31.u32 + ctx.r23.u32, ctx.r5.u16);
	// bne cr6,0x8a06bd24
	if (!ctx.cr6.eq) goto loc_8A06BD24;
	// lis r11,-30097
	ctx.r11.s64 = -1972436992;
	// lwz r11,248(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 248);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8a06bd24
	if (ctx.cr6.eq) goto loc_8A06BD24;
	// lis r10,-30097
	ctx.r10.s64 = -1972436992;
	// lwz r11,252(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 252);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,252(r10)
	REX_STORE_U32(ctx.r10.u32 + 252, ctx.r11.u32);
loc_8A06BD24:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8a0c2370
	__restgprlr_18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8A06C728) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8a0c2320
	ctx.lr = 0x8A06C730;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30165
	ctx.r11.s64 = -1976893440;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lbz r11,13208(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 13208);
	// extsb r31,r11
	ctx.r31.s64 = ctx.r11.s8;
	// bl 0x89ffc148
	ctx.lr = 0x8A06C74C;
	sub_89FFC148(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8a06c75c
	if (!ctx.cr6.eq) goto loc_8A06C75C;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8a0c2370
	__restgprlr_18(ctx, base);
	return;
loc_8A06C75C:
	// extsh r11,r31
	ctx.r11.s64 = ctx.r31.s16;
	// lis r8,-30194
	ctx.r8.s64 = -1978793984;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,-30137
	ctx.r9.s64 = -1975058432;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r29,r8,-9584
	ctx.r29.s64 = ctx.r8.s64 + -9584;
	// rlwinm r25,r7,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r29,4
	ctx.r5.s64 = ctx.r29.s64 + 4;
	// lhz r3,3704(r9)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r9.u32 + 3704);
	// lis r6,-30165
	ctx.r6.s64 = -1976893440;
	// lis r4,-30160
	ctx.r4.s64 = -1976565760;
	// addi r30,r6,13736
	ctx.r30.s64 = ctx.r6.s64 + 13736;
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// lwzx r10,r25,r5
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r5.u32);
	// addi r9,r30,4
	ctx.r9.s64 = ctx.r30.s64 + 4;
	// mulli r31,r11,208
	ctx.r31.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lhz r5,29208(r4)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r4.u32 + 29208);
	// stwx r5,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r5.u32);
	// addi r8,r30,100
	ctx.r8.s64 = ctx.r30.s64 + 100;
	// addi r7,r30,12
	ctx.r7.s64 = ctx.r30.s64 + 12;
	// lis r6,-16208
	ctx.r6.s64 = -1062207488;
	// addi r28,r30,8
	ctx.r28.s64 = ctx.r30.s64 + 8;
	// ori r4,r6,260
	ctx.r4.u64 = ctx.r6.u64 | 260;
	// li r27,0
	ctx.r27.s64 = 0;
	// stwx r10,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r10.u32);
	// stwx r4,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r4.u32);
	// stwx r27,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r27.u32);
	// stwx r10,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r10.u32);
	// bl 0x89ffbe00
	ctx.lr = 0x8A06C7D0;
	sub_89FFBE00(ctx, base);
	// addi r7,r29,12
	ctx.r7.s64 = ctx.r29.s64 + 12;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// addi r6,r30,76
	ctx.r6.s64 = ctx.r30.s64 + 76;
	// addi r5,r30,80
	ctx.r5.s64 = ctx.r30.s64 + 80;
	// addi r9,r30,52
	ctx.r9.s64 = ctx.r30.s64 + 52;
	// lis r4,-30137
	ctx.r4.s64 = -1975058432;
	// lwzx r11,r31,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// rlwinm r3,r26,16,0,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 16) & 0xFFFF0000;
	// li r10,512
	ctx.r10.s64 = 512;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// addi r26,r30,48
	ctx.r26.s64 = ctx.r30.s64 + 48;
	// lhz r8,-1220(r4)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r4.u32 + -1220);
	// addi r4,r30,72
	ctx.r4.s64 = ctx.r30.s64 + 72;
	// addi r24,r30,158
	ctx.r24.s64 = ctx.r30.s64 + 158;
	// subfic r8,r8,512
	ctx.xer.ca = ctx.r8.u32 <= 512;
	ctx.r8.u64 = static_cast<uint64_t>(512) - ctx.r8.u64;
	// addi r23,r30,56
	ctx.r23.s64 = ctx.r30.s64 + 56;
	// addi r22,r30,60
	ctx.r22.s64 = ctx.r30.s64 + 60;
	// addi r21,r30,168
	ctx.r21.s64 = ctx.r30.s64 + 168;
	// lis r19,-30165
	ctx.r19.s64 = -1976893440;
	// addi r20,r30,204
	ctx.r20.s64 = ctx.r30.s64 + 204;
	// addi r30,r30,200
	ctx.r30.s64 = ctx.r30.s64 + 200;
	// lwzx r28,r31,r28
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// lhzx r18,r25,r7
	ctx.r18.u64 = REX_LOAD_U16(ctx.r25.u32 + ctx.r7.u32);
	// rlwinm r7,r28,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r29,r25,r29
	ctx.r29.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r29.u32);
	// rotlwi r28,r18,16
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r18.u32, 16);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r7,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r7.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r6,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r6.u32);
	// lwz r5,12(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// extsh r7,r5
	ctx.r7.s64 = ctx.r5.s16;
	// stwx r3,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r3.u32);
	// lhzx r6,r31,r9
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r9.u32);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// subfc r3,r5,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r5.u32;
	ctx.r3.u64 = ctx.r10.u64 - ctx.r5.u64;
	// stwx r28,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r28.u32);
	// eqv r11,r5,r10
	ctx.r11.u64 = ~(ctx.r5.u64 ^ ctx.r10.u64);
	// stwx r29,r31,r23
	REX_STORE_U32(ctx.r31.u32 + ctx.r23.u32, ctx.r29.u32);
	// mullw r10,r7,r8
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// stwx r27,r31,r22
	REX_STORE_U32(ctx.r31.u32 + ctx.r22.u32, ctx.r27.u32);
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// lbz r11,10463(r19)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r19.u32 + 10463);
	// rlwinm r8,r10,24,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// addze r7,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r7.s64 = temp.s64;
	// lis r3,2
	ctx.r3.s64 = 131072;
	// sthx r8,r31,r4
	REX_STORE_U16(ctx.r31.u32 + ctx.r4.u32, ctx.r8.u16);
	// rlwinm r5,r7,8,23,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0x100;
	// li r10,116
	ctx.r10.s64 = 116;
	// stwx r3,r31,r21
	REX_STORE_U32(ctx.r31.u32 + ctx.r21.u32, ctx.r3.u32);
	// sthx r5,r31,r24
	REX_STORE_U16(ctx.r31.u32 + ctx.r24.u32, ctx.r5.u16);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// stbx r10,r31,r20
	REX_STORE_U8(ctx.r31.u32 + ctx.r20.u32, ctx.r10.u8);
	// stbx r10,r31,r30
	REX_STORE_U8(ctx.r31.u32 + ctx.r30.u32, ctx.r10.u8);
	// bne cr6,0x8a06c8d0
	if (!ctx.cr6.eq) goto loc_8A06C8D0;
	// lis r11,-30097
	ctx.r11.s64 = -1972436992;
	// lwz r11,248(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 248);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8a06c8d0
	if (ctx.cr6.eq) goto loc_8A06C8D0;
	// lis r10,-30097
	ctx.r10.s64 = -1972436992;
	// lwz r11,252(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 252);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,252(r10)
	REX_STORE_U32(ctx.r10.u32 + 252, ctx.r11.u32);
loc_8A06C8D0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8a0c2370
	__restgprlr_18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8A06D170) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30165
	ctx.r11.s64 = -1976893440;
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// addi r10,r11,13736
	ctx.r10.s64 = ctx.r11.s64 + 13736;
	// mulli r11,r9,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(208));
	// addi r5,r10,188
	ctx.r5.s64 = ctx.r10.s64 + 188;
	// li r4,0
	ctx.r4.s64 = 0;
	// lbzx r6,r11,r5
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 5, ctx.xer);
	// bgt cr6,0x8a06d2b0
	if (ctx.cr6.gt) goto loc_8A06D2B0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8a06d1cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8A06D1CC;
	// bdzf 4*cr6+eq,0x8a06d1e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8A06D1E4;
	// bdzf 4*cr6+eq,0x8a06d25c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8A06D25C;
	// bdzf 4*cr6+eq,0x8a06d1e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8A06D1E4;
	// bne cr6,0x8a06d288
	if (!ctx.cr6.eq) goto loc_8A06D288;
	// addi r9,r10,48
	ctx.r9.s64 = ctx.r10.s64 + 48;
	// lis r8,256
	ctx.r8.s64 = 16777216;
	// lwzx r7,r11,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// bgt cr6,0x8a06d2b0
	if (ctx.cr6.gt) goto loc_8A06D2B0;
	// b 0x8a06d2a4
	goto loc_8A06D2A4;
loc_8A06D1CC:
	// addi r8,r10,56
	ctx.r8.s64 = ctx.r10.s64 + 56;
	// lwzx r9,r11,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// addic. r9,r9,4096
	ctx.xer.ca = ctx.r9.u32 > 4294963199;
	ctx.r9.s64 = ctx.r9.s64 + 4096;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stwx r9,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u32);
	// bne 0x8a06d2b0
	if (!ctx.cr0.eq) goto loc_8A06D2B0;
	// b 0x8a06d2a4
	goto loc_8A06D2A4;
loc_8A06D1E4:
	// addi r7,r10,189
	ctx.r7.s64 = ctx.r10.s64 + 189;
	// lbzx r8,r11,r7
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// blt cr6,0x8a06d240
	if (ctx.cr6.lt) goto loc_8A06D240;
	// bne cr6,0x8a06d2b0
	if (!ctx.cr6.eq) goto loc_8A06D2B0;
	// addi r8,r10,183
	ctx.r8.s64 = ctx.r10.s64 + 183;
	// lbzx r9,r11,r8
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// clrlwi r3,r9,24
	ctx.r3.u64 = ctx.r9.u32 & 0xFF;
	// stbx r3,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r3.u8);
	// cmplwi cr6,r3,180
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 180, ctx.xer);
	// blt cr6,0x8a06d2b0
	if (ctx.cr6.lt) goto loc_8A06D2B0;
	// addi r9,r10,192
	ctx.r9.s64 = ctx.r10.s64 + 192;
	// stbx r4,r11,r7
	REX_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r4.u8);
	// stbx r4,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r4.u8);
	// addi r8,r6,1
	ctx.r8.s64 = ctx.r6.s64 + 1;
	// stbx r8,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r8.u8);
	// lbzx r7,r11,r9
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// extsb r3,r7
	ctx.r3.s64 = ctx.r7.s8;
	// rlwinm r8,r3,0,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFC;
	// stbx r8,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u8);
	// b 0x8a06d2b0
	goto loc_8A06D2B0;
loc_8A06D240:
	// addi r9,r10,192
	ctx.r9.s64 = ctx.r10.s64 + 192;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stbx r8,r11,r7
	REX_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r8.u8);
	// lbzx r3,r11,r9
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// ori r8,r3,3
	ctx.r8.u64 = ctx.r3.u64 | 3;
	// stbx r8,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u8);
	// b 0x8a06d2b0
	goto loc_8A06D2B0;
loc_8A06D25C:
	// addi r9,r10,183
	ctx.r9.s64 = ctx.r10.s64 + 183;
	// lbzx r8,r11,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// stbx r7,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r7.u8);
	// cmplwi cr6,r7,180
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 180, ctx.xer);
	// blt cr6,0x8a06d2b0
	if (ctx.cr6.lt) goto loc_8A06D2B0;
	// stbx r4,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r4.u8);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// addi r9,r6,1
	ctx.r9.s64 = ctx.r6.s64 + 1;
	// b 0x8a06d2ac
	goto loc_8A06D2AC;
loc_8A06D288:
	// addi r8,r10,56
	ctx.r8.s64 = ctx.r10.s64 + 56;
	// lis r7,-2
	ctx.r7.s64 = -131072;
	// lwzx r9,r11,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// addi r9,r9,-4096
	ctx.r9.s64 = ctx.r9.s64 + -4096;
	// stwx r9,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u32);
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x8a06d2b0
	if (!ctx.cr6.eq) goto loc_8A06D2B0;
loc_8A06D2A4:
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_8A06D2AC:
	// stbx r9,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r9.u8);
loc_8A06D2B0:
	// addi r9,r10,48
	ctx.r9.s64 = ctx.r10.s64 + 48;
	// addi r8,r10,56
	ctx.r8.s64 = ctx.r10.s64 + 56;
	// lwzx r7,r11,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r8,r11,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stwx r7,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r7.u32);
	// lhzx r6,r11,r9
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// addic. r9,r5,-160
	ctx.xer.ca = ctx.r5.u32 > 159;
	ctx.r9.s64 = ctx.r5.s64 + -160;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x8a06d2dc
	if (!ctx.cr0.lt) goto loc_8A06D2DC;
	// neg r9,r9
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r9.u64);
loc_8A06D2DC:
	// cmpwi cr6,r9,256
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 256, ctx.xer);
	// bgt cr6,0x8a06d318
	if (ctx.cr6.gt) goto loc_8A06D318;
	// addi r9,r10,52
	ctx.r9.s64 = ctx.r10.s64 + 52;
	// addi r8,r10,60
	ctx.r8.s64 = ctx.r10.s64 + 60;
	// lwzx r7,r11,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r8,r11,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stwx r7,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r7.u32);
	// lhzx r6,r11,r9
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// addic. r9,r5,-512
	ctx.xer.ca = ctx.r5.u32 > 511;
	ctx.r9.s64 = ctx.r5.s64 + -512;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x8a06d310
	if (!ctx.cr0.lt) goto loc_8A06D310;
	// neg r9,r9
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r9.u64);
loc_8A06D310:
	// cmpwi cr6,r9,208
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 208, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_8A06D318:
	// stwx r4,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8A06DDD0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8a0c234c
	ctx.lr = 0x8A06DDD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30184
	ctx.r11.s64 = -1978138624;
	// lis r9,-30113
	ctx.r9.s64 = -1973485568;
	// addi r10,r11,-15564
	ctx.r10.s64 = ctx.r11.s64 + -15564;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r9,-12672
	ctx.r29.s64 = ctx.r9.s64 + -12672;
	// lbz r11,-15564(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -15564);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8a06de6c
	if (ctx.cr6.eq) goto loc_8A06DE6C;
	// addi r31,r10,-4
	ctx.r31.s64 = ctx.r10.s64 + -4;
loc_8A06DE00:
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r9,7(r31)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + 7);
	// lbz r7,6(r31)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + 6);
	// addi r8,r29,-312
	ctx.r8.s64 = ctx.r29.s64 + -312;
	// add r6,r30,r10
	ctx.r6.u64 = ctx.r30.u64 + ctx.r10.u64;
	// lbz r10,5(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 5);
	// extsb r5,r9
	ctx.r5.s64 = ctx.r9.s8;
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// sth r5,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r5.u16);
	// li r6,32
	ctx.r6.s64 = 32;
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stb r7,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r7.u8);
	// li r9,-16
	ctx.r9.s64 = -16;
	// stw r3,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// li r8,-16
	ctx.r8.s64 = -16;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x8a015df0
	ctx.lr = 0x8A06DE50;
	sub_8A015DF0(ctx, base);
	// lbzu r10,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// lbz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 4);
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8a06de00
	if (!ctx.cr6.eq) goto loc_8A06DE00;
loc_8A06DE6C:
	// lis r11,-30194
	ctx.r11.s64 = -1978793984;
	// addi r5,r29,-312
	ctx.r5.s64 = ctx.r29.s64 + -312;
	// addi r30,r11,-10612
	ctx.r30.s64 = ctx.r11.s64 + -10612;
	// addi r4,r29,-1936
	ctx.r4.s64 = ctx.r29.s64 + -1936;
	// addi r6,r30,-128
	ctx.r6.s64 = ctx.r30.s64 + -128;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8a016db0
	ctx.lr = 0x8A06DE8C;
	sub_8A016DB0(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,10
	ctx.r9.s64 = 10;
	// stb r8,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r8.u8);
	// addi r11,r29,-1536
	ctx.r11.s64 = ctx.r29.s64 + -1536;
	// sth r9,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r9.u16);
	// li r10,232
	ctx.r10.s64 = 232;
	// li r9,-12
	ctx.r9.s64 = -12;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,-12
	ctx.r8.s64 = -12;
	// li r7,24
	ctx.r7.s64 = 24;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,68
	ctx.r3.s64 = 68;
	// bl 0x8a015df0
	ctx.lr = 0x8A06DEC8;
	sub_8A015DF0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r31,r29,-1536
	ctx.r31.s64 = ctx.r29.s64 + -1536;
loc_8A06DED0:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8a016db0
	ctx.lr = 0x8A06DEE4;
	sub_8A016DB0(ctx, base);
	// addi r11,r29,-1536
	ctx.r11.s64 = ctx.r29.s64 + -1536;
	// addi r31,r31,306
	ctx.r31.s64 = ctx.r31.s64 + 306;
	// addi r11,r11,1224
	ctx.r11.s64 = ctx.r11.s64 + 1224;
	// addi r4,r4,396
	ctx.r4.s64 = ctx.r4.s64 + 396;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8a06ded0
	if (ctx.cr6.lt) goto loc_8A06DED0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8a0c239c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8A06EEC0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8a0c2310
	ctx.lr = 0x8A06EEC8;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,260(r1)
	REX_STORE_U32(ctx.r1.u32 + 260, ctx.r3.u32);
	// li r3,43
	ctx.r3.s64 = 43;
	// stw r4,268(r1)
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r4.u32);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// stb r6,287(r1)
	REX_STORE_U8(ctx.r1.u32 + 287, ctx.r6.u8);
	// bl 0x8a015300
	ctx.lr = 0x8A06EEE4;
	sub_8A015300(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r31,r11,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x89ffc148
	ctx.lr = 0x8A06EEF4;
	sub_89FFC148(ctx, base);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// or r8,r9,r31
	ctx.r8.u64 = ctx.r9.u64 | ctx.r31.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8a06ef14
	if (ctx.cr6.eq) goto loc_8A06EF14;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8a0c2360
	__restgprlr_14(ctx, base);
	return;
loc_8A06EF14:
	// lis r11,-30137
	ctx.r11.s64 = -1975058432;
	// lis r10,-30165
	ctx.r10.s64 = -1976893440;
	// lis r9,-16208
	ctx.r9.s64 = -1062207488;
	// addi r30,r10,13736
	ctx.r30.s64 = ctx.r10.s64 + 13736;
	// ori r5,r9,260
	ctx.r5.u64 = ctx.r9.u64 | 260;
	// lhz r3,3704(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 3704);
	// addi r8,r30,4
	ctx.r8.s64 = ctx.r30.s64 + 4;
	// addi r6,r30,12
	ctx.r6.s64 = ctx.r30.s64 + 12;
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// addi r29,r30,8
	ctx.r29.s64 = ctx.r30.s64 + 8;
	// mulli r31,r7,208
	ctx.r31.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(208));
	// stwx r27,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r27.u32);
	// stwx r5,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r5.u32);
	// li r4,43
	ctx.r4.s64 = 43;
	// li r28,0
	ctx.r28.s64 = 0;
	// stwx r4,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r4.u32);
	// stwx r28,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r28.u32);
	// bl 0x89ffbe00
	ctx.lr = 0x8A06EF5C;
	sub_89FFBE00(ctx, base);
	// lis r8,-30137
	ctx.r8.s64 = -1975058432;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// lwz r7,260(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// addi r10,r30,100
	ctx.r10.s64 = ctx.r30.s64 + 100;
	// lwz r6,268(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// addi r5,r30,76
	ctx.r5.s64 = ctx.r30.s64 + 76;
	// add r4,r31,r10
	ctx.r4.u64 = ctx.r31.u64 + ctx.r10.u64;
	// addi r27,r30,80
	ctx.r27.s64 = ctx.r30.s64 + 80;
	// lwzx r9,r31,r3
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// addi r26,r30,200
	ctx.r26.s64 = ctx.r30.s64 + 200;
	// stw r4,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// addi r4,r30,204
	ctx.r4.s64 = ctx.r30.s64 + 204;
	// addi r25,r30,48
	ctx.r25.s64 = ctx.r30.s64 + 48;
	// addi r24,r30,52
	ctx.r24.s64 = ctx.r30.s64 + 52;
	// addi r23,r30,168
	ctx.r23.s64 = ctx.r30.s64 + 168;
	// addi r22,r30,158
	ctx.r22.s64 = ctx.r30.s64 + 158;
	// addi r21,r30,162
	ctx.r21.s64 = ctx.r30.s64 + 162;
	// addi r20,r30,56
	ctx.r20.s64 = ctx.r30.s64 + 56;
	// addi r19,r30,60
	ctx.r19.s64 = ctx.r30.s64 + 60;
	// addi r18,r30,68
	ctx.r18.s64 = ctx.r30.s64 + 68;
	// addi r17,r30,44
	ctx.r17.s64 = ctx.r30.s64 + 44;
	// addi r16,r30,104
	ctx.r16.s64 = ctx.r30.s64 + 104;
	// lis r15,-2
	ctx.r15.s64 = -131072;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// lwzx r29,r31,r29
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// addi r30,r30,72
	ctx.r30.s64 = ctx.r30.s64 + 72;
	// lhz r10,-1220(r8)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r8.u32 + -1220);
	// li r11,256
	ctx.r11.s64 = 256;
	// rlwinm r8,r29,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// ori r29,r15,32768
	ctx.r29.u64 = ctx.r15.u64 | 32768;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subfic r8,r10,512
	ctx.xer.ca = ctx.r10.u32 <= 512;
	ctx.r8.u64 = static_cast<uint64_t>(512) - ctx.r10.u64;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// ori r14,r3,32768
	ctx.r14.u64 = ctx.r3.u64 | 32768;
	// li r15,7
	ctx.r15.s64 = 7;
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// li r3,75
	ctx.r3.s64 = 75;
	// stwx r9,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r9.u32);
	// lwz r5,8(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stwx r5,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r5.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// lbz r10,287(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 287);
	// mullw r9,r5,r8
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r8.s32);
	// stwx r7,r31,r25
	REX_STORE_U32(ctx.r31.u32 + ctx.r25.u32, ctx.r7.u32);
	// stwx r6,r31,r24
	REX_STORE_U32(ctx.r31.u32 + ctx.r24.u32, ctx.r6.u32);
	// stwx r14,r31,r23
	REX_STORE_U32(ctx.r31.u32 + ctx.r23.u32, ctx.r14.u32);
	// sthx r11,r31,r22
	REX_STORE_U16(ctx.r31.u32 + ctx.r22.u32, ctx.r11.u16);
	// stbx r10,r31,r4
	REX_STORE_U8(ctx.r31.u32 + ctx.r4.u32, ctx.r10.u8);
	// stbx r10,r31,r26
	REX_STORE_U8(ctx.r31.u32 + ctx.r26.u32, ctx.r10.u8);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// sthx r28,r31,r21
	REX_STORE_U16(ctx.r31.u32 + ctx.r21.u32, ctx.r28.u16);
	// stwx r29,r31,r20
	REX_STORE_U32(ctx.r31.u32 + ctx.r20.u32, ctx.r29.u32);
	// rlwinm r8,r9,24,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// stwx r28,r31,r19
	REX_STORE_U32(ctx.r31.u32 + ctx.r19.u32, ctx.r28.u32);
	// stbx r15,r31,r18
	REX_STORE_U8(ctx.r31.u32 + ctx.r18.u32, ctx.r15.u8);
	// stwx r10,r31,r17
	REX_STORE_U32(ctx.r31.u32 + ctx.r17.u32, ctx.r10.u32);
	// stwx r11,r31,r16
	REX_STORE_U32(ctx.r31.u32 + ctx.r16.u32, ctx.r11.u32);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// sthx r8,r31,r30
	REX_STORE_U16(ctx.r31.u32 + ctx.r30.u32, ctx.r8.u16);
	// bl 0x8a017608
	ctx.lr = 0x8A06F054;
	sub_8A017608(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8a0c2360
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8A06FCF0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r8,-30160
	ctx.r8.s64 = -1976565760;
	// lis r7,-30160
	ctx.r7.s64 = -1976565760;
	// lis r6,-30165
	ctx.r6.s64 = -1976893440;
	// lis r5,-30159
	ctx.r5.s64 = -1976500224;
	// addi r9,r6,10592
	ctx.r9.s64 = ctx.r6.s64 + 10592;
	// lwz r11,30196(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 30196);
	// lis r4,-30137
	ctx.r4.s64 = -1975058432;
	// lbz r10,7290(r7)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r7.u32 + 7290);
	// lis r7,-30165
	ctx.r7.s64 = -1976893440;
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
	// sth r10,10472(r7)
	REX_STORE_U16(ctx.r7.u32 + 10472, ctx.r10.u16);
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
	// stw r11,30196(r8)
	REX_STORE_U32(ctx.r8.u32 + 30196, ctx.r11.u32);
	// sth r9,-14776(r5)
	REX_STORE_U16(ctx.r5.u32 + -14776, ctx.r9.u16);
	// lwzx r11,r3,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	// stw r11,20320(r4)
	REX_STORE_U32(ctx.r4.u32 + 20320, ctx.r11.u32);
	// b 0x8a06f9d8
	sub_8A06F9D8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8A070848) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8a0c2340
	ctx.lr = 0x8A070850;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30112
	ctx.r11.s64 = -1973420032;
	// li r27,10
	ctx.r27.s64 = 10;
	// addi r31,r11,-23640
	ctx.r31.s64 = ctx.r11.s64 + -23640;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r27,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r27.u16);
	// li r9,152
	ctx.r9.s64 = 152;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,-12
	ctx.r8.s64 = -12;
	// li r7,-12
	ctx.r7.s64 = -12;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,6
	ctx.r4.s64 = 6;
	// li r3,17
	ctx.r3.s64 = 17;
	// bl 0x8a016260
	ctx.lr = 0x8A07088C;
	sub_8A016260(ctx, base);
	// lis r10,-30112
	ctx.r10.s64 = -1973420032;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r10,-24040
	ctx.r4.s64 = ctx.r10.s64 + -24040;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8a016ed0
	ctx.lr = 0x8A0708A8;
	sub_8A016ED0(ctx, base);
	// lis r11,-30112
	ctx.r11.s64 = -1973420032;
	// li r31,8
	ctx.r31.s64 = 8;
	// addi r30,r11,-23464
	ctx.r30.s64 = ctx.r11.s64 + -23464;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r31,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r31.u16);
	// li r9,224
	ctx.r9.s64 = 224;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r8,-16
	ctx.r8.s64 = -16;
	// li r7,-16
	ctx.r7.s64 = -16;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,7
	ctx.r4.s64 = 7;
	// li r3,51
	ctx.r3.s64 = 51;
	// bl 0x8a015b08
	ctx.lr = 0x8A0708E0;
	sub_8A015B08(ctx, base);
	// addi r8,r30,918
	ctx.r8.s64 = ctx.r30.s64 + 918;
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
	// li r4,10
	ctx.r4.s64 = 10;
	// li r3,51
	ctx.r3.s64 = 51;
	// bl 0x8a015b08
	ctx.lr = 0x8A070910;
	sub_8A015B08(ctx, base);
	// lis r11,-30194
	ctx.r11.s64 = -1978793984;
	// lis r10,-30112
	ctx.r10.s64 = -1973420032;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r26,r11,-14444
	ctx.r26.s64 = ctx.r11.s64 + -14444;
	// addi r29,r10,-21624
	ctx.r29.s64 = ctx.r10.s64 + -21624;
loc_8A070924:
	// mulli r11,r31,306
	ctx.r11.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(306));
	// mulli r10,r31,780
	ctx.r10.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(780));
	// addi r6,r26,-40
	ctx.r6.s64 = ctx.r26.s64 + -40;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r4,r10,r29
	ctx.r4.u64 = ctx.r10.u64 + ctx.r29.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8a016db0
	ctx.lr = 0x8A070944;
	sub_8A016DB0(ctx, base);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// blt cr6,0x8a070924
	if (ctx.cr6.lt) goto loc_8A070924;
	// lis r11,-30184
	ctx.r11.s64 = -1978138624;
	// lis r9,-30112
	ctx.r9.s64 = -1973420032;
	// addi r29,r11,-14800
	ctx.r29.s64 = ctx.r11.s64 + -14800;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r28,r9,-32320
	ctx.r28.s64 = ctx.r9.s64 + -32320;
	// lbz r11,-14800(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -14800);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8a0709d4
	if (ctx.cr6.eq) goto loc_8A0709D4;
loc_8A07097C:
	// extsh r31,r10
	ctx.r31.s64 = ctx.r10.s16;
	// lbz r4,1(r29)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r29.u32 + 1);
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r27,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r27.u16);
	// rlwinm r9,r31,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// li r8,-12
	ctx.r8.s64 = -12;
	// add r3,r31,r9
	ctx.r3.u64 = ctx.r31.u64 + ctx.r9.u64;
	// li r9,232
	ctx.r9.s64 = 232;
	// rlwinm r7,r3,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// li r6,24
	ctx.r6.s64 = 24;
	// add r3,r7,r28
	ctx.r3.u64 = ctx.r7.u64 + ctx.r28.u64;
	// li r7,-12
	ctx.r7.s64 = -12;
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// li r5,24
	ctx.r5.s64 = 24;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x8a015b08
	ctx.lr = 0x8A0709BC;
	sub_8A015B08(ctx, base);
	// lbzu r11,2(r29)
	ea = 2 + ctx.r29.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r29.u32 = ea;
	// add r10,r30,r31
	ctx.r10.u64 = ctx.r30.u64 + ctx.r31.u64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8a07097c
	if (!ctx.cr6.eq) goto loc_8A07097C;
loc_8A0709D4:
	// lis r11,-30113
	ctx.r11.s64 = -1973485568;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r11,12320
	ctx.r30.s64 = ctx.r11.s64 + 12320;
loc_8A0709E0:
	// mulli r11,r31,306
	ctx.r11.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(306));
	// mulli r10,r31,780
	ctx.r10.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(780));
	// addi r6,r26,-20
	ctx.r6.s64 = ctx.r26.s64 + -20;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r5,r11,r28
	ctx.r5.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r4,r10,r30
	ctx.r4.u64 = ctx.r10.u64 + ctx.r30.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8a016db0
	ctx.lr = 0x8A070A00;
	sub_8A016DB0(ctx, base);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,26
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 26, ctx.xer);
	// blt cr6,0x8a0709e0
	if (ctx.cr6.lt) goto loc_8A0709E0;
	// lis r11,-30184
	ctx.r11.s64 = -1978138624;
	// lis r8,-30112
	ctx.r8.s64 = -1973420032;
	// addi r10,r11,-14792
	ctx.r10.s64 = ctx.r11.s64 + -14792;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r28,r8,-24200
	ctx.r28.s64 = ctx.r8.s64 + -24200;
	// lbz r11,-14792(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -14792);
	// extsb r29,r11
	ctx.r29.s64 = ctx.r11.s8;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8a070a9c
	if (ctx.cr6.eq) goto loc_8A070A9C;
	// addi r31,r10,-1
	ctx.r31.s64 = ctx.r10.s64 + -1;
loc_8A070A3C:
	// extsh r30,r9
	ctx.r30.s64 = ctx.r9.s16;
	// lbz r5,2(r31)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + 2);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// lbz r6,3(r31)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + 3);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + 4);
	// clrlwi r3,r10,16
	ctx.r3.u64 = ctx.r10.u32 & 0xFFFF;
	// lbz r8,5(r31)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + 5);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lbz r9,6(r31)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + 6);
	// li r4,5
	ctx.r4.s64 = 5;
	// lbzu r10,7(r31)
	ea = 7 + ctx.r31.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sth r3,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r3.u16);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x8a016260
	ctx.lr = 0x8A070A80;
	sub_8A016260(ctx, base);
	// lbz r11,1(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 1);
	// add r9,r29,r30
	ctx.r9.u64 = ctx.r29.u64 + ctx.r30.u64;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8a070a3c
	if (!ctx.cr6.eq) goto loc_8A070A3C;
loc_8A070A9C:
	// lis r10,-30113
	ctx.r10.s64 = -1973485568;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r10,32600
	ctx.r30.s64 = ctx.r10.s64 + 32600;
loc_8A070AAC:
	// mulli r10,r31,204
	ctx.r10.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(204));
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r6,r26,20
	ctx.r6.s64 = ctx.r26.s64 + 20;
	// rlwimi r3,r11,14,16,17
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xC000) | (ctx.r3.u64 & 0xFFFFFFFFFFFF3FFF);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r7,5
	ctx.r7.s64 = 5;
	// add r4,r10,r30
	ctx.r4.u64 = ctx.r10.u64 + ctx.r30.u64;
	// bl 0x8a016930
	ctx.lr = 0x8A070ACC;
	sub_8A016930(ctx, base);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x8a070aac
	if (ctx.cr6.lt) goto loc_8A070AAC;
	// lis r10,-30184
	ctx.r10.s64 = -1978138624;
	// lis r11,-30112
	ctx.r11.s64 = -1973420032;
	// addi r10,r10,-14756
	ctx.r10.s64 = ctx.r10.s64 + -14756;
	// addi r28,r11,-24360
	ctx.r28.s64 = ctx.r11.s64 + -24360;
	// li r9,0
	ctx.r9.s64 = 0;
	// lbz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r29,r11
	ctx.r29.s64 = ctx.r11.s8;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8a070b6c
	if (ctx.cr6.eq) goto loc_8A070B6C;
	// addi r31,r10,-1
	ctx.r31.s64 = ctx.r10.s64 + -1;
loc_8A070B08:
	// extsh r30,r9
	ctx.r30.s64 = ctx.r9.s16;
	// lbz r9,2(r31)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + 2);
	// lbz r10,3(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 3);
	// li r8,-8
	ctx.r8.s64 = -8;
	// lbzu r6,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r6.u64 = REX_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,-8
	ctx.r7.s64 = -8;
	// extsb r4,r6
	ctx.r4.s64 = ctx.r6.s8;
	// add r5,r30,r5
	ctx.r5.u64 = ctx.r30.u64 + ctx.r5.u64;
	// sth r4,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r4.u16);
	// li r4,6
	ctx.r4.s64 = 6;
	// rlwinm r6,r5,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// li r5,16
	ctx.r5.s64 = 16;
	// add r3,r6,r28
	ctx.r3.u64 = ctx.r6.u64 + ctx.r28.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x8a016260
	ctx.lr = 0x8A070B50;
	sub_8A016260(ctx, base);
	// lbz r11,1(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 1);
	// add r9,r29,r30
	ctx.r9.u64 = ctx.r29.u64 + ctx.r30.u64;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8a070b08
	if (!ctx.cr6.eq) goto loc_8A070B08;
loc_8A070B6C:
	// lis r11,-30112
	ctx.r11.s64 = -1973420032;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,-32528
	ctx.r4.s64 = ctx.r11.s64 + -32528;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8a016930
	ctx.lr = 0x8A070B88;
	sub_8A016930(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8a0c2390
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8A071B38) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8a0c232c
	ctx.lr = 0x8A071B40;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// lis r11,-30165
	ctx.r11.s64 = -1976893440;
	// mulli r31,r10,208
	ctx.r31.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// addi r30,r11,13736
	ctx.r30.s64 = ctx.r11.s64 + 13736;
	// mulli r7,r9,208
	ctx.r7.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(208));
	// lwzx r8,r31,r30
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// lwzx r6,r7,r30
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r30.u32);
	// addi r5,r30,56
	ctx.r5.s64 = ctx.r30.s64 + 56;
	// addi r4,r30,48
	ctx.r4.s64 = ctx.r30.s64 + 48;
	// rlwimi r6,r8,0,24,22
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF) | (ctx.r6.u64 & 0x100);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r30,60
	ctx.r3.s64 = ctx.r30.s64 + 60;
	// stwx r6,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
	// lwzx r11,r31,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// addi r23,r30,48
	ctx.r23.s64 = ctx.r30.s64 + 48;
	// addi r9,r30,52
	ctx.r9.s64 = ctx.r30.s64 + 52;
	// lwzx r10,r7,r4
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r30,206
	ctx.r8.s64 = ctx.r30.s64 + 206;
	// lwzx r11,r31,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// addi r22,r30,52
	ctx.r22.s64 = ctx.r30.s64 + 52;
	// stwx r6,r31,r23
	REX_STORE_U32(ctx.r31.u32 + ctx.r23.u32, ctx.r6.u32);
	// addi r5,r30,200
	ctx.r5.s64 = ctx.r30.s64 + 200;
	// lwzx r10,r7,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r28,r30,196
	ctx.r28.s64 = ctx.r30.s64 + 196;
	// lbzx r11,r31,r8
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// stwx r4,r31,r22
	REX_STORE_U32(ctx.r31.u32 + ctx.r22.u32, ctx.r4.u32);
	// addi r3,r30,200
	ctx.r3.s64 = ctx.r30.s64 + 200;
	// lbzx r10,r7,r5
	ctx.r10.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r5.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbzx r10,r31,r28
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// stbx r11,r31,r3
	REX_STORE_U8(ctx.r31.u32 + ctx.r3.u32, ctx.r11.u8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8a071c0c
	if (!ctx.cr6.eq) goto loc_8A071C0C;
	// addi r10,r30,185
	ctx.r10.s64 = ctx.r30.s64 + 185;
	// lbzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8a071c0c
	if (ctx.cr6.eq) goto loc_8A071C0C;
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// stbx r9,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8a071e0c
	if (!ctx.cr6.eq) goto loc_8A071E0C;
	// addi r11,r30,180
	ctx.r11.s64 = ctx.r30.s64 + 180;
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8a0c237c
	__restgprlr_21(ctx, base);
	return;
loc_8A071C0C:
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8a071d50
	if (ctx.cr6.eq) goto loc_8A071D50;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8a013dc0
	ctx.lr = 0x8A071C24;
	sub_8A013DC0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8a013fd8
	ctx.lr = 0x8A071C30;
	sub_8A013FD8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89ffc038
	ctx.lr = 0x8A071C38;
	sub_89FFC038(ctx, base);
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,80
	ctx.r4.s64 = 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89ffe588
	ctx.lr = 0x8A071C48;
	sub_89FFE588(ctx, base);
	// addi r11,r30,180
	ctx.r11.s64 = ctx.r30.s64 + 180;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// beq cr6,0x8a071e0c
	if (ctx.cr6.eq) goto loc_8A071E0C;
	// lbzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8a071c7c
	if (!ctx.cr6.eq) goto loc_8A071C7C;
	// addi r11,r30,185
	ctx.r11.s64 = ctx.r30.s64 + 185;
	// li r10,100
	ctx.r10.s64 = 100;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8a0c237c
	__restgprlr_21(ctx, base);
	return;
loc_8A071C7C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89ffb0c0
	ctx.lr = 0x8A071C84;
	sub_89FFB0C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8a071e0c
	if (ctx.cr6.eq) goto loc_8A071E0C;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r6,0
	ctx.r6.s64 = 0;
	// lis r7,-30210
	ctx.r7.s64 = -1979842560;
	// lis r8,-30184
	ctx.r8.s64 = -1978138624;
	// lis r9,-30186
	ctx.r9.s64 = -1978269696;
	// lis r10,-30184
	ctx.r10.s64 = -1978138624;
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// ori r28,r6,57344
	ctx.r28.u64 = ctx.r6.u64 | 57344;
	// li r21,5
	ctx.r21.s64 = 5;
	// addi r27,r7,9016
	ctx.r27.s64 = ctx.r7.s64 + 9016;
	// addi r26,r8,-14264
	ctx.r26.s64 = ctx.r8.s64 + -14264;
	// addi r25,r9,-27420
	ctx.r25.s64 = ctx.r9.s64 + -27420;
	// addi r24,r10,-14256
	ctx.r24.s64 = ctx.r10.s64 + -14256;
loc_8A071CC0:
	// addi r7,r30,158
	ctx.r7.s64 = ctx.r30.s64 + 158;
	// lhzx r11,r11,r24
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r24.u32);
	// rlwinm r5,r29,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r31,r22
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r22.u32);
	// lwzx r10,r31,r23
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r23.u32);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// lhzx r7,r31,r7
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r7.u32);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwzx r7,r5,r26
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r26.u32);
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// rlwinm r5,r6,1,22,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x3FE;
	// addi r4,r6,128
	ctx.r4.s64 = ctx.r6.s64 + 128;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// rlwinm r11,r4,1,22,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x3FE;
	// lhzx r5,r5,r27
	ctx.r5.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r27.u32);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// lhzx r11,r11,r27
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r27.u32);
	// mullw r5,r4,r28
	ctx.r5.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r28.s32);
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// srawi r11,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 8;
	// mullw r5,r4,r28
	ctx.r5.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r28.s32);
	// srawi r4,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 8;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// divw r11,r11,r21
	ctx.r11.u64 = uint32_t((ctx.r21.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r21.s32 == -1)) ? ctx.r11.s32 / ctx.r21.s32 : 0);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8a0afbf8
	ctx.lr = 0x8A071D30;
	sub_8A0AFBF8(ctx, base);
	// addi r10,r29,1
	ctx.r10.s64 = ctx.r29.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x8a071cc0
	if (ctx.cr6.lt) goto loc_8A071CC0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8a0c237c
	__restgprlr_21(ctx, base);
	return;
loc_8A071D50:
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// li r8,0
	ctx.r8.s64 = 0;
loc_8A071D58:
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// clrlwi r9,r10,23
	ctx.r9.u64 = ctx.r10.u32 & 0x1FF;
	// cmpwi cr6,r9,256
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 256, ctx.xer);
	// bge cr6,0x8a071d78
	if (!ctx.cr6.lt) goto loc_8A071D78;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,256
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 256, ctx.xer);
	// sthx r10,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u16);
loc_8A071D78:
	// ble cr6,0x8a071d88
	if (!ctx.cr6.gt) goto loc_8A071D88;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// sthx r9,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u16);
loc_8A071D88:
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// blt cr6,0x8a071d58
	if (ctx.cr6.lt) goto loc_8A071D58;
	// lhzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// addi r9,r30,12
	ctx.r9.s64 = ctx.r30.s64 + 12;
	// addi r8,r30,28
	ctx.r8.s64 = ctx.r30.s64 + 28;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r7,r30,16
	ctx.r7.s64 = ctx.r30.s64 + 16;
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// addi r5,r30,20
	ctx.r5.s64 = ctx.r30.s64 + 20;
	// srawi r4,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 4;
	// lwzx r10,r31,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// clrlwi r11,r4,27
	ctx.r11.u64 = ctx.r4.u32 & 0x1F;
	// addi r8,r30,32
	ctx.r8.s64 = ctx.r30.s64 + 32;
	// stwx r11,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r30,180
	ctx.r6.s64 = ctx.r30.s64 + 180;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r4,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r4.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r10,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r10.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r7,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r7.u32);
	// lwz r5,8(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r5,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r5.u32);
	// stbx r9,r31,r6
	REX_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r9.u8);
loc_8A071E0C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8a0c237c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8A0729C0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8a0c2314
	ctx.lr = 0x8A0729C8;
	__savegprlr_15(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// lis r9,-30165
	ctx.r9.s64 = -1976893440;
	// mulli r31,r11,208
	ctx.r31.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r11,r9,13736
	ctx.r11.s64 = ctx.r9.s64 + 13736;
	// mulli r3,r10,208
	ctx.r3.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwzx r9,r3,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// addi r8,r11,158
	ctx.r8.s64 = ctx.r11.s64 + 158;
	// addi r7,r11,158
	ctx.r7.s64 = ctx.r11.s64 + 158;
	// rlwimi r9,r10,0,24,22
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF) | (ctx.r9.u64 & 0x100);
	// addi r5,r11,180
	ctx.r5.s64 = ctx.r11.s64 + 180;
	// stwx r9,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
	// addi r6,r11,180
	ctx.r6.s64 = ctx.r11.s64 + 180;
	// lhzx r9,r3,r8
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r8.u32);
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// sthx r9,r31,r7
	REX_STORE_U16(ctx.r31.u32 + ctx.r7.u32, ctx.r9.u16);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// lhzx r25,r31,r7
	ctx.r25.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r7.u32);
	// addi r9,r11,160
	ctx.r9.s64 = ctx.r11.s64 + 160;
	// lbzx r8,r3,r5
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r5.u32);
	// addi r30,r11,28
	ctx.r30.s64 = ctx.r11.s64 + 28;
	// stbx r8,r31,r6
	REX_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r8.u8);
	// addi r27,r11,16
	ctx.r27.s64 = ctx.r11.s64 + 16;
	// lwzx r8,r3,r4
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r4.u32);
	// rlwinm r5,r8,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r8,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u32);
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// lwzx r7,r31,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// rlwinm r5,r7,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r24,r31,r9
	ctx.r24.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r9.u32);
	// rlwinm r28,r8,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r31,r30
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// add r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 + ctx.r5.u64;
	// lbzx r22,r31,r6
	ctx.r22.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r6.u32);
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// lwzx r6,r28,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r9.u32);
	// add r4,r24,r25
	ctx.r4.u64 = ctx.r24.u64 + ctx.r25.u64;
	// stwx r6,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r6.u32);
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lis r10,-30210
	ctx.r10.s64 = -1979842560;
	// extsh r6,r4
	ctx.r6.s64 = ctx.r4.s16;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r10,9016
	ctx.r30.s64 = ctx.r10.s64 + 9016;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r4,r6,128
	ctx.r4.s64 = ctx.r6.s64 + 128;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r26,r11,20
	ctx.r26.s64 = ctx.r11.s64 + 20;
	// rlwinm r5,r4,1,22,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x3FE;
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r29,r11,56
	ctx.r29.s64 = ctx.r11.s64 + 56;
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r6,1,22,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x3FE;
	// lwz r6,4(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// addi r23,r11,36
	ctx.r23.s64 = ctx.r11.s64 + 36;
	// stwx r6,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r6.u32);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lhzx r8,r5,r30
	ctx.r8.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r30.u32);
	// addi r6,r11,32
	ctx.r6.s64 = ctx.r11.s64 + 32;
	// lwzx r29,r31,r29
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// lwz r5,4(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stwx r5,r31,r23
	REX_STORE_U32(ctx.r31.u32 + ctx.r23.u32, ctx.r5.u32);
	// extsh r5,r8
	ctx.r5.s64 = ctx.r8.s16;
	// srawi r10,r29,4
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r29.s32 >> 4;
	// lhzx r4,r7,r30
	ctx.r4.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r30.u32);
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// addi r7,r11,48
	ctx.r7.s64 = ctx.r11.s64 + 48;
	// stwx r9,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r9.u32);
	// mullw r6,r5,r10
	ctx.r6.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// srawi r9,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 8;
	// lwzx r8,r3,r7
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	// extsh r5,r4
	ctx.r5.s64 = ctx.r4.s16;
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r27,r11,48
	ctx.r27.s64 = ctx.r11.s64 + 48;
	// addi r9,r11,52
	ctx.r9.s64 = ctx.r11.s64 + 52;
	// mullw r8,r5,r10
	ctx.r8.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// stwx r4,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r4.u32);
	// lwzx r9,r3,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// srawi r10,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 8;
	// addi r28,r11,52
	ctx.r28.s64 = ctx.r11.s64 + 52;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwx r5,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r5.u32);
	// addi r7,r11,206
	ctx.r7.s64 = ctx.r11.s64 + 206;
	// addi r6,r11,200
	ctx.r6.s64 = ctx.r11.s64 + 200;
	// addi r4,r11,200
	ctx.r4.s64 = ctx.r11.s64 + 200;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// lbzx r10,r31,r7
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r7.u32);
	// lbzx r11,r3,r6
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r6.u32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// stbx r5,r31,r4
	REX_STORE_U8(ctx.r31.u32 + ctx.r4.u32, ctx.r5.u8);
	// beq cr6,0x8a072d40
	if (ctx.cr6.eq) goto loc_8A072D40;
	// lwzx r29,r31,r27
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// lwzx r4,r31,r28
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89ffafa8
	ctx.lr = 0x8A072B64;
	sub_89FFAFA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8a072d40
	if (ctx.cr6.eq) goto loc_8A072D40;
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89ffaf20
	ctx.lr = 0x8A072B78;
	sub_89FFAF20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8a072d40
	if (!ctx.cr6.eq) goto loc_8A072D40;
	// lis r11,-30184
	ctx.r11.s64 = -1978138624;
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r11,r11,-14236
	ctx.r11.s64 = ctx.r11.s64 + -14236;
	// lis r22,-30126
	ctx.r22.s64 = -1974337536;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r29,r11,2
	ctx.r29.s64 = ctx.r11.s64 + 2;
	// lis r11,-30126
	ctx.r11.s64 = -1974337536;
	// lis r16,-30160
	ctx.r16.s64 = -1976565760;
	// lis r23,-30160
	ctx.r23.s64 = -1976565760;
	// lis r10,-30131
	ctx.r10.s64 = -1974665216;
	// lhz r26,-13100(r22)
	ctx.r26.u64 = REX_LOAD_U16(ctx.r22.u32 + -13100);
	// rlwinm r18,r25,1,22,30
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0x3FE;
	// lwz r9,-13288(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -13288);
	// lis r11,-30137
	ctx.r11.s64 = -1975058432;
	// lhz r24,8372(r16)
	ctx.r24.u64 = REX_LOAD_U16(ctx.r16.u32 + 8372);
	// extsh r19,r25
	ctx.r19.s64 = ctx.r25.s16;
	// lhz r3,10760(r23)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r23.u32 + 10760);
	// lis r21,128
	ctx.r21.s64 = 8388608;
	// addi r17,r10,27664
	ctx.r17.s64 = ctx.r10.s64 + 27664;
	// addi r20,r11,-392
	ctx.r20.s64 = ctx.r11.s64 + -392;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
loc_8A072BD4:
	// addi r11,r19,128
	ctx.r11.s64 = ctx.r19.s64 + 128;
	// lhz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r29.u32 + 0);
	// lhz r9,-2(r29)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r29.u32 + -2);
	// rlwinm r8,r11,1,22,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x3FE;
	// lhzx r5,r18,r30
	ctx.r5.u64 = REX_LOAD_U16(ctx.r18.u32 + ctx.r30.u32);
	// rotlwi r4,r10,16
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// lwzx r6,r31,r27
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// rotlwi r10,r9,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 16);
	// lwzx r9,r31,r28
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// srawi r11,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 4;
	// lwz r7,2(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 2);
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// lhzx r8,r8,r30
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r30.u32);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// extsh r4,r8
	ctx.r4.s64 = ctx.r8.s16;
	// mullw r8,r11,r5
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// mullw r15,r10,r4
	ctx.r15.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// mullw r5,r10,r5
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// srawi r15,r15,8
	ctx.xer.ca = (ctx.r15.s32 < 0) & ((ctx.r15.u32 & 0xFF) != 0);
	ctx.r15.s64 = ctx.r15.s32 >> 8;
	// srawi r10,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 8;
	// mullw r4,r11,r4
	ctx.r4.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// srawi r11,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 8;
	// subf r8,r10,r15
	ctx.r8.u64 = ctx.r15.u64 - ctx.r10.u64;
	// srawi r10,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 8;
	// add r4,r8,r6
	ctx.r4.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r4,r21
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r21.s32, ctx.xer);
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// blt cr6,0x8a072c84
	if (ctx.cr6.lt) goto loc_8A072C84;
	// lis r11,320
	ctx.r11.s64 = 20971520;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x8a072c84
	if (ctx.cr6.gt) goto loc_8A072C84;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// subf r10,r11,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r11.u64;
	// addis r10,r10,-120
	ctx.r10.s64 = ctx.r10.s64 + -7864320;
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x8a072c6c
	if (!ctx.cr0.lt) goto loc_8A072C6C;
	// neg r10,r10
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r10.u64);
loc_8A072C6C:
	// lis r11,112
	ctx.r11.s64 = 7340032;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// srawi r8,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 31;
	// subfc r6,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r6.u64 = ctx.r11.u64 - ctx.r10.u64;
	// adde r11,r9,r8
	temp.u8 = (ctx.r9.u32 + ctx.r8.u32 < ctx.r9.u32) | (ctx.r9.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x8a072c88
	goto loc_8A072C88;
loc_8A072C84:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8A072C88:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8a072d28
	if (ctx.cr6.eq) goto loc_8A072D28;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// li r6,2
	ctx.r6.s64 = 2;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x8a072cac
	if (!ctx.cr6.lt) goto loc_8A072CAC;
	// li r3,2
	ctx.r3.s64 = 2;
	// sth r3,10760(r23)
	REX_STORE_U16(ctx.r23.u32 + 10760, ctx.r3.u16);
loc_8A072CAC:
	// clrlwi r11,r24,16
	ctx.r11.u64 = ctx.r24.u32 & 0xFFFF;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// mulli r10,r11,140
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(140));
	// add r10,r10,r17
	ctx.r10.u64 = ctx.r10.u64 + ctx.r17.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8a072d28
	if (!ctx.cr6.lt) goto loc_8A072D28;
	// addi r8,r20,-4
	ctx.r8.s64 = ctx.r20.s64 + -4;
loc_8A072CC8:
	// lwz r15,0(r10)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// bne cr6,0x8a072ce0
	if (!ctx.cr6.eq) goto loc_8A072CE0;
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stwu r10,4(r8)
	ea = 4 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r8.u32 = ea;
	// beq 0x8a072cf4
	if (ctx.cr0.eq) goto loc_8A072CF4;
loc_8A072CE0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,140
	ctx.r10.s64 = ctx.r10.s64 + 140;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8a072cc8
	if (ctx.cr6.lt) goto loc_8A072CC8;
	// b 0x8a072d28
	goto loc_8A072D28;
loc_8A072CF4:
	// clrlwi r10,r26,16
	ctx.r10.u64 = ctx.r26.u32 & 0xFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
	// clrlwi r26,r10,16
	ctx.r26.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// sth r26,-13100(r22)
	REX_STORE_U16(ctx.r22.u32 + -13100, ctx.r26.u16);
	// li r3,2
	ctx.r3.s64 = 2;
	// clrlwi r24,r11,16
	ctx.r24.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x8a0b0bf0
	ctx.lr = 0x8A072D1C;
	sub_8A0B0BF0(ctx, base);
	// li r3,71
	ctx.r3.s64 = 71;
	// bl 0x8a017608
	ctx.lr = 0x8A072D24;
	sub_8A017608(ctx, base);
	// lhz r3,10760(r23)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r23.u32 + 10760);
loc_8A072D28:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bne 0x8a072bd4
	if (!ctx.cr0.eq) goto loc_8A072BD4;
	// sth r24,8372(r16)
	REX_STORE_U16(ctx.r16.u32 + 8372, ctx.r24.u16);
loc_8A072D40:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8a0c2364
	__restgprlr_15(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8A074018) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8a0c2328
	ctx.lr = 0x8A074020;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30165
	ctx.r11.s64 = -1976893440;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r31,r11,13736
	ctx.r31.s64 = ctx.r11.s64 + 13736;
	// mulli r30,r10,208
	ctx.r30.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// addi r20,r31,8
	ctx.r20.s64 = ctx.r31.s64 + 8;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwzx r11,r30,r20
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r20.u32);
	// cmplwi cr6,r11,69
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 69, ctx.xer);
	// bgt cr6,0x8a0749a8
	if (ctx.cr6.gt) goto loc_8A0749A8;
	// li r26,0
	ctx.r26.s64 = 0;
	// lis r12,-30201
	ctx.r12.s64 = -1979252736;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,16484
	ctx.r12.s64 = ctx.r12.s64 + 16484;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8A07417C;
	case 1:
		goto loc_8A0741F8;
	case 2:
		goto loc_8A0749A8;
	case 3:
		goto loc_8A0749A8;
	case 4:
		goto loc_8A0749A8;
	case 5:
		goto loc_8A0749A8;
	case 6:
		goto loc_8A0749A8;
	case 7:
		goto loc_8A0749A8;
	case 8:
		goto loc_8A0749A8;
	case 9:
		goto loc_8A0749A8;
	case 10:
		goto loc_8A0749A8;
	case 11:
		goto loc_8A0749A8;
	case 12:
		goto loc_8A0749A8;
	case 13:
		goto loc_8A0749A8;
	case 14:
		goto loc_8A0749A8;
	case 15:
		goto loc_8A0749A8;
	case 16:
		goto loc_8A0749A8;
	case 17:
		goto loc_8A0749A8;
	case 18:
		goto loc_8A0749A8;
	case 19:
		goto loc_8A0749A8;
	case 20:
		goto loc_8A0749A8;
	case 21:
		goto loc_8A0749A8;
	case 22:
		goto loc_8A0749A8;
	case 23:
		goto loc_8A0749A8;
	case 24:
		goto loc_8A0749A8;
	case 25:
		goto loc_8A0749A8;
	case 26:
		goto loc_8A0749A8;
	case 27:
		goto loc_8A0749A8;
	case 28:
		goto loc_8A0749A8;
	case 29:
		goto loc_8A0749A8;
	case 30:
		goto loc_8A0749A8;
	case 31:
		goto loc_8A0749A8;
	case 32:
		goto loc_8A0749A8;
	case 33:
		goto loc_8A0749A8;
	case 34:
		goto loc_8A0742F4;
	case 35:
		goto loc_8A0743A0;
	case 36:
		goto loc_8A0743A0;
	case 37:
		goto loc_8A07463C;
	case 38:
		goto loc_8A074728;
	case 39:
		goto loc_8A074750;
	case 40:
		goto loc_8A074778;
	case 41:
		goto loc_8A0747A0;
	case 42:
		goto loc_8A0747C8;
	case 43:
		goto loc_8A0747F0;
	case 44:
		goto loc_8A074818;
	case 45:
		goto loc_8A074840;
	case 46:
		goto loc_8A074868;
	case 47:
		goto loc_8A074868;
	case 48:
		goto loc_8A074890;
	case 49:
		goto loc_8A074868;
	case 50:
		goto loc_8A0748B8;
	case 51:
		goto loc_8A074840;
	case 52:
		goto loc_8A074908;
	case 53:
		goto loc_8A074868;
	case 54:
		goto loc_8A0748E0;
	case 55:
		goto loc_8A074930;
	case 56:
		goto loc_8A074868;
	case 57:
		goto loc_8A074868;
	case 58:
		goto loc_8A074840;
	case 59:
		goto loc_8A074818;
	case 60:
		goto loc_8A074958;
	case 61:
		goto loc_8A074868;
	case 62:
		goto loc_8A074868;
	case 63:
		goto loc_8A074840;
	case 64:
		goto loc_8A074818;
	case 65:
		goto loc_8A074980;
	case 66:
		goto loc_8A074868;
	case 67:
		goto loc_8A074868;
	case 68:
		goto loc_8A074840;
	case 69:
		goto loc_8A074818;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_8A07417C:
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
	// cmplwi cr6,r9,6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 6, ctx.xer);
	// blt cr6,0x8a0741f8
	if (ctx.cr6.lt) goto loc_8A0741F8;
	// addi r10,r31,12
	ctx.r10.s64 = ctx.r31.s64 + 12;
	// stbx r26,r30,r11
	REX_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r26.u8);
	// addi r9,r31,28
	ctx.r9.s64 = ctx.r31.s64 + 28;
	// addi r7,r31,16
	ctx.r7.s64 = ctx.r31.s64 + 16;
	// addi r6,r31,20
	ctx.r6.s64 = ctx.r31.s64 + 20;
	// addi r5,r31,36
	ctx.r5.s64 = ctx.r31.s64 + 36;
	// lwzx r11,r30,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// lwzx r8,r30,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r3,30
	ctx.r11.u64 = ctx.r3.u32 & 0x3;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r11,r30,r10
	REX_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r11.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r10,r30,r7
	REX_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r9,r30,r6
	REX_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r8,r30,r5
	REX_STORE_U32(ctx.r30.u32 + ctx.r5.u32, ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r7,r30,r4
	REX_STORE_U32(ctx.r30.u32 + ctx.r4.u32, ctx.r7.u32);
loc_8A0741F8:
	// addi r11,r31,196
	ctx.r11.s64 = ctx.r31.s64 + 196;
	// lbzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// clrlwi r8,r9,28
	ctx.r8.u64 = ctx.r9.u32 & 0xF;
	// rlwinm r7,r9,0,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x6;
	// rlwinm r8,r8,0,31,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF9;
	// cntlzw r5,r7
	ctx.r5.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// cntlzw r6,r8
	ctx.r6.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r3,r5,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// rlwinm r4,r6,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// or r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 | ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8a074244
	if (ctx.cr6.eq) goto loc_8A074244;
	// bl 0x89ffd2f0
	ctx.lr = 0x8A074234;
	sub_89FFD2F0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89ffd150
	ctx.lr = 0x8A07423C;
	sub_89FFD150(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8a0c2378
	__restgprlr_20(ctx, base);
	return;
loc_8A074244:
	// bl 0x89ffe0e0
	ctx.lr = 0x8A074248;
	sub_89FFE0E0(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8a074b7c
	if (ctx.cr6.eq) goto loc_8A074B7C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8a073c10
	ctx.lr = 0x8A07425C;
	sub_8A073C10(ctx, base);
	// addi r11,r31,200
	ctx.r11.s64 = ctx.r31.s64 + 200;
	// addi r10,r31,52
	ctx.r10.s64 = ctx.r31.s64 + 52;
	// addi r9,r31,48
	ctx.r9.s64 = ctx.r31.s64 + 48;
	// li r3,1
	ctx.r3.s64 = 1;
	// lbzx r29,r30,r11
	ctx.r29.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// lwzx r28,r30,r10
	ctx.r28.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// lwzx r27,r30,r9
	ctx.r27.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// bl 0x8a00cfb8
	ctx.lr = 0x8A07427C;
	sub_8A00CFB8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8a074b7c
	if (ctx.cr6.eq) goto loc_8A074B7C;
	// lis r11,-30137
	ctx.r11.s64 = -1975058432;
	// lis r10,-30164
	ctx.r10.s64 = -1976827904;
	// lis r9,-16256
	ctx.r9.s64 = -1065353216;
	// addi r31,r10,1528
	ctx.r31.s64 = ctx.r10.s64 + 1528;
	// ori r8,r9,4
	ctx.r8.u64 = ctx.r9.u64 | 4;
	// lhz r30,3704(r11)
	ctx.r30.u64 = REX_LOAD_U16(ctx.r11.u32 + 3704);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// extsh r7,r30
	ctx.r7.s64 = ctx.r30.s16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mulli r25,r7,116
	ctx.r25.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(116));
	// stwx r8,r25,r31
	REX_STORE_U32(ctx.r25.u32 + ctx.r31.u32, ctx.r8.u32);
	// bl 0x8a00efe8
	ctx.lr = 0x8A0742B8;
	sub_8A00EFE8(ctx, base);
	// addi r6,r31,48
	ctx.r6.s64 = ctx.r31.s64 + 48;
	// addi r5,r31,52
	ctx.r5.s64 = ctx.r31.s64 + 52;
	// addi r4,r31,92
	ctx.r4.s64 = ctx.r31.s64 + 92;
	// addi r11,r31,56
	ctx.r11.s64 = ctx.r31.s64 + 56;
	// addi r10,r31,60
	ctx.r10.s64 = ctx.r31.s64 + 60;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// stwx r27,r25,r6
	REX_STORE_U32(ctx.r25.u32 + ctx.r6.u32, ctx.r27.u32);
	// stwx r28,r25,r5
	REX_STORE_U32(ctx.r25.u32 + ctx.r5.u32, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stbx r29,r25,r4
	REX_STORE_U8(ctx.r25.u32 + ctx.r4.u32, ctx.r29.u8);
	// stwx r9,r25,r11
	REX_STORE_U32(ctx.r25.u32 + ctx.r11.u32, ctx.r9.u32);
	// stwx r26,r25,r10
	REX_STORE_U32(ctx.r25.u32 + ctx.r10.u32, ctx.r26.u32);
	// bl 0x8a00f0b8
	ctx.lr = 0x8A0742EC;
	sub_8A00F0B8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8a0c2378
	__restgprlr_20(ctx, base);
	return;
loc_8A0742F4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89ffc2b8
	ctx.lr = 0x8A0742FC;
	sub_89FFC2B8(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8a0749bc
	if (ctx.cr6.lt) goto loc_8A0749BC;
	// mulli r9,r11,208
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lwzx r8,r30,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// addi r7,r31,48
	ctx.r7.s64 = ctx.r31.s64 + 48;
	// addi r6,r31,56
	ctx.r6.s64 = ctx.r31.s64 + 56;
	// addi r5,r31,60
	ctx.r5.s64 = ctx.r31.s64 + 60;
	// addi r4,r31,48
	ctx.r4.s64 = ctx.r31.s64 + 48;
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// lwzx r10,r9,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// addi r7,r31,52
	ctx.r7.s64 = ctx.r31.s64 + 52;
	// lwzx r11,r30,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	// rlwinm r6,r8,0,12,9
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFCFFFFF;
	// addi r8,r31,206
	ctx.r8.s64 = ctx.r31.s64 + 206;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r30,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r5.u32);
	// addi r5,r31,200
	ctx.r5.s64 = ctx.r31.s64 + 200;
	// stwx r10,r30,r4
	REX_STORE_U32(ctx.r30.u32 + ctx.r4.u32, ctx.r10.u32);
	// addi r4,r31,200
	ctx.r4.s64 = ctx.r31.s64 + 200;
	// lwzx r10,r9,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwx r3,r30,r7
	REX_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stwx r6,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r6.u32);
	// lwzx r10,r9,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// lbzx r11,r30,r8
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r8.u32);
	// rlwinm r8,r10,0,10,11
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x300000;
	// or r7,r8,r6
	ctx.r7.u64 = ctx.r8.u64 | ctx.r6.u64;
	// stwx r7,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r7.u32);
	// lbzx r10,r9,r5
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r5.u32);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stbx r6,r30,r4
	REX_STORE_U8(ctx.r30.u32 + ctx.r4.u32, ctx.r6.u8);
	// bl 0x8a013dc0
	ctx.lr = 0x8A074384;
	sub_8A013DC0(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8a013fd8
	ctx.lr = 0x8A074390;
	sub_8A013FD8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89ffc038
	ctx.lr = 0x8A074398;
	sub_89FFC038(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8a0c2378
	__restgprlr_20(ctx, base);
	return;
loc_8A0743A0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89ffc2b8
	ctx.lr = 0x8A0743A8;
	sub_89FFC2B8(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8a0749bc
	if (ctx.cr6.lt) goto loc_8A0749BC;
	// mulli r11,r11,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lwzx r8,r30,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// addi r7,r31,48
	ctx.r7.s64 = ctx.r31.s64 + 48;
	// addi r6,r31,56
	ctx.r6.s64 = ctx.r31.s64 + 56;
	// addi r5,r31,60
	ctx.r5.s64 = ctx.r31.s64 + 60;
	// addi r25,r31,48
	ctx.r25.s64 = ctx.r31.s64 + 48;
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// lwzx r9,r11,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// rlwinm r3,r8,0,12,9
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFCFFFFF;
	// lwzx r10,r30,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	// addi r26,r31,52
	ctx.r26.s64 = ctx.r31.s64 + 52;
	// addi r8,r31,206
	ctx.r8.s64 = ctx.r31.s64 + 206;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwzx r10,r30,r5
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r5.u32);
	// addi r6,r31,200
	ctx.r6.s64 = ctx.r31.s64 + 200;
	// stwx r7,r30,r25
	REX_STORE_U32(ctx.r30.u32 + ctx.r25.u32, ctx.r7.u32);
	// addi r28,r31,12
	ctx.r28.s64 = ctx.r31.s64 + 12;
	// lwzx r9,r11,r4
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwx r3,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r3.u32);
	// addi r24,r31,200
	ctx.r24.s64 = ctx.r31.s64 + 200;
	// stwx r5,r30,r26
	REX_STORE_U32(ctx.r30.u32 + ctx.r26.u32, ctx.r5.u32);
	// lbzx r9,r30,r8
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r8.u32);
	// lwzx r4,r11,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// rlwinm r8,r4,0,10,11
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x300000;
	// or r7,r8,r3
	ctx.r7.u64 = ctx.r8.u64 | ctx.r3.u64;
	// lwzx r10,r30,r28
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r28.u32);
	// stwx r7,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r7.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lbzx r8,r11,r6
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// add r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stbx r6,r30,r24
	REX_STORE_U8(ctx.r30.u32 + ctx.r24.u32, ctx.r6.u8);
	// beq cr6,0x8a07457c
	if (ctx.cr6.eq) goto loc_8A07457C;
	// addi r11,r31,183
	ctx.r11.s64 = ctx.r31.s64 + 183;
	// cmplwi cr6,r10,15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 15, ctx.xer);
	// lbzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// stbx r9,r30,r11
	REX_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r9.u8);
	// beq cr6,0x8a074468
	if (ctx.cr6.eq) goto loc_8A074468;
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// blt cr6,0x8a074b7c
	if (ctx.cr6.lt) goto loc_8A074B7C;
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r10,r30,r11
	REX_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r10.u8);
	// b 0x8a0745c4
	goto loc_8A0745C4;
loc_8A074468:
	// cmplwi cr6,r9,240
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 240, ctx.xer);
	// blt cr6,0x8a074488
	if (ctx.cr6.lt) goto loc_8A074488;
	// addi r10,r31,160
	ctx.r10.s64 = ctx.r31.s64 + 160;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stbx r9,r30,r11
	REX_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r9.u8);
	// sthx r8,r30,r10
	REX_STORE_U16(ctx.r30.u32 + ctx.r10.u32, ctx.r8.u16);
	// b 0x8a0745c4
	goto loc_8A0745C4;
loc_8A074488:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89ffe588
	ctx.lr = 0x8A074498;
	sub_89FFE588(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8a074b7c
	if (ctx.cr6.eq) goto loc_8A074B7C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8a013ce0
	ctx.lr = 0x8A0744A8;
	sub_8A013CE0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8a013f58
	ctx.lr = 0x8A0744B0;
	sub_8A013F58(ctx, base);
	// addi r11,r31,158
	ctx.r11.s64 = ctx.r31.s64 + 158;
	// lwz r31,80(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r27,0
	ctx.r27.s64 = 0;
	// lhzx r23,r30,r11
	ctx.r23.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r11.u32);
	// lis r11,-30184
	ctx.r11.s64 = -1978138624;
	// addi r29,r11,-14196
	ctx.r29.s64 = ctx.r11.s64 + -14196;
loc_8A0744C8:
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r30,r25
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r25.u32);
	// lwzx r10,r30,r20
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r20.u32);
	// cmplwi cr6,r10,35
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 35, ctx.xer);
	// lhzx r9,r11,r29
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r29.u32);
	// rotlwi r9,r9,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 16);
	// add r28,r9,r8
	ctx.r28.u64 = ctx.r9.u64 + ctx.r8.u64;
	// beq cr6,0x8a074508
	if (ctx.cr6.eq) goto loc_8A074508;
	// cmplwi cr6,r10,36
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 36, ctx.xer);
	// bne cr6,0x8a07451c
	if (!ctx.cr6.eq) goto loc_8A07451C;
	// addi r10,r29,2
	ctx.r10.s64 = ctx.r29.s64 + 2;
	// lwzx r9,r30,r26
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r26.u32);
	// lhzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// rotlwi r7,r8,16
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// subf r31,r7,r9
	ctx.r31.u64 = ctx.r9.u64 - ctx.r7.u64;
	// b 0x8a07451c
	goto loc_8A07451C;
loc_8A074508:
	// addi r9,r29,2
	ctx.r9.s64 = ctx.r29.s64 + 2;
	// lwzx r10,r30,r26
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r26.u32);
	// lhzx r8,r11,r9
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// rotlwi r11,r8,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8A07451C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lbzx r5,r30,r24
	ctx.r5.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r24.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x89ffafa8
	ctx.lr = 0x8A07452C;
	sub_89FFAFA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8a074b7c
	if (ctx.cr6.eq) goto loc_8A074B7C;
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x89ffaf20
	ctx.lr = 0x8A074540;
	sub_89FFAF20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8a074b7c
	if (!ctx.cr6.eq) goto loc_8A074B7C;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// ori r7,r7,32768
	ctx.r7.u64 = ctx.r7.u64 | 32768;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x8a0afa78
	ctx.lr = 0x8A074564;
	sub_8A0AFA78(ctx, base);
	// addi r11,r27,1
	ctx.r11.s64 = ctx.r27.s64 + 1;
	// extsh r27,r11
	ctx.r27.s64 = ctx.r11.s16;
	// cmpwi cr6,r27,4
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 4, ctx.xer);
	// blt cr6,0x8a0744c8
	if (ctx.cr6.lt) goto loc_8A0744C8;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8a0c2378
	__restgprlr_20(ctx, base);
	return;
loc_8A07457C:
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// rlwinm r10,r11,0,10,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x300000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8a074b7c
	if (ctx.cr6.eq) goto loc_8A074B7C;
	// li r5,60
	ctx.r5.s64 = 60;
	// li r4,60
	ctx.r4.s64 = 60;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89ffe588
	ctx.lr = 0x8A07459C;
	sub_89FFE588(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8a074b7c
	if (ctx.cr6.eq) goto loc_8A074B7C;
	// lwzx r11,r30,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// li r3,44
	ctx.r3.s64 = 44;
	// rlwinm r10,r11,0,18,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// stwx r10,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r10.u32);
	// bl 0x8a017608
	ctx.lr = 0x8A0745B8;
	sub_8A017608(ctx, base);
	// addi r9,r31,160
	ctx.r9.s64 = ctx.r31.s64 + 160;
	// li r8,1
	ctx.r8.s64 = 1;
	// sthx r8,r30,r9
	REX_STORE_U16(ctx.r30.u32 + ctx.r9.u32, ctx.r8.u16);
loc_8A0745C4:
	// addi r11,r31,160
	ctx.r11.s64 = ctx.r31.s64 + 160;
	// lwzx r9,r30,r28
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r28.u32);
	// addi r10,r31,28
	ctx.r10.s64 = ctx.r31.s64 + 28;
	// addi r8,r31,16
	ctx.r8.s64 = ctx.r31.s64 + 16;
	// addi r7,r31,20
	ctx.r7.s64 = ctx.r31.s64 + 20;
	// addi r6,r31,36
	ctx.r6.s64 = ctx.r31.s64 + 36;
	// lhzx r5,r30,r11
	ctx.r5.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r11.u32);
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// lwzx r10,r30,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// add. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r11,r30,r28
	REX_STORE_U32(ctx.r30.u32 + ctx.r28.u32, ctx.r11.u32);
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r10,r30,r8
	REX_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r9,r30,r7
	REX_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r8,r30,r6
	REX_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r7,r30,r4
	REX_STORE_U32(ctx.r30.u32 + ctx.r4.u32, ctx.r7.u32);
	// bne 0x8a074b7c
	if (!ctx.cr0.eq) goto loc_8A074B7C;
	// lwzx r11,r30,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// ori r10,r11,16384
	ctx.r10.u64 = ctx.r11.u64 | 16384;
	// stwx r10,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r10.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8a0c2378
	__restgprlr_20(ctx, base);
	return;
loc_8A07463C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89ffc2b8
	ctx.lr = 0x8A074644;
	sub_89FFC2B8(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8a0749bc
	if (ctx.cr6.lt) goto loc_8A0749BC;
	// mulli r5,r11,208
	ctx.r5.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lwzx r4,r30,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// addi r10,r31,56
	ctx.r10.s64 = ctx.r31.s64 + 56;
	// addi r9,r31,12
	ctx.r9.s64 = ctx.r31.s64 + 12;
	// addi r8,r31,28
	ctx.r8.s64 = ctx.r31.s64 + 28;
	// addi r29,r31,52
	ctx.r29.s64 = ctx.r31.s64 + 52;
	// lwzx r11,r5,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r3.u32);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// lwzx r10,r30,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// rlwinm r4,r4,0,12,9
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFCFFFFF;
	// addi r7,r31,60
	ctx.r7.s64 = ctx.r31.s64 + 60;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r11,r30,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// lwzx r8,r30,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// addi r28,r31,52
	ctx.r28.s64 = ctx.r31.s64 + 52;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r10,r30,r3
	REX_STORE_U32(ctx.r30.u32 + ctx.r3.u32, ctx.r10.u32);
	// addi r3,r31,200
	ctx.r3.s64 = ctx.r31.s64 + 200;
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// lwzx r6,r30,r7
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// addi r7,r31,206
	ctx.r7.s64 = ctx.r31.s64 + 206;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r27,r31,200
	ctx.r27.s64 = ctx.r31.s64 + 200;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r26,r31,16
	ctx.r26.s64 = ctx.r31.s64 + 16;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r7,r30,r7
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r7.u32);
	// addi r25,r31,20
	ctx.r25.s64 = ctx.r31.s64 + 20;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwzx r8,r5,r29
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r29.u32);
	// stwx r4,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r4.u32);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// stwx r8,r30,r28
	REX_STORE_U32(ctx.r30.u32 + ctx.r28.u32, ctx.r8.u32);
	// addi r6,r31,36
	ctx.r6.s64 = ctx.r31.s64 + 36;
	// lwzx r8,r5,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// rlwinm r8,r8,0,10,11
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x300000;
	// or r4,r8,r4
	ctx.r4.u64 = ctx.r8.u64 | ctx.r4.u64;
	// addi r29,r31,32
	ctx.r29.s64 = ctx.r31.s64 + 32;
	// stwx r4,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r4.u32);
	// lbzx r8,r5,r3
	ctx.r8.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r3.u32);
	// add r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stwx r10,r30,r9
	REX_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r10.u32);
	// stbx r3,r30,r27
	REX_STORE_U8(ctx.r30.u32 + ctx.r27.u32, ctx.r3.u8);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r7,r30,r26
	REX_STORE_U32(ctx.r30.u32 + ctx.r26.u32, ctx.r7.u32);
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r5,r30,r25
	REX_STORE_U32(ctx.r30.u32 + ctx.r25.u32, ctx.r5.u32);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r4,r30,r6
	REX_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r4.u32);
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r3,r30,r29
	REX_STORE_U32(ctx.r30.u32 + ctx.r29.u32, ctx.r3.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8a0c2378
	__restgprlr_20(ctx, base);
	return;
loc_8A074728:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89ffc2b8
	ctx.lr = 0x8A074730;
	sub_89FFC2B8(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// blt cr6,0x8a0749c0
	if (ctx.cr6.lt) goto loc_8A0749C0;
	// bl 0x8a071238
	ctx.lr = 0x8A074748;
	sub_8A071238(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8a0c2378
	__restgprlr_20(ctx, base);
	return;
loc_8A074750:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89ffc2b8
	ctx.lr = 0x8A074758;
	sub_89FFC2B8(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// blt cr6,0x8a0749c0
	if (ctx.cr6.lt) goto loc_8A0749C0;
	// bl 0x8a071538
	ctx.lr = 0x8A074770;
	sub_8A071538(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8a0c2378
	__restgprlr_20(ctx, base);
	return;
loc_8A074778:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89ffc2b8
	ctx.lr = 0x8A074780;
	sub_89FFC2B8(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// blt cr6,0x8a0749c0
	if (ctx.cr6.lt) goto loc_8A0749C0;
	// bl 0x8a071838
	ctx.lr = 0x8A074798;
	sub_8A071838(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8a0c2378
	__restgprlr_20(ctx, base);
	return;
loc_8A0747A0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89ffc2b8
	ctx.lr = 0x8A0747A8;
	sub_89FFC2B8(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// blt cr6,0x8a0749c0
	if (ctx.cr6.lt) goto loc_8A0749C0;
	// bl 0x8a071b38
	ctx.lr = 0x8A0747C0;
	sub_8A071B38(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8a0c2378
	__restgprlr_20(ctx, base);
	return;
loc_8A0747C8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89ffc2b8
	ctx.lr = 0x8A0747D0;
	sub_89FFC2B8(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// blt cr6,0x8a0749c0
	if (ctx.cr6.lt) goto loc_8A0749C0;
	// bl 0x8a071e18
	ctx.lr = 0x8A0747E8;
	sub_8A071E18(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8a0c2378
	__restgprlr_20(ctx, base);
	return;
loc_8A0747F0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89ffc2b8
	ctx.lr = 0x8A0747F8;
	sub_89FFC2B8(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// blt cr6,0x8a0749c0
	if (ctx.cr6.lt) goto loc_8A0749C0;
	// bl 0x8a072118
	ctx.lr = 0x8A074810;
	sub_8A072118(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8a0c2378
	__restgprlr_20(ctx, base);
	return;
loc_8A074818:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89ffc2b8
	ctx.lr = 0x8A074820;
	sub_89FFC2B8(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// blt cr6,0x8a0749c0
	if (ctx.cr6.lt) goto loc_8A0749C0;
	// bl 0x8a0739b0
	ctx.lr = 0x8A074838;
	sub_8A0739B0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8a0c2378
	__restgprlr_20(ctx, base);
	return;
loc_8A074840:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89ffc2b8
	ctx.lr = 0x8A074848;
	sub_89FFC2B8(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// blt cr6,0x8a0749c0
	if (ctx.cr6.lt) goto loc_8A0749C0;
	// bl 0x8a072418
	ctx.lr = 0x8A074860;
	sub_8A072418(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8a0c2378
	__restgprlr_20(ctx, base);
	return;
loc_8A074868:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89ffc2b8
	ctx.lr = 0x8A074870;
	sub_89FFC2B8(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// blt cr6,0x8a0749c0
	if (ctx.cr6.lt) goto loc_8A0749C0;
	// bl 0x8a072608
	ctx.lr = 0x8A074888;
	sub_8A072608(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8a0c2378
	__restgprlr_20(ctx, base);
	return;
loc_8A074890:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89ffc2b8
	ctx.lr = 0x8A074898;
	sub_89FFC2B8(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// blt cr6,0x8a0749c0
	if (ctx.cr6.lt) goto loc_8A0749C0;
	// bl 0x8a072790
	ctx.lr = 0x8A0748B0;
	sub_8A072790(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8a0c2378
	__restgprlr_20(ctx, base);
	return;
loc_8A0748B8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89ffc2b8
	ctx.lr = 0x8A0748C0;
	sub_89FFC2B8(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// blt cr6,0x8a0749c0
	if (ctx.cr6.lt) goto loc_8A0749C0;
	// bl 0x8a0736a8
	ctx.lr = 0x8A0748D8;
	sub_8A0736A8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8a0c2378
	__restgprlr_20(ctx, base);
	return;
loc_8A0748E0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89ffc2b8
	ctx.lr = 0x8A0748E8;
	sub_89FFC2B8(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// blt cr6,0x8a0749c0
	if (ctx.cr6.lt) goto loc_8A0749C0;
	// bl 0x8a073200
	ctx.lr = 0x8A074900;
	sub_8A073200(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8a0c2378
	__restgprlr_20(ctx, base);
	return;
loc_8A074908:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89ffc2b8
	ctx.lr = 0x8A074910;
	sub_89FFC2B8(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// blt cr6,0x8a0749c0
	if (ctx.cr6.lt) goto loc_8A0749C0;
	// bl 0x8a073478
	ctx.lr = 0x8A074928;
	sub_8A073478(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8a0c2378
	__restgprlr_20(ctx, base);
	return;
loc_8A074930:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89ffc2b8
	ctx.lr = 0x8A074938;
	sub_89FFC2B8(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// blt cr6,0x8a0749c0
	if (ctx.cr6.lt) goto loc_8A0749C0;
	// bl 0x8a072f78
	ctx.lr = 0x8A074950;
	sub_8A072F78(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8a0c2378
	__restgprlr_20(ctx, base);
	return;
loc_8A074958:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89ffc2b8
	ctx.lr = 0x8A074960;
	sub_89FFC2B8(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// blt cr6,0x8a0749c0
	if (ctx.cr6.lt) goto loc_8A0749C0;
	// bl 0x8a0729c0
	ctx.lr = 0x8A074978;
	sub_8A0729C0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8a0c2378
	__restgprlr_20(ctx, base);
	return;
loc_8A074980:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89ffc2b8
	ctx.lr = 0x8A074988;
	sub_89FFC2B8(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// blt cr6,0x8a0749c0
	if (ctx.cr6.lt) goto loc_8A0749C0;
	// bl 0x8a072d48
	ctx.lr = 0x8A0749A0;
	sub_8A072D48(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8a0c2378
	__restgprlr_20(ctx, base);
	return;
loc_8A0749A8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89ffc2b8
	ctx.lr = 0x8A0749B0;
	sub_89FFC2B8(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8a0749cc
	if (!ctx.cr6.lt) goto loc_8A0749CC;
loc_8A0749BC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_8A0749C0:
	// bl 0x8a073c10
	ctx.lr = 0x8A0749C4;
	sub_8A073C10(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8a0c2378
	__restgprlr_20(ctx, base);
	return;
loc_8A0749CC:
	// mulli r28,r11,208
	ctx.r28.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lwzx r10,r30,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// addi r9,r31,48
	ctx.r9.s64 = ctx.r31.s64 + 48;
	// addi r8,r31,56
	ctx.r8.s64 = ctx.r31.s64 + 56;
	// rlwinm r5,r10,0,12,9
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFCFFFFF;
	// addi r22,r31,48
	ctx.r22.s64 = ctx.r31.s64 + 48;
	// addi r6,r31,60
	ctx.r6.s64 = ctx.r31.s64 + 60;
	// lwzx r11,r28,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r9.u32);
	// addi r7,r31,52
	ctx.r7.s64 = ctx.r31.s64 + 52;
	// lwzx r10,r30,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// addi r23,r31,52
	ctx.r23.s64 = ctx.r31.s64 + 52;
	// addi r4,r31,206
	ctx.r4.s64 = ctx.r31.s64 + 206;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r10,r30,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	// addi r9,r31,200
	ctx.r9.s64 = ctx.r31.s64 + 200;
	// stwx r3,r30,r22
	REX_STORE_U32(ctx.r30.u32 + ctx.r22.u32, ctx.r3.u32);
	// addi r27,r31,12
	ctx.r27.s64 = ctx.r31.s64 + 12;
	// lwzx r11,r28,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r7.u32);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r5,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r5.u32);
	// addi r24,r31,200
	ctx.r24.s64 = ctx.r31.s64 + 200;
	// stwx r8,r30,r23
	REX_STORE_U32(ctx.r30.u32 + ctx.r23.u32, ctx.r8.u32);
	// lwzx r6,r28,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// lbzx r10,r30,r4
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r4.u32);
	// rlwinm r4,r6,0,10,11
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x300000;
	// or r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 | ctx.r5.u64;
	// lwzx r7,r30,r27
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r27.u32);
	// stwx r3,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r3.u32);
	// cmplwi cr6,r7,4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 4, ctx.xer);
	// lbzx r11,r28,r9
	ctx.r11.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r9.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stbx r11,r30,r24
	REX_STORE_U8(ctx.r30.u32 + ctx.r24.u32, ctx.r11.u8);
	// beq cr6,0x8a074b7c
	if (ctx.cr6.eq) goto loc_8A074B7C;
	// addi r21,r31,158
	ctx.r21.s64 = ctx.r31.s64 + 158;
	// addi r25,r31,197
	ctx.r25.s64 = ctx.r31.s64 + 197;
	// addi r10,r31,164
	ctx.r10.s64 = ctx.r31.s64 + 164;
	// addi r26,r31,196
	ctx.r26.s64 = ctx.r31.s64 + 196;
	// lhzx r9,r28,r21
	ctx.r9.u64 = REX_LOAD_U16(ctx.r28.u32 + ctx.r21.u32);
	// lbzx r8,r30,r25
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r25.u32);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// lbzx r6,r30,r26
	ctx.r6.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r26.u32);
	// addi r5,r11,512
	ctx.r5.s64 = ctx.r11.s64 + 512;
	// extsb r4,r6
	ctx.r4.s64 = ctx.r6.s8;
	// srawi r3,r5,10
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3FF) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 10;
	// clrlwi r11,r3,27
	ctx.r11.u64 = ctx.r3.u32 & 0x1F;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stwx r11,r30,r20
	REX_STORE_U32(ctx.r30.u32 + ctx.r20.u32, ctx.r11.u32);
	// lhzx r10,r28,r10
	ctx.r10.u64 = REX_LOAD_U16(ctx.r28.u32 + ctx.r10.u32);
	// clrlwi r9,r10,30
	ctx.r9.u64 = ctx.r10.u32 & 0x3;
	// subf r8,r7,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r7.u64;
	// stwx r9,r30,r27
	REX_STORE_U32(ctx.r30.u32 + ctx.r27.u32, ctx.r9.u32);
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addic r6,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r6.s64 = ctx.r8.s64 + -1;
	// subf r5,r4,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r4.u64;
	// subfe r4,r6,r8
	temp.u8 = (~ctx.r6.u32 + ctx.r8.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r3,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r3.s64 = ctx.r5.s64 + -1;
	// subfe r11,r3,r5
	temp.u8 = (~ctx.r3.u32 + ctx.r5.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r3.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// or r10,r4,r11
	ctx.r10.u64 = ctx.r4.u64 | ctx.r11.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8a074b7c
	if (ctx.cr6.eq) goto loc_8A074B7C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89ffbed8
	ctx.lr = 0x8A074AC8;
	sub_89FFBED8(ctx, base);
	// lwzx r10,r30,r27
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r27.u32);
	// lwzx r11,r30,r20
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r20.u32);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stbx r10,r30,r25
	REX_STORE_U8(ctx.r30.u32 + ctx.r25.u32, ctx.r10.u8);
	// stbx r11,r30,r26
	REX_STORE_U8(ctx.r30.u32 + ctx.r26.u32, ctx.r11.u8);
	// bne cr6,0x8a074b7c
	if (!ctx.cr6.eq) goto loc_8A074B7C;
	// addi r11,r31,168
	ctx.r11.s64 = ctx.r31.s64 + 168;
	// lhzx r10,r28,r21
	ctx.r10.u64 = REX_LOAD_U16(ctx.r28.u32 + ctx.r21.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// srawi r9,r9,6
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3F) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 6;
	// lwzx r8,r28,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8a074b0c
	if (!ctx.cr6.gt) goto loc_8A074B0C;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
loc_8A074B0C:
	// lis r11,-30210
	ctx.r11.s64 = -1979842560;
	// lwzx r3,r30,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// rlwinm r8,r9,1,22,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x3FE;
	// lwzx r4,r30,r23
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r23.u32);
	// addi r6,r11,9016
	ctx.r6.s64 = ctx.r11.s64 + 9016;
	// lwzx r10,r30,r22
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r22.u32);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// lbzx r7,r30,r24
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r24.u32);
	// lis r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// ori r29,r5,39321
	ctx.r29.u64 = ctx.r5.u64 | 39321;
	// lhzx r8,r8,r6
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r6.u32);
	// rlwinm r28,r11,1,22,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x3FE;
	// addi r31,r31,207
	ctx.r31.s64 = ctx.r31.s64 + 207;
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// li r8,3
	ctx.r8.s64 = 3;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r28,r28,r6
	ctx.r28.u64 = REX_LOAD_U16(ctx.r28.u32 + ctx.r6.u32);
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lbzx r6,r30,r31
	ctx.r6.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r31.u32);
	// extsh r11,r28
	ctx.r11.s64 = ctx.r28.s16;
	// rlwinm r5,r5,14,0,17
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 14) & 0xFFFFC000;
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// srawi r5,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 8;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8a0bb4f0
	ctx.lr = 0x8A074B7C;
	sub_8A0BB4F0(ctx, base);
loc_8A074B7C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8a0c2378
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8A07A350) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30165
	ctx.r11.s64 = -1976893440;
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// addi r10,r11,13736
	ctx.r10.s64 = ctx.r11.s64 + 13736;
	// mulli r11,r9,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(208));
	// addi r5,r10,188
	ctx.r5.s64 = ctx.r10.s64 + 188;
	// li r4,0
	ctx.r4.s64 = 0;
	// lbzx r6,r11,r5
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,6
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 6, ctx.xer);
	// bgt cr6,0x8a07a4e0
	if (ctx.cr6.gt) goto loc_8A07A4E0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8a07a3b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8A07A3B0;
	// bdzf 4*cr6+eq,0x8a07a3c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8A07A3C8;
	// bdzf 4*cr6+eq,0x8a07a440
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8A07A440;
	// bdzf 4*cr6+eq,0x8a07a3c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8A07A3C8;
	// bdzf 4*cr6+eq,0x8a07a440
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8A07A440;
	// bne cr6,0x8a07a4b8
	if (!ctx.cr6.eq) goto loc_8A07A4B8;
	// addi r9,r10,48
	ctx.r9.s64 = ctx.r10.s64 + 48;
	// lis r8,272
	ctx.r8.s64 = 17825792;
	// lwzx r7,r11,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8a07a4e0
	if (!ctx.cr6.lt) goto loc_8A07A4E0;
	// b 0x8a07a4d4
	goto loc_8A07A4D4;
loc_8A07A3B0:
	// addi r8,r10,56
	ctx.r8.s64 = ctx.r10.s64 + 56;
	// lwzx r9,r11,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// addic. r9,r9,4096
	ctx.xer.ca = ctx.r9.u32 > 4294963199;
	ctx.r9.s64 = ctx.r9.s64 + 4096;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stwx r9,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u32);
	// bne 0x8a07a4e0
	if (!ctx.cr0.eq) goto loc_8A07A4E0;
	// b 0x8a07a4d4
	goto loc_8A07A4D4;
loc_8A07A3C8:
	// addi r7,r10,189
	ctx.r7.s64 = ctx.r10.s64 + 189;
	// lbzx r8,r11,r7
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// blt cr6,0x8a07a424
	if (ctx.cr6.lt) goto loc_8A07A424;
	// bne cr6,0x8a07a4e0
	if (!ctx.cr6.eq) goto loc_8A07A4E0;
	// addi r8,r10,183
	ctx.r8.s64 = ctx.r10.s64 + 183;
	// lbzx r9,r11,r8
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// clrlwi r3,r9,24
	ctx.r3.u64 = ctx.r9.u32 & 0xFF;
	// stbx r3,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r3.u8);
	// cmplwi cr6,r3,240
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 240, ctx.xer);
	// blt cr6,0x8a07a4e0
	if (ctx.cr6.lt) goto loc_8A07A4E0;
	// addi r9,r10,192
	ctx.r9.s64 = ctx.r10.s64 + 192;
	// stbx r4,r11,r7
	REX_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r4.u8);
	// stbx r4,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r4.u8);
	// addi r8,r6,1
	ctx.r8.s64 = ctx.r6.s64 + 1;
	// stbx r8,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r8.u8);
	// lbzx r7,r11,r9
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// extsb r3,r7
	ctx.r3.s64 = ctx.r7.s8;
	// rlwinm r8,r3,0,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFC;
	// stbx r8,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u8);
	// b 0x8a07a4e0
	goto loc_8A07A4E0;
loc_8A07A424:
	// addi r9,r10,192
	ctx.r9.s64 = ctx.r10.s64 + 192;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stbx r8,r11,r7
	REX_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r8.u8);
	// lbzx r3,r11,r9
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// ori r8,r3,3
	ctx.r8.u64 = ctx.r3.u64 | 3;
	// stbx r8,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u8);
	// b 0x8a07a4e0
	goto loc_8A07A4E0;
loc_8A07A440:
	// addi r7,r10,189
	ctx.r7.s64 = ctx.r10.s64 + 189;
	// lbzx r8,r11,r7
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// blt cr6,0x8a07a49c
	if (ctx.cr6.lt) goto loc_8A07A49C;
	// bne cr6,0x8a07a4e0
	if (!ctx.cr6.eq) goto loc_8A07A4E0;
	// addi r8,r10,183
	ctx.r8.s64 = ctx.r10.s64 + 183;
	// lbzx r9,r11,r8
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// clrlwi r3,r9,24
	ctx.r3.u64 = ctx.r9.u32 & 0xFF;
	// stbx r3,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r3.u8);
	// cmplwi cr6,r3,240
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 240, ctx.xer);
	// blt cr6,0x8a07a4e0
	if (ctx.cr6.lt) goto loc_8A07A4E0;
	// addi r9,r10,192
	ctx.r9.s64 = ctx.r10.s64 + 192;
	// stbx r4,r11,r7
	REX_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r4.u8);
	// stbx r4,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r4.u8);
	// addi r8,r6,1
	ctx.r8.s64 = ctx.r6.s64 + 1;
	// stbx r8,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r8.u8);
	// lbzx r7,r11,r9
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// extsb r3,r7
	ctx.r3.s64 = ctx.r7.s8;
	// rlwinm r8,r3,0,30,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stbx r8,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u8);
	// b 0x8a07a4e0
	goto loc_8A07A4E0;
loc_8A07A49C:
	// addi r9,r10,192
	ctx.r9.s64 = ctx.r10.s64 + 192;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stbx r8,r11,r7
	REX_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r8.u8);
	// lbzx r3,r11,r9
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// ori r8,r3,4
	ctx.r8.u64 = ctx.r3.u64 | 4;
	// stbx r8,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u8);
	// b 0x8a07a4e0
	goto loc_8A07A4E0;
loc_8A07A4B8:
	// addi r8,r10,56
	ctx.r8.s64 = ctx.r10.s64 + 56;
	// lis r7,-2
	ctx.r7.s64 = -131072;
	// lwzx r9,r11,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// addi r9,r9,-4096
	ctx.r9.s64 = ctx.r9.s64 + -4096;
	// stwx r9,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u32);
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x8a07a4e0
	if (!ctx.cr6.eq) goto loc_8A07A4E0;
loc_8A07A4D4:
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stbx r9,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r9.u8);
loc_8A07A4E0:
	// addi r9,r10,48
	ctx.r9.s64 = ctx.r10.s64 + 48;
	// addi r8,r10,56
	ctx.r8.s64 = ctx.r10.s64 + 56;
	// lwzx r7,r11,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r8,r11,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stwx r7,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r7.u32);
	// lhzx r6,r11,r9
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// addic. r9,r5,-160
	ctx.xer.ca = ctx.r5.u32 > 159;
	ctx.r9.s64 = ctx.r5.s64 + -160;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x8a07a50c
	if (!ctx.cr0.lt) goto loc_8A07A50C;
	// neg r9,r9
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r9.u64);
loc_8A07A50C:
	// cmpwi cr6,r9,256
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 256, ctx.xer);
	// bgt cr6,0x8a07a548
	if (ctx.cr6.gt) goto loc_8A07A548;
	// addi r9,r10,52
	ctx.r9.s64 = ctx.r10.s64 + 52;
	// addi r8,r10,60
	ctx.r8.s64 = ctx.r10.s64 + 60;
	// lwzx r7,r11,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r8,r11,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stwx r7,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r7.u32);
	// lhzx r6,r11,r9
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// addic. r9,r5,-512
	ctx.xer.ca = ctx.r5.u32 > 511;
	ctx.r9.s64 = ctx.r5.s64 + -512;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x8a07a540
	if (!ctx.cr0.lt) goto loc_8A07A540;
	// neg r9,r9
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r9.u64);
loc_8A07A540:
	// cmpwi cr6,r9,208
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 208, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_8A07A548:
	// stwx r4,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8A07BA20) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8a0c2340
	ctx.lr = 0x8A07BA28;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30160
	ctx.r11.s64 = -1976565760;
	// lhz r3,29208(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 29208);
	// bl 0x8a015300
	ctx.lr = 0x8A07BA38;
	sub_8A015300(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8a07ba48
	if (!ctx.cr6.eq) goto loc_8A07BA48;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8a0c2390
	__restgprlr_26(ctx, base);
	return;
loc_8A07BA48:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x89ffc148
	ctx.lr = 0x8A07BA50;
	sub_89FFC148(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8a07bb5c
	if (ctx.cr6.eq) goto loc_8A07BB5C;
	// lis r11,-30137
	ctx.r11.s64 = -1975058432;
	// lis r10,-30165
	ctx.r10.s64 = -1976893440;
	// lis r9,-30159
	ctx.r9.s64 = -1976500224;
	// addi r30,r10,13736
	ctx.r30.s64 = ctx.r10.s64 + 13736;
	// lis r8,-16336
	ctx.r8.s64 = -1070596096;
	// lhz r3,3704(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 3704);
	// addi r10,r30,158
	ctx.r10.s64 = ctx.r30.s64 + 158;
	// addi r6,r30,4
	ctx.r6.s64 = ctx.r30.s64 + 4;
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// lhz r11,-14776(r9)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + -14776);
	// addi r28,r30,8
	ctx.r28.s64 = ctx.r30.s64 + 8;
	// mulli r31,r7,208
	ctx.r31.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(208));
	// sthx r11,r31,r10
	REX_STORE_U16(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u16);
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r7,r30,12
	ctx.r7.s64 = ctx.r30.s64 + 12;
	// extsh r10,r5
	ctx.r10.s64 = ctx.r5.s16;
	// ori r5,r8,276
	ctx.r5.u64 = ctx.r8.u64 | 276;
	// addi r4,r10,512
	ctx.r4.s64 = ctx.r10.s64 + 512;
	// addi r10,r30,162
	ctx.r10.s64 = ctx.r30.s64 + 162;
	// stwx r5,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r5.u32);
	// srawi r9,r4,10
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3FF) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 10;
	// li r4,6
	ctx.r4.s64 = 6;
	// li r29,0
	ctx.r29.s64 = 0;
	// stwx r4,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r4.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// sthx r11,r31,r10
	REX_STORE_U16(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u16);
	// clrlwi r11,r9,27
	ctx.r11.u64 = ctx.r9.u32 & 0x1F;
	// stwx r29,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r29.u32);
	// stwx r11,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// bl 0x89ffbe00
	ctx.lr = 0x8A07BAD0;
	sub_89FFBE00(ctx, base);
	// lis r7,-30137
	ctx.r7.s64 = -1975058432;
	// lis r10,-30160
	ctx.r10.s64 = -1976565760;
	// addi r9,r30,24
	ctx.r9.s64 = ctx.r30.s64 + 24;
	// addi r8,r30,76
	ctx.r8.s64 = ctx.r30.s64 + 76;
	// addi r6,r30,80
	ctx.r6.s64 = ctx.r30.s64 + 80;
	// lhz r11,-1220(r7)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r7.u32 + -1220);
	// addi r26,r30,72
	ctx.r26.s64 = ctx.r30.s64 + 72;
	// lbz r4,7290(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 7290);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// subfic r10,r11,512
	ctx.xer.ca = ctx.r11.u32 <= 512;
	ctx.r10.u64 = static_cast<uint64_t>(512) - ctx.r11.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwzx r7,r31,r28
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// lwzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// rlwinm r9,r7,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r9,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r9.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r8,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r8.u32);
	// lwz r7,12(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// mullw r10,r11,r10
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r9,r10,24,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// sthx r9,r31,r26
	REX_STORE_U16(ctx.r31.u32 + ctx.r26.u32, ctx.r9.u16);
	// bl 0x89ffd0b0
	ctx.lr = 0x8A07BB34;
	sub_89FFD0B0(ctx, base);
	// lis r8,-30137
	ctx.r8.s64 = -1975058432;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,20320(r8)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + 20320);
	// bl 0x89ffd4f8
	ctx.lr = 0x8A07BB44;
	sub_89FFD4F8(ctx, base);
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
loc_8A07BB5C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8a0c2390
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8A07C1E0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8a0c234c
	ctx.lr = 0x8A07C1E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30165
	ctx.r11.s64 = -1976893440;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r30,r11,13736
	ctx.r30.s64 = ctx.r11.s64 + 13736;
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
	// blt cr6,0x8a07c220
	if (ctx.cr6.lt) goto loc_8A07C220;
	// bne cr6,0x8a07c23c
	if (!ctx.cr6.eq) goto loc_8A07C23C;
	// bl 0x8a07c0b8
	ctx.lr = 0x8A07C21C;
	sub_8A07C0B8(ctx, base);
	// b 0x8a07c23c
	goto loc_8A07C23C;
loc_8A07C220:
	// addi r9,r30,48
	ctx.r9.s64 = ctx.r30.s64 + 48;
	// lhzx r8,r31,r9
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r9.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// cmpwi cr6,r7,160
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 160, ctx.xer);
	// bgt cr6,0x8a07c23c
	if (ctx.cr6.gt) goto loc_8A07C23C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u8);
loc_8A07C23C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8a07bf80
	ctx.lr = 0x8A07C244;
	sub_8A07BF80(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8a07c2d4
	if (!ctx.cr6.eq) goto loc_8A07C2D4;
	// li r5,30
	ctx.r5.s64 = 30;
	// li r4,60
	ctx.r4.s64 = 60;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89ffe588
	ctx.lr = 0x8A07C260;
	sub_89FFE588(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8a07c2d4
	if (ctx.cr6.eq) goto loc_8A07C2D4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89ffb0c0
	ctx.lr = 0x8A07C270;
	sub_89FFB0C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8a07c2d4
	if (ctx.cr6.eq) goto loc_8A07C2D4;
	// bl 0x8a013c88
	ctx.lr = 0x8A07C27C;
	sub_8A013C88(ctx, base);
	// addi r10,r30,52
	ctx.r10.s64 = ctx.r30.s64 + 52;
	// lis r11,-30160
	ctx.r11.s64 = -1976565760;
	// addi r9,r30,48
	ctx.r9.s64 = ctx.r30.s64 + 48;
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// addi r11,r11,27472
	ctx.r11.s64 = ctx.r11.s64 + 27472;
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
	// bl 0x8a013ec8
	ctx.lr = 0x8A07C2B8;
	sub_8A013EC8(ctx, base);
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
	// bl 0x8a0afa78
	ctx.lr = 0x8A07C2D4;
	sub_8A0AFA78(ctx, base);
loc_8A07C2D4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8a0c239c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8A07CC60) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8a0c2310
	ctx.lr = 0x8A07CC68;
	__savegprlr_14(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// sth r3,310(r1)
	REX_STORE_U16(ctx.r1.u32 + 310, ctx.r3.u16);
	// li r3,74
	ctx.r3.s64 = 74;
	// sth r4,318(r1)
	REX_STORE_U16(ctx.r1.u32 + 318, ctx.r4.u16);
	// sth r5,326(r1)
	REX_STORE_U16(ctx.r1.u32 + 326, ctx.r5.u16);
	// stb r6,335(r1)
	REX_STORE_U8(ctx.r1.u32 + 335, ctx.r6.u8);
	// sth r7,342(r1)
	REX_STORE_U16(ctx.r1.u32 + 342, ctx.r7.u16);
	// stw r8,348(r1)
	REX_STORE_U32(ctx.r1.u32 + 348, ctx.r8.u32);
	// bl 0x8a015300
	ctx.lr = 0x8A07CC90;
	sub_8A015300(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8a07cf14
	if (ctx.cr6.eq) goto loc_8A07CF14;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x89ffc148
	ctx.lr = 0x8A07CCA0;
	sub_89FFC148(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8a07cf14
	if (ctx.cr6.eq) goto loc_8A07CF14;
	// lis r11,-30184
	ctx.r11.s64 = -1978138624;
	// lis r10,-30137
	ctx.r10.s64 = -1975058432;
	// addi r11,r11,-12724
	ctx.r11.s64 = ctx.r11.s64 + -12724;
	// addi r10,r10,3704
	ctx.r10.s64 = ctx.r10.s64 + 3704;
	// lis r9,-30137
	ctx.r9.s64 = -1975058432;
	// addi r24,r11,-2
	ctx.r24.s64 = ctx.r11.s64 + -2;
	// addi r11,r10,-2
	ctx.r11.s64 = ctx.r10.s64 + -2;
	// li r4,0
	ctx.r4.s64 = 0;
	// lis r8,16838
	ctx.r8.s64 = 1103495168;
	// lis r10,-30165
	ctx.r10.s64 = -1976893440;
	// lwz r29,-916(r9)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r9.u32 + -916);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// ori r26,r8,20077
	ctx.r26.u64 = ctx.r8.u64 | 20077;
	// addi r30,r10,13736
	ctx.r30.s64 = ctx.r10.s64 + 13736;
	// b 0x8a07cce8
	goto loc_8A07CCE8;
loc_8A07CCE4:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8A07CCE8:
	// lhzu r25,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r25.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// addi r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 4;
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// extsh r8,r25
	ctx.r8.s64 = ctx.r25.s16;
	// li r7,74
	ctx.r7.s64 = 74;
	// mulli r31,r8,208
	ctx.r31.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(208));
	// stwx r9,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r9.u32);
	// stwx r7,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r7.u32);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// extsh r6,r28
	ctx.r6.s64 = ctx.r28.s16;
	// addi r5,r30,48
	ctx.r5.s64 = ctx.r30.s64 + 48;
	// mulli r9,r6,208
	ctx.r9.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(208));
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
	// addi r3,r30,52
	ctx.r3.s64 = ctx.r30.s64 + 52;
	// addi r10,r30,52
	ctx.r10.s64 = ctx.r30.s64 + 52;
	// lwzx r8,r9,r5
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// stwx r8,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r8.u32);
	// lwzx r7,r9,r3
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// stwx r7,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r7.u32);
	// beq cr6,0x8a07cd54
	if (ctx.cr6.eq) goto loc_8A07CD54;
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// li r10,4
	ctx.r10.s64 = 4;
	// add r28,r31,r11
	ctx.r28.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stwx r10,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
	// b 0x8a07cdac
	goto loc_8A07CDAC;
loc_8A07CD54:
	// mullw r9,r29,r26
	ctx.r9.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r26.s32);
	// lhz r3,326(r1)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r1.u32 + 326);
	// lhz r8,318(r1)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 318);
	// lwzx r6,r31,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwzx r7,r31,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r29,r9,12345
	ctx.r29.s64 = ctx.r9.s64 + 12345;
	// rotlwi r9,r3,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r3.u32, 16);
	// addi r28,r29,1
	ctx.r28.s64 = ctx.r29.s64 + 1;
	// addi r5,r30,8
	ctx.r5.s64 = ctx.r30.s64 + 8;
	// rotlwi r8,r8,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// srawi r28,r28,16
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0xFFFF) != 0);
	ctx.r28.s64 = ctx.r28.s32 >> 16;
	// addi r3,r30,56
	ctx.r3.s64 = ctx.r30.s64 + 56;
	// addi r23,r30,60
	ctx.r23.s64 = ctx.r30.s64 + 60;
	// rlwinm r22,r28,19,30,31
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 19) & 0x3;
	// add r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 + ctx.r8.u64;
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stwx r22,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r22.u32);
	// stwx r6,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r6.u32);
	// add r28,r31,r5
	ctx.r28.u64 = ctx.r31.u64 + ctx.r5.u64;
	// stwx r8,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r8.u32);
	// stwx r9,r31,r23
	REX_STORE_U32(ctx.r31.u32 + ctx.r23.u32, ctx.r9.u32);
	// stwx r7,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r7.u32);
loc_8A07CDAC:
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stwx r4,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r4.u32);
	// bl 0x89ffbe00
	ctx.lr = 0x8A07CDBC;
	sub_89FFBE00(ctx, base);
	// mullw r11,r29,r26
	ctx.r11.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r26.s32);
	// lhz r7,310(r1)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r1.u32 + 310);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// sth r25,310(r1)
	REX_STORE_U16(ctx.r1.u32 + 310, ctx.r25.u16);
	// std r26,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r26.u64);
	// lhz r6,342(r1)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + 342);
	// lwz r5,348(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// std r30,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r30.u64);
	// addi r10,r30,24
	ctx.r10.s64 = ctx.r30.s64 + 24;
	// addi r29,r11,12345
	ctx.r29.s64 = ctx.r11.s64 + 12345;
	// addi r8,r30,100
	ctx.r8.s64 = ctx.r30.s64 + 100;
	// addi r22,r29,1
	ctx.r22.s64 = ctx.r29.s64 + 1;
	// std r29,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r29.u64);
	// addi r4,r30,76
	ctx.r4.s64 = ctx.r30.s64 + 76;
	// lwzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lis r10,-30137
	ctx.r10.s64 = -1975058432;
	// addi r23,r30,80
	ctx.r23.s64 = ctx.r30.s64 + 80;
	// addi r20,r30,158
	ctx.r20.s64 = ctx.r30.s64 + 158;
	// addi r15,r30,148
	ctx.r15.s64 = ctx.r30.s64 + 148;
	// addi r18,r30,200
	ctx.r18.s64 = ctx.r30.s64 + 200;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// addi r28,r30,204
	ctx.r28.s64 = ctx.r30.s64 + 204;
	// lhz r17,2(r24)
	ctx.r17.u64 = REX_LOAD_U16(ctx.r24.u32 + 2);
	// addi r19,r30,168
	ctx.r19.s64 = ctx.r30.s64 + 168;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lhz r10,-1220(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + -1220);
	// addi r21,r30,72
	ctx.r21.s64 = ctx.r30.s64 + 72;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbzu r9,4(r24)
	ea = 4 + ctx.r24.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r24.u32 = ea;
	// subfic r16,r10,512
	ctx.xer.ca = ctx.r10.u32 <= 512;
	ctx.r16.u64 = static_cast<uint64_t>(512) - ctx.r10.u64;
	// srawi r22,r22,16
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0xFFFF) != 0);
	ctx.r22.s64 = ctx.r22.s32 >> 16;
	// add r10,r31,r8
	ctx.r10.u64 = ctx.r31.u64 + ctx.r8.u64;
	// rlwinm r8,r22,19,30,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 19) & 0x3;
	// std r9,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// addi r9,r30,182
	ctx.r9.s64 = ctx.r30.s64 + 182;
	// lwz r22,4(r11)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r14,r30,154
	ctx.r14.s64 = ctx.r30.s64 + 154;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r29,r30,154
	ctx.r29.s64 = ctx.r30.s64 + 154;
	// ld r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// addi r26,r30,68
	ctx.r26.s64 = ctx.r30.s64 + 68;
	// std r24,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r24.u64);
	// addi r24,r30,44
	ctx.r24.s64 = ctx.r30.s64 + 44;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// stwx r22,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r22.u32);
	// addi r22,r30,104
	ctx.r22.s64 = ctx.r30.s64 + 104;
	// lwz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// stwx r4,r31,r23
	REX_STORE_U32(ctx.r31.u32 + ctx.r23.u32, ctx.r4.u32);
	// addi r23,r30,64
	ctx.r23.s64 = ctx.r30.s64 + 64;
	// lwz r4,12(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// lbz r11,335(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 335);
	// addi r30,r30,66
	ctx.r30.s64 = ctx.r30.s64 + 66;
	// sthx r6,r31,r20
	REX_STORE_U16(ctx.r31.u32 + ctx.r20.u32, ctx.r6.u16);
	// addi r6,r8,1
	ctx.r6.s64 = ctx.r8.s64 + 1;
	// sthx r7,r31,r15
	REX_STORE_U16(ctx.r31.u32 + ctx.r15.u32, ctx.r7.u16);
	// mullw r7,r4,r16
	ctx.r7.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r16.s32);
	// stwx r5,r31,r19
	REX_STORE_U32(ctx.r31.u32 + ctx.r19.u32, ctx.r5.u32);
	// stbx r11,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r11.u8);
	// stbx r11,r31,r18
	REX_STORE_U8(ctx.r31.u32 + ctx.r18.u32, ctx.r11.u8);
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r5,r7,24,16,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r7,7
	ctx.r7.s64 = 7;
	// sthx r5,r31,r21
	REX_STORE_U16(ctx.r31.u32 + ctx.r21.u32, ctx.r5.u16);
	// lhzx r8,r3,r14
	ctx.r8.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r14.u32);
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// sthx r8,r31,r29
	REX_STORE_U16(ctx.r31.u32 + ctx.r29.u32, ctx.r8.u16);
	// stbx r7,r31,r26
	REX_STORE_U8(ctx.r31.u32 + ctx.r26.u32, ctx.r7.u8);
	// stwx r10,r31,r24
	REX_STORE_U32(ctx.r31.u32 + ctx.r24.u32, ctx.r10.u32);
	// stwx r4,r31,r22
	REX_STORE_U32(ctx.r31.u32 + ctx.r22.u32, ctx.r4.u32);
	// stw r4,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// sthx r17,r31,r23
	REX_STORE_U16(ctx.r31.u32 + ctx.r23.u32, ctx.r17.u16);
	// stbx r9,r31,r30
	REX_STORE_U8(ctx.r31.u32 + ctx.r30.u32, ctx.r9.u8);
	// stbx r11,r31,r6
	REX_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r11.u8);
	// ld r29,96(r1)
	ctx.r29.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// ld r26,104(r1)
	ctx.r26.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// ld r24,112(r1)
	ctx.r24.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// ld r30,120(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// blt cr6,0x8a07cce4
	if (ctx.cr6.lt) goto loc_8A07CCE4;
	// lis r11,-30137
	ctx.r11.s64 = -1975058432;
	// li r3,76
	ctx.r3.s64 = 76;
	// stw r29,-916(r11)
	REX_STORE_U32(ctx.r11.u32 + -916, ctx.r29.u32);
	// bl 0x8a017608
	ctx.lr = 0x8A07CF14;
	sub_8A017608(ctx, base);
loc_8A07CF14:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x8a0c2360
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8A07F188) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8a0c2340
	ctx.lr = 0x8A07F190;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-30160
	ctx.r10.s64 = -1976565760;
	// lis r9,-30160
	ctx.r9.s64 = -1976565760;
	// lwz r11,30196(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 30196);
	// lhz r31,29208(r9)
	ctx.r31.u64 = REX_LOAD_U16(ctx.r9.u32 + 29208);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r27,0(r11)
	ctx.r27.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,30196(r10)
	REX_STORE_U32(ctx.r10.u32 + 30196, ctx.r11.u32);
	// bl 0x8a015300
	ctx.lr = 0x8A07F1B8;
	sub_8A015300(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8a07f1c8
	if (!ctx.cr6.eq) goto loc_8A07F1C8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8a0c2390
	__restgprlr_26(ctx, base);
	return;
loc_8A07F1C8:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x89ffc148
	ctx.lr = 0x8A07F1D0;
	sub_89FFC148(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8a07f2b8
	if (ctx.cr6.eq) goto loc_8A07F2B8;
	// lis r11,-30137
	ctx.r11.s64 = -1975058432;
	// lis r10,-30165
	ctx.r10.s64 = -1976893440;
	// clrlwi r9,r31,16
	ctx.r9.u64 = ctx.r31.u32 & 0xFFFF;
	// addi r30,r10,13736
	ctx.r30.s64 = ctx.r10.s64 + 13736;
	// lis r8,-32768
	ctx.r8.s64 = -2147483648;
	// lhz r3,3704(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 3704);
	// addi r7,r30,4
	ctx.r7.s64 = ctx.r30.s64 + 4;
	// addi r5,r30,12
	ctx.r5.s64 = ctx.r30.s64 + 12;
	// extsh r6,r3
	ctx.r6.s64 = ctx.r3.s16;
	// addi r28,r30,8
	ctx.r28.s64 = ctx.r30.s64 + 8;
	// mulli r31,r6,208
	ctx.r31.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(208));
	// stwx r9,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r9.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r4,r8,16
	ctx.r4.u64 = ctx.r8.u64 | 16;
	// stwx r11,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u32);
	// lis r10,-30160
	ctx.r10.s64 = -1976565760;
	// stwx r4,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r4.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stwx r11,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r11.u32);
	// lbz r29,7290(r10)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r10.u32 + 7290);
	// bl 0x89ffbe00
	ctx.lr = 0x8A07F22C;
	sub_89FFBE00(ctx, base);
	// lis r7,-30137
	ctx.r7.s64 = -1975058432;
	// addi r9,r30,24
	ctx.r9.s64 = ctx.r30.s64 + 24;
	// addi r8,r30,76
	ctx.r8.s64 = ctx.r30.s64 + 76;
	// addi r6,r30,80
	ctx.r6.s64 = ctx.r30.s64 + 80;
	// addi r30,r30,72
	ctx.r30.s64 = ctx.r30.s64 + 72;
	// lhz r10,-1220(r7)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r7.u32 + -1220);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// subfic r7,r10,512
	ctx.xer.ca = ctx.r10.u32 <= 512;
	ctx.r7.u64 = static_cast<uint64_t>(512) - ctx.r10.u64;
	// extsb r4,r29
	ctx.r4.s64 = ctx.r29.s8;
	// lwzx r10,r31,r28
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r9,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r9.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r8,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r8.u32);
	// lwz r6,12(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// extsh r10,r6
	ctx.r10.s64 = ctx.r6.s16;
	// mullw r9,r10,r7
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// rlwinm r8,r9,24,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// sthx r8,r31,r30
	REX_STORE_U16(ctx.r31.u32 + ctx.r30.u32, ctx.r8.u16);
	// bl 0x89ffd0b0
	ctx.lr = 0x8A07F28C;
	sub_89FFD0B0(ctx, base);
	// lis r7,-30165
	ctx.r7.s64 = -1976893440;
	// extsb r6,r29
	ctx.r6.s64 = ctx.r29.s8;
	// addi r11,r7,10592
	ctx.r11.s64 = ctx.r7.s64 + 10592;
	// mulli r5,r6,92
	ctx.r5.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(92));
	// addi r4,r11,64
	ctx.r4.s64 = ctx.r11.s64 + 64;
	// extsh r11,r27
	ctx.r11.s64 = ctx.r27.s16;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r5,r4
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	// lwzx r4,r9,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x89ffd4f8
	ctx.lr = 0x8A07F2B8;
	sub_89FFD4F8(ctx, base);
loc_8A07F2B8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8a0c2390
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8A0800A8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8a0c2330
	ctx.lr = 0x8A0800B0;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30165
	ctx.r11.s64 = -1976893440;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r30,r11,13736
	ctx.r30.s64 = ctx.r11.s64 + 13736;
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// mulli r31,r10,208
	ctx.r31.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// mulli r8,r9,208
	ctx.r8.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(208));
	// addi r7,r30,48
	ctx.r7.s64 = ctx.r30.s64 + 48;
	// addi r6,r30,56
	ctx.r6.s64 = ctx.r30.s64 + 56;
	// addi r5,r30,60
	ctx.r5.s64 = ctx.r30.s64 + 60;
	// addi r27,r30,48
	ctx.r27.s64 = ctx.r30.s64 + 48;
	// addi r4,r30,52
	ctx.r4.s64 = ctx.r30.s64 + 52;
	// lwzx r10,r8,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwzx r11,r31,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// addi r3,r30,206
	ctx.r3.s64 = ctx.r30.s64 + 206;
	// addi r26,r30,52
	ctx.r26.s64 = ctx.r30.s64 + 52;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r31,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// addi r7,r30,200
	ctx.r7.s64 = ctx.r30.s64 + 200;
	// stwx r6,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r6.u32);
	// addi r25,r30,184
	ctx.r25.s64 = ctx.r30.s64 + 184;
	// lwzx r9,r8,r4
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lbzx r10,r31,r3
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r3.u32);
	// addi r28,r30,200
	ctx.r28.s64 = ctx.r30.s64 + 200;
	// stwx r5,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r5.u32);
	// lbzx r11,r8,r7
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbzx r3,r31,r25
	ctx.r3.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r25.u32);
	// stbx r4,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r4.u8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8a08015c
	if (ctx.cr6.eq) goto loc_8A08015C;
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
	// blt cr6,0x8a0802ac
	if (ctx.cr6.lt) goto loc_8A0802AC;
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// b 0x8a0801f8
	goto loc_8A0801F8;
loc_8A08015C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8a013dc0
	ctx.lr = 0x8A080164;
	sub_8A013DC0(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8a013fd8
	ctx.lr = 0x8A080170;
	sub_8A013FD8(ctx, base);
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// addi r7,r30,28
	ctx.r7.s64 = ctx.r30.s64 + 28;
	// addi r8,r30,12
	ctx.r8.s64 = ctx.r30.s64 + 12;
	// addi r6,r30,16
	ctx.r6.s64 = ctx.r30.s64 + 16;
	// addi r24,r30,20
	ctx.r24.s64 = ctx.r30.s64 + 20;
	// addi r23,r30,36
	ctx.r23.s64 = ctx.r30.s64 + 36;
	// lwzx r10,r31,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// addi r22,r30,32
	ctx.r22.s64 = ctx.r30.s64 + 32;
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,60
	ctx.r4.s64 = 60;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lhzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// srawi r7,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 4;
	// clrlwi r11,r7,27
	ctx.r11.u64 = ctx.r7.u32 & 0x1F;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r11,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r10,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r9,r31,r24
	REX_STORE_U32(ctx.r31.u32 + ctx.r24.u32, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r8,r31,r23
	REX_STORE_U32(ctx.r31.u32 + ctx.r23.u32, ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r7,r31,r22
	REX_STORE_U32(ctx.r31.u32 + ctx.r22.u32, ctx.r7.u32);
	// bl 0x89ffe588
	ctx.lr = 0x8A0801E8;
	sub_89FFE588(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8a0802ac
	if (ctx.cr6.eq) goto loc_8A0802AC;
	// li r11,8
	ctx.r11.s64 = 8;
	// stbx r11,r31,r25
	REX_STORE_U8(ctx.r31.u32 + ctx.r25.u32, ctx.r11.u8);
loc_8A0801F8:
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// lwzx r8,r31,r27
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// lis r7,0
	ctx.r7.s64 = 0;
	// lbzx r5,r31,r28
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// lis r9,-30210
	ctx.r9.s64 = -1979842560;
	// lwzx r10,r31,r26
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// ori r4,r7,57344
	ctx.r4.u64 = ctx.r7.u64 | 57344;
	// addi r6,r9,9016
	ctx.r6.s64 = ctx.r9.s64 + 9016;
	// lwzx r3,r31,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// extsh r30,r11
	ctx.r30.s64 = ctx.r11.s16;
	// addi r7,r30,128
	ctx.r7.s64 = ctx.r30.s64 + 128;
	// rlwinm r9,r30,1,22,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0x3FE;
	// rlwinm r3,r7,1,22,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x3FE;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// lhzx r11,r9,r6
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r6.u32);
	// lhzx r6,r3,r6
	ctx.r6.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r6.u32);
	// rotlwi r7,r11,16
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// extsh r3,r6
	ctx.r3.s64 = ctx.r6.s16;
	// mullw r11,r3,r4
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r4.s32);
	// srawi r9,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 8;
	// srawi r11,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 8;
	// add r28,r9,r8
	ctx.r28.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x89ffafa8
	ctx.lr = 0x8A080260;
	sub_89FFAFA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8a080298
	if (ctx.cr6.eq) goto loc_8A080298;
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x89ffaf20
	ctx.lr = 0x8A080274;
	sub_89FFAF20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8a080298
	if (!ctx.cr6.eq) goto loc_8A080298;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// ori r7,r7,32768
	ctx.r7.u64 = ctx.r7.u64 | 32768;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8a0afa78
	ctx.lr = 0x8A080298;
	sub_8A0AFA78(ctx, base);
loc_8A080298:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8a013ce0
	ctx.lr = 0x8A0802A0;
	sub_8A013CE0(ctx, base);
	// lbzx r11,r31,r25
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r25.u32);
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// stbx r11,r31,r25
	REX_STORE_U8(ctx.r31.u32 + ctx.r25.u32, ctx.r11.u8);
loc_8A0802AC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8a0c2380
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8A081A10) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8a0c2344
	ctx.lr = 0x8A081A18;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30160
	ctx.r11.s64 = -1976565760;
	// lhz r27,29208(r11)
	ctx.r27.u64 = REX_LOAD_U16(ctx.r11.u32 + 29208);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8a015300
	ctx.lr = 0x8A081A2C;
	sub_8A015300(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8a081b50
	if (ctx.cr6.eq) goto loc_8A081B50;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x89ffc148
	ctx.lr = 0x8A081A3C;
	sub_89FFC148(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8a081b50
	if (ctx.cr6.eq) goto loc_8A081B50;
	// lis r10,-30137
	ctx.r10.s64 = -1975058432;
	// lis r9,16838
	ctx.r9.s64 = 1103495168;
	// lis r8,-30137
	ctx.r8.s64 = -1975058432;
	// ori r7,r9,20077
	ctx.r7.u64 = ctx.r9.u64 | 20077;
	// lis r6,-30184
	ctx.r6.s64 = -1978138624;
	// lwz r11,-916(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -916);
	// lis r5,-30165
	ctx.r5.s64 = -1976893440;
	// addi r4,r6,-12056
	ctx.r4.s64 = ctx.r6.s64 + -12056;
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// lhz r29,3704(r8)
	ctx.r29.u64 = REX_LOAD_U16(ctx.r8.u32 + 3704);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r30,r5,13736
	ctx.r30.s64 = ctx.r5.s64 + 13736;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stw r11,-916(r10)
	REX_STORE_U32(ctx.r10.u32 + -916, ctx.r11.u32);
	// extsh r11,r29
	ctx.r11.s64 = ctx.r29.s16;
	// srawi r10,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 16;
	// mulli r31,r11,208
	ctx.r31.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// clrlwi r11,r10,17
	ctx.r11.u64 = ctx.r10.u32 & 0x7FFF;
	// lis r5,-16336
	ctx.r5.s64 = -1070596096;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r30,4
	ctx.r9.s64 = ctx.r30.s64 + 4;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r11,r5,272
	ctx.r11.u64 = ctx.r5.u64 | 272;
	// rlwinm r6,r8,17,16,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 17) & 0xFFFF;
	// addi r7,r30,12
	ctx.r7.s64 = ctx.r30.s64 + 12;
	// stwx r11,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u32);
	// extsh r3,r6
	ctx.r3.s64 = ctx.r6.s16;
	// addi r28,r30,8
	ctx.r28.s64 = ctx.r30.s64 + 8;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r8,r27,16
	ctx.r8.u64 = ctx.r27.u32 & 0xFFFF;
	// li r6,16
	ctx.r6.s64 = 16;
	// stwx r8,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r8.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stwx r6,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r6.u32);
	// lhzx r5,r10,r4
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r4.u32);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// stwx r4,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r4.u32);
	// bl 0x89ffbe00
	ctx.lr = 0x8A081ADC;
	sub_89FFBE00(ctx, base);
	// lis r3,-30160
	ctx.r3.s64 = -1976565760;
	// lis r7,-30137
	ctx.r7.s64 = -1975058432;
	// addi r9,r30,24
	ctx.r9.s64 = ctx.r30.s64 + 24;
	// addi r8,r30,76
	ctx.r8.s64 = ctx.r30.s64 + 76;
	// addi r6,r30,80
	ctx.r6.s64 = ctx.r30.s64 + 80;
	// lbz r11,7290(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 7290);
	// addi r27,r30,72
	ctx.r27.s64 = ctx.r30.s64 + 72;
	// li r5,0
	ctx.r5.s64 = 0;
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lhz r11,-1220(r7)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r7.u32 + -1220);
	// lwzx r7,r31,r28
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// subfic r10,r11,512
	ctx.xer.ca = ctx.r11.u32 <= 512;
	ctx.r10.u64 = static_cast<uint64_t>(512) - ctx.r11.u64;
	// lwzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// rlwinm r9,r7,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r9,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r9.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r8,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r8.u32);
	// lwz r7,12(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// mullw r10,r11,r10
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r9,r10,24,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// sthx r9,r31,r27
	REX_STORE_U16(ctx.r31.u32 + ctx.r27.u32, ctx.r9.u16);
	// bl 0x89ffd0b0
	ctx.lr = 0x8A081B44;
	sub_89FFD0B0(ctx, base);
	// addi r8,r30,158
	ctx.r8.s64 = ctx.r30.s64 + 158;
	// li r7,256
	ctx.r7.s64 = 256;
	// sthx r7,r31,r8
	REX_STORE_U16(ctx.r31.u32 + ctx.r8.u32, ctx.r7.u16);
loc_8A081B50:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8a0c2394
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8A082BC8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8a0c2340
	ctx.lr = 0x8A082BD0;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30194
	ctx.r11.s64 = -1978793984;
	// lis r10,-30110
	ctx.r10.s64 = -1973288960;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r26,r11,-32404
	ctx.r26.s64 = ctx.r11.s64 + -32404;
	// addi r28,r10,-21328
	ctx.r28.s64 = ctx.r10.s64 + -21328;
loc_8A082BE8:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r26,8012
	ctx.r10.s64 = ctx.r26.s64 + 8012;
	// add r8,r31,r11
	ctx.r8.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r9,r28,792
	ctx.r9.s64 = ctx.r28.s64 + 792;
	// mulli r11,r31,34
	ctx.r11.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(34));
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r6,r26,-104
	ctx.r6.s64 = ctx.r26.s64 + -104;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8a0168b8
	ctx.lr = 0x8A082C18;
	sub_8A0168B8(ctx, base);
	// addi r7,r31,1
	ctx.r7.s64 = ctx.r31.s64 + 1;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmpwi cr6,r6,8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 8, ctx.xer);
	// blt cr6,0x8a082be8
	if (ctx.cr6.lt) goto loc_8A082BE8;
	// lis r11,-30184
	ctx.r11.s64 = -1978138624;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r11,-12032
	ctx.r10.s64 = ctx.r11.s64 + -12032;
	// lbz r11,-12032(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -12032);
	// extsb r29,r11
	ctx.r29.s64 = ctx.r11.s8;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8a082cb0
	if (ctx.cr6.eq) goto loc_8A082CB0;
	// addi r31,r10,-1
	ctx.r31.s64 = ctx.r10.s64 + -1;
loc_8A082C4C:
	// extsh r30,r9
	ctx.r30.s64 = ctx.r9.s16;
	// lhz r4,3(r31)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 3);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// lbz r5,5(r31)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + 5);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r6,6(r31)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + 6);
	// addi r27,r28,-344
	ctx.r27.s64 = ctx.r28.s64 + -344;
	// lbz r7,7(r31)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + 7);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lbz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + 8);
	// clrlwi r3,r10,16
	ctx.r3.u64 = ctx.r10.u32 & 0xFFFF;
	// lbz r9,9(r31)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + 9);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzu r10,10(r31)
	ea = 10 + ctx.r31.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// sth r3,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r3.u16);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x8a016260
	ctx.lr = 0x8A082C94;
	sub_8A016260(ctx, base);
	// lbz r11,1(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 1);
	// add r9,r29,r30
	ctx.r9.u64 = ctx.r29.u64 + ctx.r30.u64;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8a082c4c
	if (!ctx.cr6.eq) goto loc_8A082C4C;
loc_8A082CB0:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8A082CB4:
	// addi r9,r28,-344
	ctx.r9.s64 = ctx.r28.s64 + -344;
	// mulli r10,r31,170
	ctx.r10.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(170));
	// mulli r11,r31,396
	ctx.r11.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(396));
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + ctx.r28.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8a016ed0
	ctx.lr = 0x8A082CD8;
	sub_8A016ED0(ctx, base);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// blt cr6,0x8a082cb4
	if (ctx.cr6.lt) goto loc_8A082CB4;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8a0c2390
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8A083F08) {
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
	// lis r11,-30165
	ctx.r11.s64 = -1976893440;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r31,r11,13736
	ctx.r31.s64 = ctx.r11.s64 + 13736;
	// mulli r30,r10,208
	ctx.r30.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// addi r9,r31,8
	ctx.r9.s64 = ctx.r31.s64 + 8;
	// lwzx r11,r30,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bgt cr6,0x8a084064
	if (ctx.cr6.gt) goto loc_8A084064;
	// lis r12,-30200
	ctx.r12.s64 = -1979187200;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,16212
	ctx.r12.s64 = ctx.r12.s64 + 16212;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8A083FB8;
	case 1:
		goto loc_8A084064;
	case 2:
		goto loc_8A084008;
	case 3:
		goto loc_8A084038;
	case 4:
		goto loc_8A084038;
	case 5:
		goto loc_8A084038;
	case 6:
		goto loc_8A084038;
	case 7:
		goto loc_8A084038;
	case 8:
		goto loc_8A084038;
	case 9:
		goto loc_8A084038;
	case 10:
		goto loc_8A084038;
	case 11:
		goto loc_8A084064;
	case 12:
		goto loc_8A084064;
	case 13:
		goto loc_8A084064;
	case 14:
		goto loc_8A084064;
	case 15:
		goto loc_8A084038;
	case 16:
		goto loc_8A084038;
	case 17:
		goto loc_8A084038;
	case 18:
		goto loc_8A084038;
	case 19:
		goto loc_8A084038;
	case 20:
		goto loc_8A084038;
	case 21:
		goto loc_8A084038;
	case 22:
		goto loc_8A084038;
	case 23:
		goto loc_8A084038;
	case 24:
		goto loc_8A084038;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_8A083FB8:
	// lis r12,-177
	ctx.r12.s64 = -11599872;
	// lwzx r10,r30,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// lis r8,-30184
	ctx.r8.s64 = -1978138624;
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
	// addi r3,r8,-11008
	ctx.r3.s64 = ctx.r8.s64 + -11008;
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
	// b 0x8a08406c
	goto loc_8A08406C;
loc_8A084008:
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
	// bl 0x8a0b8c78
	ctx.lr = 0x8A084034;
	sub_8A0B8C78(ctx, base);
	// b 0x8a084064
	goto loc_8A084064;
loc_8A084038:
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
	// bl 0x8a0b8480
	ctx.lr = 0x8A084064;
	sub_8A0B8480(ctx, base);
loc_8A084064:
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r11.u32);
loc_8A08406C:
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

DEFINE_REX_FUNC(sub_8A086A90) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8a0c2348
	ctx.lr = 0x8A086A98;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30165
	ctx.r11.s64 = -1976893440;
	// extsh r28,r3
	ctx.r28.s64 = ctx.r3.s16;
	// addi r30,r11,13736
	ctx.r30.s64 = ctx.r11.s64 + 13736;
	// mulli r31,r28,208
	ctx.r31.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(208));
	// addi r6,r30,188
	ctx.r6.s64 = ctx.r30.s64 + 188;
	// lbzx r7,r31,r6
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r6.u32);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// blt cr6,0x8a086d78
	if (ctx.cr6.lt) goto loc_8A086D78;
	// beq cr6,0x8a086be0
	if (ctx.cr6.eq) goto loc_8A086BE0;
	// cmplwi cr6,r7,3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3, ctx.xer);
	// blt cr6,0x8a086adc
	if (ctx.cr6.lt) goto loc_8A086ADC;
loc_8A086ACC:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r6
	REX_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r11.u8);
	// b 0x8a086ea4
	goto loc_8A086EA4;
loc_8A086ADC:
	// addi r10,r30,189
	ctx.r10.s64 = ctx.r30.s64 + 189;
	// lbzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x8a086ea4
	if (ctx.cr6.gt) goto loc_8A086EA4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8a086b20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8A086B20;
	// bdzf 4*cr6+eq,0x8a086b5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8A086B5C;
	// bne cr6,0x8a086b84
	if (!ctx.cr6.eq) goto loc_8A086B84;
	// addi r9,r30,192
	ctx.r9.s64 = ctx.r30.s64 + 192;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u8);
	// lbzx r6,r31,r9
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// ori r5,r6,32
	ctx.r5.u64 = ctx.r6.u64 | 32;
	// stbx r5,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r5.u8);
	// b 0x8a086ea4
	goto loc_8A086EA4;
loc_8A086B20:
	// addi r8,r30,192
	ctx.r8.s64 = ctx.r30.s64 + 192;
	// lbzx r9,r31,r8
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// rlwinm r7,r9,0,26,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x8a086ea4
	if (!ctx.cr6.eq) goto loc_8A086EA4;
	// li r7,-128
	ctx.r7.s64 = -128;
	// addi r5,r30,158
	ctx.r5.s64 = ctx.r30.s64 + 158;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// or r6,r9,r7
	ctx.r6.u64 = ctx.r9.u64 | ctx.r7.u64;
	// li r11,256
	ctx.r11.s64 = 256;
	// stbx r4,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r4.u8);
	// stbx r6,r31,r8
	REX_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r6.u8);
	// sthx r11,r31,r5
	REX_STORE_U16(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u16);
	// b 0x8a086ea4
	goto loc_8A086EA4;
loc_8A086B5C:
	// addi r9,r30,192
	ctx.r9.s64 = ctx.r30.s64 + 192;
	// lbzx r8,r31,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// rlwinm r7,r8,0,0,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8a086ea4
	if (!ctx.cr6.eq) goto loc_8A086EA4;
	// li r8,64
	ctx.r8.s64 = 64;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stbx r8,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r8.u8);
	// stbx r7,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r7.u8);
	// b 0x8a086ea4
	goto loc_8A086EA4;
loc_8A086B84:
	// addi r10,r30,168
	ctx.r10.s64 = ctx.r30.s64 + 168;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8a086ba0
	if (!ctx.cr6.lt) goto loc_8A086BA0;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
loc_8A086BA0:
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
	// lis r10,-128
	ctx.r10.s64 = -8388608;
	// lwzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8a086ea4
	if (ctx.cr6.gt) goto loc_8A086EA4;
	// lis r8,-30166
	ctx.r8.s64 = -1976958976;
	// lis r7,-30160
	ctx.r7.s64 = -1976565760;
	// li r6,0
	ctx.r6.s64 = 0;
	// stwx r6,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
	// lbz r9,31835(r8)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + 31835);
	// lbz r11,14686(r7)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + 14686);
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stb r5,31835(r8)
	REX_STORE_U8(ctx.r8.u32 + 31835, ctx.r5.u8);
	// stb r4,14686(r7)
	REX_STORE_U8(ctx.r7.u32 + 14686, ctx.r4.u8);
	// b 0x8a086ea4
	goto loc_8A086EA4;
loc_8A086BE0:
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
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x8a086ea4
	if (ctx.cr6.gt) goto loc_8A086EA4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8a086c44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8A086C44;
	// bdzf 4*cr6+eq,0x8a086c6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8A086C6C;
	// bdzf 4*cr6+eq,0x8a086cdc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8A086CDC;
	// bdzf 4*cr6+eq,0x8a086d10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8A086D10;
	// bne cr6,0x8a086d4c
	if (!ctx.cr6.eq) goto loc_8A086D4C;
	// cmpwi cr6,r8,3600
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3600, ctx.xer);
	// bgt cr6,0x8a086acc
	if (ctx.cr6.gt) goto loc_8A086ACC;
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
	// lbzx r7,r31,r10
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// ori r6,r7,2
	ctx.r6.u64 = ctx.r7.u64 | 2;
	// stbx r6,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r6.u8);
	// b 0x8a086ea4
	goto loc_8A086EA4;
loc_8A086C44:
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
	// bl 0x89ffe268
	ctx.lr = 0x8A086C5C;
	sub_89FFE268(ctx, base);
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r10,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u8);
	// b 0x8a086ea4
	goto loc_8A086EA4;
loc_8A086C6C:
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
	// ble cr6,0x8a086c9c
	if (!ctx.cr6.gt) goto loc_8A086C9C;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stbx r9,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u8);
	// stbx r8,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r8.u8);
	// b 0x8a086ea4
	goto loc_8A086EA4;
loc_8A086C9C:
	// addi r10,r30,168
	ctx.r10.s64 = ctx.r30.s64 + 168;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8a086cb8
	if (!ctx.cr6.lt) goto loc_8A086CB8;
	// addi r11,r11,2048
	ctx.r11.s64 = ctx.r11.s64 + 2048;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
loc_8A086CB8:
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x89ffe318
	ctx.lr = 0x8A086CC0;
	sub_89FFE318(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8a086ea4
	if (ctx.cr6.eq) goto loc_8A086EA4;
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// stbx r10,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u8);
	// b 0x8a086ea4
	goto loc_8A086EA4;
loc_8A086CDC:
	// addi r9,r30,168
	ctx.r9.s64 = ctx.r30.s64 + 168;
	// lwzx r10,r31,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8a086cf8
	if (ctx.cr6.eq) goto loc_8A086CF8;
	// addi r11,r10,-2048
	ctx.r11.s64 = ctx.r10.s64 + -2048;
	// stwx r11,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// b 0x8a086ea4
	goto loc_8A086EA4;
loc_8A086CF8:
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// li r8,4
	ctx.r8.s64 = 4;
	// stbx r9,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r9.u8);
	// stbx r8,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u8);
	// b 0x8a086ea4
	goto loc_8A086EA4;
loc_8A086D10:
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
	// blt cr6,0x8a086ea4
	if (ctx.cr6.lt) goto loc_8A086EA4;
	// addi r9,r30,192
	ctx.r9.s64 = ctx.r30.s64 + 192;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// stbx r8,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r8.u8);
	// stbx r7,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r7.u8);
	// stbx r6,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r6.u8);
	// b 0x8a086ea4
	goto loc_8A086EA4;
loc_8A086D4C:
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
	// cmplwi cr6,r9,120
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 120, ctx.xer);
	// blt cr6,0x8a086ea4
	if (ctx.cr6.lt) goto loc_8A086EA4;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r30,192
	ctx.r9.s64 = ctx.r30.s64 + 192;
	// stbx r11,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
	// b 0x8a086e9c
	goto loc_8A086E9C;
loc_8A086D78:
	// addi r10,r30,189
	ctx.r10.s64 = ctx.r30.s64 + 189;
	// lbzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x8a086ea4
	if (ctx.cr6.gt) goto loc_8A086EA4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8a086dc8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8A086DC8;
	// bdzf 4*cr6+eq,0x8a086dfc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8A086DFC;
	// bdzf 4*cr6+eq,0x8a086e1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8A086E1C;
	// bdzf 4*cr6+eq,0x8a086e48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8A086E48;
	// bne cr6,0x8a086e60
	if (!ctx.cr6.eq) goto loc_8A086E60;
	// addi r9,r30,48
	ctx.r9.s64 = ctx.r30.s64 + 48;
	// lis r8,256
	ctx.r8.s64 = 16777216;
	// lwzx r7,r31,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8a086ea4
	if (!ctx.cr6.lt) goto loc_8A086EA4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u8);
	// b 0x8a086ea4
	goto loc_8A086EA4;
loc_8A086DC8:
	// addi r8,r30,168
	ctx.r8.s64 = ctx.r30.s64 + 168;
	// lwzx r9,r31,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// addic. r9,r9,-4096
	ctx.xer.ca = ctx.r9.u32 > 4095;
	ctx.r9.s64 = ctx.r9.s64 + -4096;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stwx r9,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r9.u32);
	// bne 0x8a086ea4
	if (!ctx.cr0.eq) goto loc_8A086EA4;
	// addi r9,r30,192
	ctx.r9.s64 = ctx.r30.s64 + 192;
	// li r8,-128
	ctx.r8.s64 = -128;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stbx r7,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r7.u8);
	// lbzx r4,r31,r9
	ctx.r4.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// or r3,r4,r8
	ctx.r3.u64 = ctx.r4.u64 | ctx.r8.u64;
	// stbx r3,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r3.u8);
	// b 0x8a086ea4
	goto loc_8A086EA4;
loc_8A086DFC:
	// addi r9,r30,192
	ctx.r9.s64 = ctx.r30.s64 + 192;
	// lbzx r8,r31,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// rlwinm r7,r8,0,0,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8a086ea4
	if (!ctx.cr6.eq) goto loc_8A086EA4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u8);
	// b 0x8a086ea4
	goto loc_8A086EA4;
loc_8A086E1C:
	// lwzx r9,r31,r30
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// addi r8,r30,164
	ctx.r8.s64 = ctx.r30.s64 + 164;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// oris r4,r9,176
	ctx.r4.u64 = ctx.r9.u64 | 11534336;
	// li r6,0
	ctx.r6.s64 = 0;
	// stbx r7,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r7.u8);
	// ori r4,r4,256
	ctx.r4.u64 = ctx.r4.u64 | 256;
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// stwx r6,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r6.u32);
	// stwx r4,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r4.u32);
	// b 0x8a086ea4
	goto loc_8A086EA4;
loc_8A086E48:
	// addi r9,r30,192
	ctx.r9.s64 = ctx.r30.s64 + 192;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// li r7,4
	ctx.r7.s64 = 4;
	// stbx r8,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u8);
	// stbx r7,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r7.u8);
	// b 0x8a086ea4
	goto loc_8A086EA4;
loc_8A086E60:
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
	// cmplwi cr6,r8,120
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 120, ctx.xer);
	// blt cr6,0x8a086ea4
	if (ctx.cr6.lt) goto loc_8A086EA4;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// addi r7,r30,192
	ctx.r7.s64 = ctx.r30.s64 + 192;
	// addi r5,r30,164
	ctx.r5.s64 = ctx.r30.s64 + 164;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r8,1
	ctx.r4.s64 = ctx.r8.s64 + 1;
	// stbx r11,r31,r7
	REX_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u8);
	// stwx r11,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u32);
	// stbx r4,r31,r6
	REX_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r4.u8);
loc_8A086E9C:
	// stbx r11,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u8);
	// stbx r11,r31,r9
	REX_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u8);
loc_8A086EA4:
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
	// lis r10,-30210
	ctx.r10.s64 = -1979842560;
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
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8a0c2398
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8A08B138) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8a0c2310
	ctx.lr = 0x8A08B140;
	__savegprlr_14(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// extsb r10,r3
	ctx.r10.s64 = ctx.r3.s8;
	// stw r4,300(r1)
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r4.u32);
	// lis r11,-30184
	ctx.r11.s64 = -1978138624;
	// stw r5,308(r1)
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r5.u32);
	// rlwinm r23,r10,3,0,28
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r31,r11,-9392
	ctx.r31.s64 = ctx.r11.s64 + -9392;
	// li r3,83
	ctx.r3.s64 = 83;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// lwzx r28,r23,r31
	ctx.r28.u64 = REX_LOAD_U32(ctx.r23.u32 + ctx.r31.u32);
	// bl 0x8a015300
	ctx.lr = 0x8A08B174;
	sub_8A015300(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8a08b378
	if (ctx.cr6.eq) goto loc_8A08B378;
	// addi r20,r31,4
	ctx.r20.s64 = ctx.r31.s64 + 4;
	// lbzx r11,r23,r20
	ctx.r11.u64 = REX_LOAD_U8(ctx.r23.u32 + ctx.r20.u32);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x89ffc148
	ctx.lr = 0x8A08B18C;
	sub_89FFC148(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8a08b378
	if (ctx.cr6.eq) goto loc_8A08B378;
	// extsh r10,r22
	ctx.r10.s64 = ctx.r22.s16;
	// lbzx r8,r23,r20
	ctx.r8.u64 = REX_LOAD_U8(ctx.r23.u32 + ctx.r20.u32);
	// lis r7,-30210
	ctx.r7.s64 = -1979842560;
	// addi r6,r10,128
	ctx.r6.s64 = ctx.r10.s64 + 128;
	// addi r5,r7,9016
	ctx.r5.s64 = ctx.r7.s64 + 9016;
	// rlwinm r4,r6,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x3FE;
	// rlwinm r3,r22,1,22,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 1) & 0x3FE;
	// srawi r11,r21,4
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r21.s32 >> 4;
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// lis r9,-30137
	ctx.r9.s64 = -1975058432;
	// lhzx r6,r4,r5
	ctx.r6.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r5.u32);
	// lis r8,-30165
	ctx.r8.s64 = -1976893440;
	// lhzx r5,r3,r5
	ctx.r5.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r5.u32);
	// addi r9,r9,3704
	ctx.r9.s64 = ctx.r9.s64 + 3704;
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// mullw r6,r4,r11
	ctx.r6.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// mullw r5,r3,r11
	ctx.r5.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// srawi r18,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r18.s64 = ctx.r6.s32 >> 8;
	// srawi r4,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 8;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r4,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r30,r8,13736
	ctx.r30.s64 = ctx.r8.s64 + 13736;
	// ble cr6,0x8a08b32c
	if (!ctx.cr6.gt) goto loc_8A08B32C;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// li r27,0
	ctx.r27.s64 = 0;
	// srawi r10,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// addi r28,r28,-4
	ctx.r28.s64 = ctx.r28.s64 + -4;
	// clrlwi r19,r10,26
	ctx.r19.u64 = ctx.r10.u32 & 0x3F;
	// addi r25,r9,-2
	ctx.r25.s64 = ctx.r9.s64 + -2;
loc_8A08B210:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// lhzu r29,2(r25)
	ea = 2 + ctx.r25.u32;
	ctx.r29.u64 = REX_LOAD_U16(ea);
	ctx.r25.u32 = ea;
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// addi r9,r30,148
	ctx.r9.s64 = ctx.r30.s64 + 148;
	// extsh r8,r29
	ctx.r8.s64 = ctx.r29.s16;
	// addi r7,r30,4
	ctx.r7.s64 = ctx.r30.s64 + 4;
	// mulli r31,r8,208
	ctx.r31.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(208));
	// sthx r11,r31,r9
	REX_STORE_U16(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u16);
	// addi r6,r30,12
	ctx.r6.s64 = ctx.r30.s64 + 12;
	// addi r26,r30,8
	ctx.r26.s64 = ctx.r30.s64 + 8;
	// oris r5,r10,49328
	ctx.r5.u64 = ctx.r10.u64 | 3232759808;
	// li r4,83
	ctx.r4.s64 = 83;
	// stwx r5,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r5.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stwx r4,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r4.u32);
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// stwx r11,r31,r26
	REX_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r11.u32);
	// stwx r19,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r19.u32);
	// bl 0x89ffbe00
	ctx.lr = 0x8A08B25C;
	sub_89FFBE00(ctx, base);
	// lwz r9,300(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r7,308(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// addi r8,r30,48
	ctx.r8.s64 = ctx.r30.s64 + 48;
	// addi r6,r30,52
	ctx.r6.s64 = ctx.r30.s64 + 52;
	// stwx r7,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r7.u32);
	// stwx r9,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r7,r27,1
	ctx.r7.s64 = ctx.r27.s64 + 1;
	// addi r27,r30,200
	ctx.r27.s64 = ctx.r30.s64 + 200;
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r5,r30,24
	ctx.r5.s64 = ctx.r30.s64 + 24;
	// stw r27,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// extsh r27,r7
	ctx.r27.s64 = ctx.r7.s16;
	// addi r9,r30,204
	ctx.r9.s64 = ctx.r30.s64 + 204;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// lis r10,-30137
	ctx.r10.s64 = -1975058432;
	// addi r3,r30,76
	ctx.r3.s64 = ctx.r30.s64 + 76;
	// lwzx r11,r31,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// addi r8,r30,80
	ctx.r8.s64 = ctx.r30.s64 + 80;
	// addi r6,r30,72
	ctx.r6.s64 = ctx.r30.s64 + 72;
	// addi r5,r30,158
	ctx.r5.s64 = ctx.r30.s64 + 158;
	// addi r17,r30,168
	ctx.r17.s64 = ctx.r30.s64 + 168;
	// addi r16,r30,164
	ctx.r16.s64 = ctx.r30.s64 + 164;
	// addi r15,r30,56
	ctx.r15.s64 = ctx.r30.s64 + 56;
	// addi r14,r30,60
	ctx.r14.s64 = ctx.r30.s64 + 60;
	// lwzx r7,r31,r26
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// lhz r10,-1220(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + -1220);
	// rlwinm r9,r7,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// lbzx r7,r23,r20
	ctx.r7.u64 = REX_LOAD_U8(ctx.r23.u32 + ctx.r20.u32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// subfic r9,r10,512
	ctx.xer.ca = ctx.r10.u32 <= 512;
	ctx.r9.u64 = static_cast<uint64_t>(512) - ctx.r10.u64;
	// extsb r7,r7
	ctx.r7.s64 = ctx.r7.s8;
	// cmpw cr6,r27,r7
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r7.s32, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r10,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r10.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r7,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r7.u32);
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// mullw r9,r10,r9
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lwz r7,100(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// sthx r22,r31,r5
	REX_STORE_U16(ctx.r31.u32 + ctx.r5.u32, ctx.r22.u16);
	// stwx r21,r31,r17
	REX_STORE_U32(ctx.r31.u32 + ctx.r17.u32, ctx.r21.u32);
	// rlwinm r8,r9,24,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// sthx r8,r31,r6
	REX_STORE_U16(ctx.r31.u32 + ctx.r6.u32, ctx.r8.u16);
	// lwz r6,104(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwzu r11,12(r28)
	ea = 12 + ctx.r28.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// stwx r18,r31,r15
	REX_STORE_U32(ctx.r31.u32 + ctx.r15.u32, ctx.r18.u32);
	// stwx r4,r31,r14
	REX_STORE_U32(ctx.r31.u32 + ctx.r14.u32, ctx.r4.u32);
	// stbx r24,r31,r7
	REX_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r24.u8);
	// stbx r24,r31,r6
	REX_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r24.u8);
	// stwx r11,r31,r16
	REX_STORE_U32(ctx.r31.u32 + ctx.r16.u32, ctx.r11.u32);
	// blt cr6,0x8a08b210
	if (ctx.cr6.lt) goto loc_8A08B210;
loc_8A08B32C:
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x8a017608
	ctx.lr = 0x8A08B334;
	sub_8A017608(ctx, base);
	// extsh r11,r29
	ctx.r11.s64 = ctx.r29.s16;
	// lis r10,128
	ctx.r10.s64 = 8388608;
	// lwz r6,308(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// mulli r9,r11,208
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lwz r5,300(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// lwzx r3,r9,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// ori r8,r10,32896
	ctx.r8.u64 = ctx.r10.u64 | 32896;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x8a0bbb00
	ctx.lr = 0x8A08B36C;
	sub_8A0BBB00(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x8a0c2360
	__restgprlr_14(ctx, base);
	return;
loc_8A08B378:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x8a0c2360
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8A08DB20) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8a0c2338
	ctx.lr = 0x8A08DB28;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30109
	ctx.r11.s64 = -1973223424;
	// li r31,4
	ctx.r31.s64 = 4;
	// addi r30,r11,-13592
	ctx.r30.s64 = ctx.r11.s64 + -13592;
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
	// bl 0x8a016260
	ctx.lr = 0x8A08DB68;
	sub_8A016260(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
	// lis r8,-30097
	ctx.r8.s64 = -1972436992;
	// addi r9,r30,-720
	ctx.r9.s64 = ctx.r30.s64 + -720;
	// addi r11,r30,112
	ctx.r11.s64 = ctx.r30.s64 + 112;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// addi r25,r8,220
	ctx.r25.s64 = ctx.r8.s64 + 220;
loc_8A08DB80:
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
	// blt cr6,0x8a08db80
	if (ctx.cr6.lt) goto loc_8A08DB80;
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
	// bl 0x8a016260
	ctx.lr = 0x8A08DBE0;
	sub_8A016260(ctx, base);
	// lis r11,-30195
	ctx.r11.s64 = -1978859520;
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
	// bl 0x8a016930
	ctx.lr = 0x8A08DC00;
	sub_8A016930(ctx, base);
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
	// bl 0x8a016260
	ctx.lr = 0x8A08DC2C;
	sub_8A016260(ctx, base);
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
	// bl 0x8a016930
	ctx.lr = 0x8A08DC44;
	sub_8A016930(ctx, base);
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
	// bl 0x8a016260
	ctx.lr = 0x8A08DC70;
	sub_8A016260(ctx, base);
	// addi r9,r30,-80
	ctx.r9.s64 = ctx.r30.s64 + -80;
	// addi r11,r30,-1448
	ctx.r11.s64 = ctx.r30.s64 + -1448;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
loc_8A08DC7C:
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
	// blt cr6,0x8a08dc7c
	if (ctx.cr6.lt) goto loc_8A08DC7C;
	// lis r10,-30184
	ctx.r10.s64 = -1978138624;
	// stw r26,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// stw r26,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// addi r10,r10,-8688
	ctx.r10.s64 = ctx.r10.s64 + -8688;
	// lbz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8a08dd44
	if (ctx.cr6.eq) goto loc_8A08DD44;
	// addi r31,r10,-8
	ctx.r31.s64 = ctx.r10.s64 + -8;
loc_8A08DCC8:
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
	// bl 0x8a015df0
	ctx.lr = 0x8A08DD20;
	sub_8A015DF0(ctx, base);
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
	// bne cr6,0x8a08dcc8
	if (!ctx.cr6.eq) goto loc_8A08DCC8;
loc_8A08DD44:
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
	// bl 0x8a016db0
	ctx.lr = 0x8A08DD5C;
	sub_8A016DB0(ctx, base);
	// lis r11,-30184
	ctx.r11.s64 = -1978138624;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// addi r10,r11,-8616
	ctx.r10.s64 = ctx.r11.s64 + -8616;
	// lbz r11,-8616(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -8616);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8a08dde8
	if (ctx.cr6.eq) goto loc_8A08DDE8;
	// addi r31,r10,-1
	ctx.r31.s64 = ctx.r10.s64 + -1;
loc_8A08DD78:
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
	// bl 0x8a016260
	ctx.lr = 0x8A08DDC8;
	sub_8A016260(ctx, base);
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
	// bne cr6,0x8a08dd78
	if (!ctx.cr6.eq) goto loc_8A08DD78;
loc_8A08DDE8:
	// addi r9,r30,-640
	ctx.r9.s64 = ctx.r30.s64 + -640;
	// addi r11,r30,-936
	ctx.r11.s64 = ctx.r30.s64 + -936;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
loc_8A08DDF4:
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
	// blt cr6,0x8a08ddf4
	if (ctx.cr6.lt) goto loc_8A08DDF4;
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
loc_8A08DE30:
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
	// blt cr6,0x8a08de30
	if (ctx.cr6.lt) goto loc_8A08DE30;
	// stw r26,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r26.u32);
	// stw r26,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r26.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8a0c2388
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8A08FD98) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8a0c2340
	ctx.lr = 0x8A08FDA0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30165
	ctx.r11.s64 = -1976893440;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r31,r11,13736
	ctx.r31.s64 = ctx.r11.s64 + 13736;
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
	// bgt cr6,0x8a08ff04
	if (ctx.cr6.gt) goto loc_8A08FF04;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8a08fe60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8A08FE60;
	// bdzf 4*cr6+eq,0x8a08ff04
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8A08FF04;
	// bdzf 4*cr6+eq,0x8a08ff04
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8A08FF04;
	// bdzf 4*cr6+eq,0x8a08fe70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8A08FE70;
	// bdzf 4*cr6+eq,0x8a08fe70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8A08FE70;
	// bdzf 4*cr6+eq,0x8a08fe7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8A08FE7C;
	// bdzf 4*cr6+eq,0x8a08feec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8A08FEEC;
	// bne cr6,0x8a08feec
	if (!ctx.cr6.eq) goto loc_8A08FEEC;
	// lis r12,-177
	ctx.r12.s64 = -11599872;
	// addi r10,r31,88
	ctx.r10.s64 = ctx.r31.s64 + 88;
	// lis r9,-30184
	ctx.r9.s64 = -1978138624;
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
	// addi r4,r9,-7168
	ctx.r4.s64 = ctx.r9.s64 + -7168;
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
	// b 0x8a0c2390
	__restgprlr_26(ctx, base);
	return;
loc_8A08FE60:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8a08bf78
	ctx.lr = 0x8A08FE68;
	sub_8A08BF78(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8a0c2390
	__restgprlr_26(ctx, base);
	return;
loc_8A08FE70:
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x8a08fef4
	goto loc_8A08FEF4;
loc_8A08FE7C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89ffc2b8
	ctx.lr = 0x8A08FE84;
	sub_89FFC2B8(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8a08ff04
	if (ctx.cr6.lt) goto loc_8A08FF04;
	// mulli r11,r11,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r10,r31,72
	ctx.r10.s64 = ctx.r31.s64 + 72;
	// lhzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8a08feb0
	if (!ctx.cr6.eq) goto loc_8A08FEB0;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// b 0x8a08fef4
	goto loc_8A08FEF4;
loc_8A08FEB0:
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
	// bl 0x89ffce38
	ctx.lr = 0x8A08FEE4;
	sub_89FFCE38(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8a0c2390
	__restgprlr_26(ctx, base);
	return;
loc_8A08FEEC:
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// li r4,2
	ctx.r4.s64 = 2;
loc_8A08FEF4:
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8a0b8c78
	ctx.lr = 0x8A08FF04;
	sub_8A0B8C78(ctx, base);
loc_8A08FF04:
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8a0c2390
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8A0914A0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8a0c2334
	ctx.lr = 0x8A0914A8;
	__savegprlr_23(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30109
	ctx.r11.s64 = -1973223424;
	// li r30,4
	ctx.r30.s64 = 4;
	// addi r31,r11,-8976
	ctx.r31.s64 = ctx.r11.s64 + -8976;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r30,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r30.u16);
	// addi r11,r31,2232
	ctx.r11.s64 = ctx.r31.s64 + 2232;
	// li r9,224
	ctx.r9.s64 = 224;
	// li r8,-24
	ctx.r8.s64 = -24;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,-16
	ctx.r7.s64 = -16;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x8a016260
	ctx.lr = 0x8A0914E8;
	sub_8A016260(ctx, base);
	// lis r11,-30195
	ctx.r11.s64 = -1978859520;
	// addi r5,r31,2232
	ctx.r5.s64 = ctx.r31.s64 + 2232;
	// addi r26,r11,29808
	ctx.r26.s64 = ctx.r11.s64 + 29808;
	// addi r4,r31,2392
	ctx.r4.s64 = ctx.r31.s64 + 2392;
	// addi r6,r26,-36
	ctx.r6.s64 = ctx.r26.s64 + -36;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x8a016930
	ctx.lr = 0x8A091508;
	sub_8A016930(ctx, base);
	// addi r8,r31,2312
	ctx.r8.s64 = ctx.r31.s64 + 2312;
	// li r10,192
	ctx.r10.s64 = 192;
	// sth r30,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r30.u16);
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r9,232
	ctx.r9.s64 = 232;
	// li r8,-8
	ctx.r8.s64 = -8;
	// li r7,-12
	ctx.r7.s64 = -12;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8a016260
	ctx.lr = 0x8A091534;
	sub_8A016260(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// lis r8,-30097
	ctx.r8.s64 = -1972436992;
	// addi r9,r31,2312
	ctx.r9.s64 = ctx.r31.s64 + 2312;
	// addi r11,r31,2904
	ctx.r11.s64 = ctx.r31.s64 + 2904;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// addi r25,r8,220
	ctx.r25.s64 = ctx.r8.s64 + 220;
loc_8A09154C:
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
	// stw r27,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// blt cr6,0x8a09154c
	if (ctx.cr6.lt) goto loc_8A09154C;
	// lis r10,-30184
	ctx.r10.s64 = -1978138624;
	// stw r27,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// stw r27,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// addi r10,r10,-6928
	ctx.r10.s64 = ctx.r10.s64 + -6928;
	// lbz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8a09161c
	if (ctx.cr6.eq) goto loc_8A09161C;
	// addi r30,r10,-1
	ctx.r30.s64 = ctx.r10.s64 + -1;
loc_8A091598:
	// extsh r8,r29
	ctx.r8.s64 = ctx.r29.s16;
	// lbz r4,3(r30)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r30.u32 + 3);
	// lbz r3,2(r30)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r30.u32 + 2);
	// addi r5,r31,1760
	ctx.r5.s64 = ctx.r31.s64 + 1760;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + 4);
	// lbz r10,5(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 5);
	// extsb r24,r11
	ctx.r24.s64 = ctx.r11.s8;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// lbzu r7,6(r30)
	ea = 6 + ctx.r30.u32;
	ctx.r7.u64 = REX_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// rlwinm r6,r3,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// extsb r7,r7
	ctx.r7.s64 = ctx.r7.s8;
	// add r5,r8,r5
	ctx.r5.u64 = ctx.r8.u64 + ctx.r5.u64;
	// rlwinm r28,r4,31,1,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// stw r5,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// neg r7,r6
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r6.u64);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// sth r11,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r11.u16);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// neg r8,r28
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r28.u64);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8a016260
	ctx.lr = 0x8A0915FC;
	sub_8A016260(ctx, base);
	// lbz r11,1(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 1);
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
	// bne cr6,0x8a091598
	if (!ctx.cr6.eq) goto loc_8A091598;
loc_8A09161C:
	// addi r9,r31,1760
	ctx.r9.s64 = ctx.r31.s64 + 1760;
	// addi r10,r31,808
	ctx.r10.s64 = ctx.r31.s64 + 808;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_8A091628:
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
	// stw r27,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r27.u32);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,17
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 17, ctx.xer);
	// blt cr6,0x8a091628
	if (ctx.cr6.lt) goto loc_8A091628;
	// addi r9,r31,1760
	ctx.r9.s64 = ctx.r31.s64 + 1760;
	// stw r27,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r27.u32);
	// stw r27,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r27.u32);
	// addi r11,r31,1336
	ctx.r11.s64 = ctx.r31.s64 + 1336;
	// addi r9,r9,170
	ctx.r9.s64 = ctx.r9.s64 + 170;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
loc_8A091668:
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
	// stw r27,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// blt cr6,0x8a091668
	if (ctx.cr6.lt) goto loc_8A091668;
	// lis r10,-30184
	ctx.r10.s64 = -1978138624;
	// stw r27,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// stw r27,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// addi r10,r10,-6896
	ctx.r10.s64 = ctx.r10.s64 + -6896;
	// lbz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8a091730
	if (ctx.cr6.eq) goto loc_8A091730;
	// addi r30,r10,-8
	ctx.r30.s64 = ctx.r10.s64 + -8;
loc_8A0916B4:
	// extsh r10,r29
	ctx.r10.s64 = ctx.r29.s16;
	// lbz r8,15(r30)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + 15);
	// lbz r4,14(r30)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r30.u32 + 14);
	// addi r3,r31,1024
	ctx.r3.s64 = ctx.r31.s64 + 1024;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r6,9(r30)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r30.u32 + 9);
	// extsb r5,r8
	ctx.r5.s64 = ctx.r8.s8;
	// lbz r7,10(r30)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + 10);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r8,11(r30)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + 11);
	// clrlwi r24,r5,16
	ctx.r24.u64 = ctx.r5.u32 & 0xFFFF;
	// lbz r9,12(r30)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + 12);
	// rlwinm r28,r10,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stb r4,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r4.u8);
	// li r5,8
	ctx.r5.s64 = 8;
	// lbz r10,13(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 13);
	// add r28,r28,r3
	ctx.r28.u64 = ctx.r28.u64 + ctx.r3.u64;
	// sth r24,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r24.u16);
	// li r4,7
	ctx.r4.s64 = 7;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// stw r28,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// bl 0x8a015df0
	ctx.lr = 0x8A09170C;
	sub_8A015DF0(ctx, base);
	// lbzu r10,8(r30)
	ea = 8 + ctx.r30.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// extsh r9,r29
	ctx.r9.s64 = ctx.r29.s16;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// lbz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 8);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// extsh r29,r9
	ctx.r29.s64 = ctx.r9.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8a0916b4
	if (!ctx.cr6.eq) goto loc_8A0916B4;
loc_8A091730:
	// addi r6,r31,112
	ctx.r6.s64 = ctx.r31.s64 + 112;
	// addi r5,r31,1024
	ctx.r5.s64 = ctx.r31.s64 + 1024;
	// addi r4,r31,2504
	ctx.r4.s64 = ctx.r31.s64 + 2504;
	// li r7,9
	ctx.r7.s64 = 9;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8a016db0
	ctx.lr = 0x8A091748;
	sub_8A016DB0(ctx, base);
	// lis r11,-30184
	ctx.r11.s64 = -1978138624;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// addi r10,r11,-6800
	ctx.r10.s64 = ctx.r11.s64 + -6800;
	// lbz r11,-6800(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -6800);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8a0917dc
	if (ctx.cr6.eq) goto loc_8A0917DC;
	// addi r30,r10,-8
	ctx.r30.s64 = ctx.r10.s64 + -8;
loc_8A091764:
	// extsh r10,r29
	ctx.r10.s64 = ctx.r29.s16;
	// lbz r8,15(r30)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + 15);
	// lbz r28,14(r30)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r30.u32 + 14);
	// addi r4,r31,2016
	ctx.r4.s64 = ctx.r31.s64 + 2016;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r6,9(r30)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r30.u32 + 9);
	// extsb r24,r8
	ctx.r24.s64 = ctx.r8.s8;
	// lbz r7,10(r30)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r30.u32 + 10);
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r8,11(r30)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + 11);
	// sth r24,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r24.u16);
	// li r5,8
	ctx.r5.s64 = 8;
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// stb r28,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r28.u8);
	// lbz r9,12(r30)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + 12);
	// add r24,r3,r4
	ctx.r24.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lbz r10,13(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 13);
	// li r4,7
	ctx.r4.s64 = 7;
	// stw r24,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x8a015df0
	ctx.lr = 0x8A0917B8;
	sub_8A015DF0(ctx, base);
	// lbzu r10,8(r30)
	ea = 8 + ctx.r30.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// extsh r9,r29
	ctx.r9.s64 = ctx.r29.s16;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 8);
	// extsh r29,r10
	ctx.r29.s64 = ctx.r10.s16;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8a091764
	if (!ctx.cr6.eq) goto loc_8A091764;
loc_8A0917DC:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_8A0917E4:
	// addi r10,r31,1448
	ctx.r10.s64 = ctx.r31.s64 + 1448;
	// mulli r9,r30,156
	ctx.r9.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(156));
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// rlwimi r3,r11,14,16,17
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xC000) | (ctx.r3.u64 & 0xFFFFFFFFFFFF3FFF);
	// addi r5,r31,2016
	ctx.r5.s64 = ctx.r31.s64 + 2016;
	// li r7,9
	ctx.r7.s64 = 9;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bl 0x8a0168b8
	ctx.lr = 0x8A091808;
	sub_8A0168B8(ctx, base);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x8a0917e4
	if (ctx.cr6.lt) goto loc_8A0917E4;
	// lis r11,-30184
	ctx.r11.s64 = -1978138624;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// addi r10,r11,-6768
	ctx.r10.s64 = ctx.r11.s64 + -6768;
	// lbz r11,-6768(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -6768);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8a0918a4
	if (ctx.cr6.eq) goto loc_8A0918A4;
	// addi r30,r10,-1
	ctx.r30.s64 = ctx.r10.s64 + -1;
loc_8A091838:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lbz r6,2(r30)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r30.u32 + 2);
	// extsh r7,r29
	ctx.r7.s64 = ctx.r29.s16;
	// lbz r8,3(r30)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + 3);
	// clrlwi r28,r11,16
	ctx.r28.u64 = ctx.r11.u32 & 0xFFFF;
	// lbz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + 4);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzu r10,5(r30)
	ea = 5 + ctx.r30.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// sth r28,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r28.u16);
	// addi r4,r31,728
	ctx.r4.s64 = ctx.r31.s64 + 728;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// li r7,-32
	ctx.r7.s64 = -32;
	// add r5,r11,r4
	ctx.r5.u64 = ctx.r11.u64 + ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r5,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x8a016260
	ctx.lr = 0x8A091884;
	sub_8A016260(ctx, base);
	// lbz r11,1(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 1);
	// extsh r10,r29
	ctx.r10.s64 = ctx.r29.s16;
	// extsh r9,r28
	ctx.r9.s64 = ctx.r28.s16;
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// extsh r29,r3
	ctx.r29.s64 = ctx.r3.s16;
	// bne cr6,0x8a091838
	if (!ctx.cr6.eq) goto loc_8A091838;
loc_8A0918A4:
	// addi r9,r31,728
	ctx.r9.s64 = ctx.r31.s64 + 728;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_8A0918B0:
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
	// stw r27,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r27.u32);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// blt cr6,0x8a0918b0
	if (ctx.cr6.lt) goto loc_8A0918B0;
	// lis r9,-30210
	ctx.r9.s64 = -1979842560;
	// stw r27,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r27.u32);
	// lis r8,0
	ctx.r8.s64 = 0;
	// stw r27,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r27.u32);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// lis r10,9
	ctx.r10.s64 = 589824;
	// ori r28,r8,32768
	ctx.r28.u64 = ctx.r8.u64 | 32768;
	// addi r9,r9,9016
	ctx.r9.s64 = ctx.r9.s64 + 9016;
loc_8A0918F8:
	// rlwinm r7,r11,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r3,r11,5,22,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x3E0;
	// extsh r8,r7
	ctx.r8.s64 = ctx.r7.s16;
	// addi r26,r11,1
	ctx.r26.s64 = ctx.r11.s64 + 1;
	// addi r7,r8,128
	ctx.r7.s64 = ctx.r8.s64 + 128;
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r6,r7,1,22,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x3FE;
	// lhzx r3,r3,r9
	ctx.r3.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r9.u32);
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// rlwinm r25,r4,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lhzx r7,r6,r9
	ctx.r7.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r9.u32);
	// addi r5,r31,112
	ctx.r5.s64 = ctx.r31.s64 + 112;
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// rlwinm r11,r4,12,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 12) & 0xFFFFF000;
	// mulli r3,r6,32256
	ctx.r3.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(32256));
	// addi r5,r5,12
	ctx.r5.s64 = ctx.r5.s64 + 12;
	// srawi r24,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r24.s64 = ctx.r3.s32 >> 8;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// addi r29,r31,112
	ctx.r29.s64 = ctx.r31.s64 + 112;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// stwx r11,r25,r5
	REX_STORE_U32(ctx.r25.u32 + ctx.r5.u32, ctx.r11.u32);
	// addi r5,r29,20
	ctx.r5.s64 = ctx.r29.s64 + 20;
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// addi r8,r31,112
	ctx.r8.s64 = ctx.r31.s64 + 112;
	// addi r30,r31,112
	ctx.r30.s64 = ctx.r31.s64 + 112;
	// stwx r10,r25,r5
	REX_STORE_U32(ctx.r25.u32 + ctx.r5.u32, ctx.r10.u32);
	// addi r6,r31,112
	ctx.r6.s64 = ctx.r31.s64 + 112;
	// addi r7,r31,112
	ctx.r7.s64 = ctx.r31.s64 + 112;
	// stwx r10,r25,r3
	REX_STORE_U32(ctx.r25.u32 + ctx.r3.u32, ctx.r10.u32);
	// subf r24,r28,r24
	ctx.r24.u64 = ctx.r24.u64 - ctx.r28.u64;
	// addi r5,r8,32
	ctx.r5.s64 = ctx.r8.s64 + 32;
	// addi r23,r31,112
	ctx.r23.s64 = ctx.r31.s64 + 112;
	// stwx r24,r25,r4
	REX_STORE_U32(ctx.r25.u32 + ctx.r4.u32, ctx.r24.u32);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// addi r6,r6,24
	ctx.r6.s64 = ctx.r6.s64 + 24;
	// addi r7,r7,28
	ctx.r7.s64 = ctx.r7.s64 + 28;
	// extsh r8,r26
	ctx.r8.s64 = ctx.r26.s16;
	// stwx r27,r25,r5
	REX_STORE_U32(ctx.r25.u32 + ctx.r5.u32, ctx.r27.u32);
	// neg r3,r11
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// stwx r10,r25,r23
	REX_STORE_U32(ctx.r25.u32 + ctx.r23.u32, ctx.r10.u32);
	// neg r4,r24
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r24.u64);
	// stwx r10,r25,r30
	REX_STORE_U32(ctx.r25.u32 + ctx.r30.u32, ctx.r10.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// stwx r3,r25,r7
	REX_STORE_U32(ctx.r25.u32 + ctx.r7.u32, ctx.r3.u32);
	// cmpwi cr6,r8,17
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 17, ctx.xer);
	// stwx r4,r25,r6
	REX_STORE_U32(ctx.r25.u32 + ctx.r6.u32, ctx.r4.u32);
	// blt cr6,0x8a0918f8
	if (ctx.cr6.lt) goto loc_8A0918F8;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8a0c2384
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8A094048) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8a0c2330
	ctx.lr = 0x8A094050;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30165
	ctx.r11.s64 = -1976893440;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r30,r11,13736
	ctx.r30.s64 = ctx.r11.s64 + 13736;
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
	// bgt cr6,0x8a094d8c
	if (ctx.cr6.gt) goto loc_8A094D8C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8a094854
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8A094854;
	// bdzf 4*cr6+eq,0x8a094874
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8A094874;
	// bdzf 4*cr6+eq,0x8a094944
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8A094944;
	// bdzf 4*cr6+eq,0x8a094b08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8A094B08;
	// bdzf 4*cr6+eq,0x8a0942d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8A0942D0;
	// bdzf 4*cr6+eq,0x8a094394
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8A094394;
	// bne cr6,0x8a094934
	if (!ctx.cr6.eq) goto loc_8A094934;
	// addi r10,r30,72
	ctx.r10.s64 = ctx.r30.s64 + 72;
	// lis r11,-30165
	ctx.r11.s64 = -1976893440;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r29,r11,10384
	ctx.r29.s64 = ctx.r11.s64 + 10384;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lhzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8a094174
	if (ctx.cr6.eq) goto loc_8A094174;
	// bl 0x8a093c00
	ctx.lr = 0x8A0940C0;
	sub_8A093C00(ctx, base);
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8a0940dc
	if (!ctx.cr6.eq) goto loc_8A0940DC;
	// addi r11,r30,148
	ctx.r11.s64 = ctx.r30.s64 + 148;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// stbx r25,r10,r29
	REX_STORE_U8(ctx.r10.u32 + ctx.r29.u32, ctx.r25.u8);
	// b 0x8a0942b0
	goto loc_8A0942B0;
loc_8A0940DC:
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
	// beq cr6,0x8a094128
	if (ctx.cr6.eq) goto loc_8A094128;
loc_8A0940FC:
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
	// blt cr6,0x8a0940fc
	if (ctx.cr6.lt) goto loc_8A0940FC;
	// b 0x8a094158
	goto loc_8A094158;
loc_8A094128:
	// addi r9,r30,52
	ctx.r9.s64 = ctx.r30.s64 + 52;
loc_8A09412C:
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
	// blt cr6,0x8a09412c
	if (ctx.cr6.lt) goto loc_8A09412C;
loc_8A094158:
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
	// b 0x8a0942b0
	goto loc_8A0942B0;
loc_8A094174:
	// bl 0x89ffd2f0
	ctx.lr = 0x8A094178;
	sub_89FFD2F0(ctx, base);
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8a09418c
	if (!ctx.cr6.eq) goto loc_8A09418C;
	// li r3,78
	ctx.r3.s64 = 78;
	// bl 0x8a017608
	ctx.lr = 0x8A09418C;
	sub_8A017608(ctx, base);
loc_8A09418C:
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
	// blt cr6,0x8a0942b0
	if (ctx.cr6.lt) goto loc_8A0942B0;
	// lis r11,16838
	ctx.r11.s64 = 1103495168;
	// stbx r25,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r25.u8);
	// lis r6,-30137
	ctx.r6.s64 = -1975058432;
	// lwzx r3,r31,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// ori r11,r11,20077
	ctx.r11.u64 = ctx.r11.u64 | 20077;
	// lis r5,-30210
	ctx.r5.s64 = -1979842560;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// lwz r11,-916(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + -916);
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
	// stw r11,-916(r6)
	REX_STORE_U32(ctx.r6.u32 + -916, ctx.r11.u32);
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
	// lis r5,-30184
	ctx.r5.s64 = -1978138624;
	// srawi r9,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 16;
	// addi r28,r5,-5648
	ctx.r28.s64 = ctx.r5.s64 + -5648;
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
	// bl 0x8a0b8680
	ctx.lr = 0x8A0942B0;
	sub_8A0B8680(ctx, base);
loc_8A0942B0:
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8a094d8c
	if (!ctx.cr6.eq) goto loc_8A094D8C;
	// addi r11,r30,148
	ctx.r11.s64 = ctx.r30.s64 + 148;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// stbx r25,r10,r29
	REX_STORE_U8(ctx.r10.u32 + ctx.r29.u32, ctx.r25.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8a0c2380
	__restgprlr_22(ctx, base);
	return;
loc_8A0942D0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x89ffc2b8
	ctx.lr = 0x8A0942D8;
	sub_89FFC2B8(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8a094864
	if (ctx.cr6.lt) goto loc_8A094864;
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
	// b 0x8a0c2380
	__restgprlr_22(ctx, base);
	return;
loc_8A094394:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x89ffc338
	ctx.lr = 0x8A09439C;
	sub_89FFC338(ctx, base);
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x8a094864
	if (ctx.cr6.lt) goto loc_8A094864;
	// addi r9,r30,164
	ctx.r9.s64 = ctx.r30.s64 + 164;
	// lis r11,-30210
	ctx.r11.s64 = -1979842560;
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
	// bge 0x8a0943fc
	if (!ctx.cr0.lt) goto loc_8A0943FC;
	// neg r3,r3
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r3.u64);
loc_8A0943FC:
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
	// bgt cr6,0x8a0947e4
	if (ctx.cr6.gt) goto loc_8A0947E4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8a094634
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8A094634;
	// bdzf 4*cr6+eq,0x8a0946bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8A0946BC;
	// bdzf 4*cr6+eq,0x8a094760
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8A094760;
	// bdzf 4*cr6+eq,0x8a094790
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8A094790;
	// bne cr6,0x8a0947ac
	if (!ctx.cr6.eq) goto loc_8A0947AC;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8a013dc0
	ctx.lr = 0x8A0944F4;
	sub_8A013DC0(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8a013fd8
	ctx.lr = 0x8A094500;
	sub_8A013FD8(ctx, base);
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
	// bne cr6,0x8a0946ac
	if (!ctx.cr6.eq) goto loc_8A0946AC;
	// addi r11,r30,192
	ctx.r11.s64 = ctx.r30.s64 + 192;
	// lbzx r10,r29,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// rlwinm r9,r10,0,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8a0947e4
	if (ctx.cr6.eq) goto loc_8A0947E4;
	// addi r10,r30,196
	ctx.r10.s64 = ctx.r30.s64 + 196;
	// lis r9,-30184
	ctx.r9.s64 = -1978138624;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r11,r9,-5632
	ctx.r11.s64 = ctx.r9.s64 + -5632;
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
	// bl 0x89ffe588
	ctx.lr = 0x8A094560;
	sub_89FFE588(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8a0947e4
	if (ctx.cr6.eq) goto loc_8A0947E4;
	// lis r11,-30184
	ctx.r11.s64 = -1978138624;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r11,r11,-5644
	ctx.r11.s64 = ctx.r11.s64 + -5644;
	// addi r29,r11,-2
	ctx.r29.s64 = ctx.r11.s64 + -2;
loc_8A094578:
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
	// bl 0x8a0b1a68
	ctx.lr = 0x8A094618;
	sub_8A0B1A68(ctx, base);
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
	// blt cr6,0x8a094578
	if (ctx.cr6.lt) goto loc_8A094578;
	// b 0x8a0947e4
	goto loc_8A0947E4;
loc_8A094634:
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// li r8,0
	ctx.r8.s64 = 0;
loc_8A09463C:
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,256
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 256, ctx.xer);
	// ble cr6,0x8a094658
	if (!ctx.cr6.gt) goto loc_8A094658;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r9,256
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 256, ctx.xer);
	// sthx r10,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u16);
loc_8A094658:
	// bge cr6,0x8a094668
	if (!ctx.cr6.lt) goto loc_8A094668;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// sthx r9,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u16);
loc_8A094668:
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// blt cr6,0x8a09463c
	if (ctx.cr6.lt) goto loc_8A09463C;
	// lhzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// clrlwi r10,r11,23
	ctx.r10.u64 = ctx.r11.u32 & 0x1FF;
	// cmpwi cr6,r10,256
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 256, ctx.xer);
	// bne cr6,0x8a0947e4
	if (!ctx.cr6.eq) goto loc_8A0947E4;
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
loc_8A0946AC:
	// lbzx r11,r31,r27
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r27.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r10,r31,r27
	REX_STORE_U8(ctx.r31.u32 + ctx.r27.u32, ctx.r10.u8);
	// b 0x8a0947e4
	goto loc_8A0947E4;
loc_8A0946BC:
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
	// bne cr6,0x8a0947e4
	if (!ctx.cr6.eq) goto loc_8A0947E4;
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
	// bl 0x8a0b3aa8
	ctx.lr = 0x8A094710;
	sub_8A0B3AA8(ctx, base);
	// extsb r10,r3
	ctx.r10.s64 = ctx.r3.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8a09472c
	if (ctx.cr6.eq) goto loc_8A09472C;
	// addi r11,r30,180
	ctx.r11.s64 = ctx.r30.s64 + 180;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
loc_8A09472C:
	// addi r10,r30,180
	ctx.r10.s64 = ctx.r30.s64 + 180;
	// lbzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8a0947e4
	if (ctx.cr6.eq) goto loc_8A0947E4;
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
	// b 0x8a0947e4
	goto loc_8A0947E4;
loc_8A094760:
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
	// bne cr6,0x8a0947e4
	if (!ctx.cr6.eq) goto loc_8A0947E4;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stbx r9,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u8);
	// stbx r8,r31,r27
	REX_STORE_U8(ctx.r31.u32 + ctx.r27.u32, ctx.r8.u8);
	// b 0x8a0947e4
	goto loc_8A0947E4;
loc_8A094790:
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
	// b 0x8a0947e4
	goto loc_8A0947E4;
loc_8A0947AC:
	// addi r11,r30,180
	ctx.r11.s64 = ctx.r30.s64 + 180;
	// lbzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8a0947e4
	if (!ctx.cr6.eq) goto loc_8A0947E4;
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
loc_8A0947E4:
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
	// b 0x8a0c2380
	__restgprlr_22(ctx, base);
	return;
loc_8A094854:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8a08c9a0
	ctx.lr = 0x8A09485C;
	sub_8A08C9A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8a094d8c
	if (!ctx.cr6.eq) goto loc_8A094D8C;
loc_8A094864:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_8A094868:
	// bl 0x8a093a78
	ctx.lr = 0x8A09486C;
	sub_8A093A78(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8a0c2380
	__restgprlr_22(ctx, base);
	return;
loc_8A094874:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x89ffc2b8
	ctx.lr = 0x8A09487C;
	sub_89FFC2B8(ctx, base);
	// extsh r28,r3
	ctx.r28.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// blt cr6,0x8a094868
	if (ctx.cr6.lt) goto loc_8A094868;
	// bl 0x8a08c888
	ctx.lr = 0x8A094894;
	sub_8A08C888(ctx, base);
	// addi r29,r30,12
	ctx.r29.s64 = ctx.r30.s64 + 12;
	// lwzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8a0948dc
	if (ctx.cr6.eq) goto loc_8A0948DC;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bne cr6,0x8a094918
	if (!ctx.cr6.eq) goto loc_8A094918;
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// lhzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,32768
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32768, ctx.xer);
	// bge cr6,0x8a094918
	if (!ctx.cr6.lt) goto loc_8A094918;
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
	// bl 0x89ffbed8
	ctx.lr = 0x8A0948D4;
	sub_89FFBED8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8a0c2380
	__restgprlr_22(ctx, base);
	return;
loc_8A0948DC:
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
	// bne cr6,0x8a094904
	if (!ctx.cr6.eq) goto loc_8A094904;
	// lwzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// rlwinm r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8a094d8c
	if (!ctx.cr6.eq) goto loc_8A094D8C;
loc_8A094904:
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x8a017608
	ctx.lr = 0x8A09490C;
	sub_8A017608(ctx, base);
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// li r10,1
	ctx.r10.s64 = 1;
	// sthx r10,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u16);
loc_8A094918:
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
	// b 0x8a094d44
	goto loc_8A094D44;
loc_8A094934:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8a08cde0
	ctx.lr = 0x8A09493C;
	sub_8A08CDE0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8a0c2380
	__restgprlr_22(ctx, base);
	return;
loc_8A094944:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x89ffc2b8
	ctx.lr = 0x8A09494C;
	sub_89FFC2B8(ctx, base);
	// extsh r29,r3
	ctx.r29.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// blt cr6,0x8a094868
	if (ctx.cr6.lt) goto loc_8A094868;
	// bl 0x8a08c888
	ctx.lr = 0x8A094964;
	sub_8A08C888(ctx, base);
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
	// bne cr6,0x8a0949c8
	if (!ctx.cr6.eq) goto loc_8A0949C8;
	// mulli r11,r29,208
	ctx.r11.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(208));
	// lwzx r10,r11,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// rlwinm r9,r10,0,17,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8a0949c8
	if (ctx.cr6.eq) goto loc_8A0949C8;
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
	// bl 0x89ffbed8
	ctx.lr = 0x8A0949B4;
	sub_89FFBED8(ctx, base);
	// addi r8,r30,160
	ctx.r8.s64 = ctx.r30.s64 + 160;
	// li r7,-1
	ctx.r7.s64 = -1;
	// sthx r7,r31,r8
	REX_STORE_U16(ctx.r31.u32 + ctx.r8.u32, ctx.r7.u16);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8a0c2380
	__restgprlr_22(ctx, base);
	return;
loc_8A0949C8:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x89ffe588
	ctx.lr = 0x8A0949D8;
	sub_89FFE588(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8a094d8c
	if (ctx.cr6.eq) goto loc_8A094D8C;
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
	// lis r10,-30210
	ctx.r10.s64 = -1979842560;
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
	// lis r11,-30184
	ctx.r11.s64 = -1978138624;
	// stwx r7,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r7.u32);
	// addi r23,r11,-5392
	ctx.r23.s64 = ctx.r11.s64 + -5392;
loc_8A094A60:
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
	// bl 0x8a0afc98
	ctx.lr = 0x8A094AEC;
	sub_8A0AFC98(ctx, base);
	// addi r8,r29,1
	ctx.r8.s64 = ctx.r29.s64 + 1;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// blt cr6,0x8a094a60
	if (ctx.cr6.lt) goto loc_8A094A60;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8a0c2380
	__restgprlr_22(ctx, base);
	return;
loc_8A094B08:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x89ffc2b8
	ctx.lr = 0x8A094B10;
	sub_89FFC2B8(ctx, base);
	// extsh r29,r3
	ctx.r29.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// blt cr6,0x8a094868
	if (ctx.cr6.lt) goto loc_8A094868;
	// bl 0x8a08c888
	ctx.lr = 0x8A094B28;
	sub_8A08C888(ctx, base);
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
	// beq cr6,0x8a094d8c
	if (ctx.cr6.eq) goto loc_8A094D8C;
	// addi r28,r30,12
	ctx.r28.s64 = ctx.r30.s64 + 12;
	// lwzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8a094ce8
	if (ctx.cr6.eq) goto loc_8A094CE8;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x8a094ba0
	if (ctx.cr6.eq) goto loc_8A094BA0;
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
	// blt cr6,0x8a094d8c
	if (ctx.cr6.lt) goto loc_8A094D8C;
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// b 0x8a094d2c
	goto loc_8A094D2C;
loc_8A094BA0:
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
	// bne cr6,0x8a094bd0
	if (!ctx.cr6.eq) goto loc_8A094BD0;
	// addi r11,r30,160
	ctx.r11.s64 = ctx.r30.s64 + 160;
	// li r10,-1
	ctx.r10.s64 = -1;
	// sthx r10,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u16);
	// b 0x8a094d2c
	goto loc_8A094D2C;
loc_8A094BD0:
	// addi r29,r30,184
	ctx.r29.s64 = ctx.r30.s64 + 184;
	// li r25,0
	ctx.r25.s64 = 0;
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8a094c08
	if (ctx.cr6.eq) goto loc_8A094C08;
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
	// blt cr6,0x8a094d8c
	if (ctx.cr6.lt) goto loc_8A094D8C;
	// stbx r25,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r25.u8);
	// b 0x8a094c20
	goto loc_8A094C20;
loc_8A094C08:
	// li r5,30
	ctx.r5.s64 = 30;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x89ffe588
	ctx.lr = 0x8A094C18;
	sub_89FFE588(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8a094d8c
	if (ctx.cr6.eq) goto loc_8A094D8C;
loc_8A094C20:
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// lis r10,-30184
	ctx.r10.s64 = -1978138624;
	// addi r9,r30,182
	ctx.r9.s64 = ctx.r30.s64 + 182;
	// addi r10,r10,-5372
	ctx.r10.s64 = ctx.r10.s64 + -5372;
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lis r8,-30184
	ctx.r8.s64 = -1978138624;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbzx r7,r31,r9
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// addi r6,r30,48
	ctx.r6.s64 = ctx.r30.s64 + 48;
	// addi r5,r30,52
	ctx.r5.s64 = ctx.r30.s64 + 52;
	// addi r9,r8,-5356
	ctx.r9.s64 = ctx.r8.s64 + -5356;
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
	// bl 0x8a013c88
	ctx.lr = 0x8A094C78;
	sub_8A013C88(ctx, base);
	// lis r11,-30160
	ctx.r11.s64 = -1976565760;
	// lwz r26,0(r30)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r11,r11,27472
	ctx.r11.s64 = ctx.r11.s64 + 27472;
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
	// bl 0x8a013ec8
	ctx.lr = 0x8A094CA8;
	sub_8A013EC8(ctx, base);
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
	// bl 0x8a0afbf8
	ctx.lr = 0x8A094CC4;
	sub_8A0AFBF8(ctx, base);
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
	// bne cr6,0x8a094d8c
	if (!ctx.cr6.eq) goto loc_8A094D8C;
	// stbx r25,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r25.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8a0c2380
	__restgprlr_22(ctx, base);
	return;
loc_8A094CE8:
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
	// beq cr6,0x8a094d8c
	if (ctx.cr6.eq) goto loc_8A094D8C;
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x8a017608
	ctx.lr = 0x8A094D10;
	sub_8A017608(ctx, base);
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
loc_8A094D2C:
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
loc_8A094D44:
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
loc_8A094D8C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8a0c2380
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8A0A28E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8a0c2314
	ctx.lr = 0x8A0A28F0;
	__savegprlr_15(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30165
	ctx.r11.s64 = -1976893440;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r30,r11,13736
	ctx.r30.s64 = ctx.r11.s64 + 13736;
	// mulli r31,r10,208
	ctx.r31.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// addi r9,r30,8
	ctx.r9.s64 = ctx.r30.s64 + 8;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwzx r10,r31,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x8a0a2acc
	if (ctx.cr6.lt) goto loc_8A0A2ACC;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bge cr6,0x8a0a2ed0
	if (!ctx.cr6.lt) goto loc_8A0A2ED0;
	// addi r11,r30,188
	ctx.r11.s64 = ctx.r30.s64 + 188;
	// lbzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8a0a29cc
	if (ctx.cr6.eq) goto loc_8A0A29CC;
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
	// lwzx r3,r31,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// addi r8,r30,207
	ctx.r8.s64 = ctx.r30.s64 + 207;
	// addi r7,r30,200
	ctx.r7.s64 = ctx.r30.s64 + 200;
	// addi r9,r30,52
	ctx.r9.s64 = ctx.r30.s64 + 52;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// lwzx r5,r31,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lbzx r11,r31,r8
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// lbzx r8,r31,r7
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r7.u32);
	// lwzx r6,r31,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// extsb r7,r11
	ctx.r7.s64 = ctx.r11.s8;
	// beq cr6,0x8a0a2998
	if (ctx.cr6.eq) goto loc_8A0A2998;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// beq cr6,0x8a0a2980
	if (ctx.cr6.eq) goto loc_8A0A2980;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x8a0b8480
	ctx.lr = 0x8A0A2970;
	sub_8A0B8480(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8a0c2364
	__restgprlr_15(ctx, base);
	return;
loc_8A0A2980:
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x8a0b8480
	ctx.lr = 0x8A0A2988;
	sub_8A0B8480(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8a0c2364
	__restgprlr_15(ctx, base);
	return;
loc_8A0A2998:
	// addi r10,r30,44
	ctx.r10.s64 = ctx.r30.s64 + 44;
	// lis r9,-30165
	ctx.r9.s64 = -1976893440;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r9,r9,10384
	ctx.r9.s64 = ctx.r9.s64 + 10384;
	// lwzx r4,r31,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// li r4,6
	ctx.r4.s64 = 6;
	// stbx r29,r10,r9
	REX_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r29.u8);
	// bl 0x8a0b8480
	ctx.lr = 0x8A0A29BC;
	sub_8A0B8480(ctx, base);
loc_8A0A29BC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8a0c2364
	__restgprlr_15(ctx, base);
	return;
loc_8A0A29CC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x89ffc2b8
	ctx.lr = 0x8A0A29D4;
	sub_89FFC2B8(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8a0a29f0
	if (!ctx.cr6.lt) goto loc_8A0A29F0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8a0a2838
	ctx.lr = 0x8A0A29E8;
	sub_8A0A2838(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8a0c2364
	__restgprlr_15(ctx, base);
	return;
loc_8A0A29F0:
	// addi r7,r30,48
	ctx.r7.s64 = ctx.r30.s64 + 48;
	// lwzx r10,r31,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// mulli r29,r11,208
	ctx.r29.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lhzx r9,r31,r7
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r7.u32);
	// addi r6,r30,48
	ctx.r6.s64 = ctx.r30.s64 + 48;
	// rlwinm r8,r10,0,30,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stwx r8,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r8.u32);
	// lhzx r5,r29,r6
	ctx.r5.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r6.u32);
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x8a0a2a34
	if (!ctx.cr6.eq) goto loc_8A0A2A34;
	// addi r11,r30,52
	ctx.r11.s64 = ctx.r30.s64 + 52;
	// addi r10,r30,52
	ctx.r10.s64 = ctx.r30.s64 + 52;
	// lhzx r9,r29,r11
	ctx.r9.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lhzx r6,r31,r10
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// cmplw cr6,r6,r9
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8a0a2a38
	if (ctx.cr6.eq) goto loc_8A0A2A38;
loc_8A0A2A34:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8A0A2A38:
	// addi r10,r30,192
	ctx.r10.s64 = ctx.r30.s64 + 192;
	// addi r9,r30,44
	ctx.r9.s64 = ctx.r30.s64 + 44;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r5,-30137
	ctx.r5.s64 = -1975058432;
	// or r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 | ctx.r8.u64;
	// lbzx r3,r31,r10
	ctx.r3.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// addi r10,r5,20328
	ctx.r10.s64 = ctx.r5.s64 + 20328;
	// lwzx r9,r31,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r4,r30,52
	ctx.r4.s64 = ctx.r30.s64 + 52;
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// stwx r8,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r8.u32);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r3,11,0,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 11) & 0xFFFFF800;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r28,r10,1024
	ctx.r28.s64 = ctx.r10.s64 + 1024;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r5,r30,158
	ctx.r5.s64 = ctx.r30.s64 + 158;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwzx r6,r11,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r11,r11,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// srawi r10,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 16;
	// sthx r10,r31,r7
	REX_STORE_U16(ctx.r31.u32 + ctx.r7.u32, ctx.r10.u16);
	// sthx r6,r31,r4
	REX_STORE_U16(ctx.r31.u32 + ctx.r4.u32, ctx.r6.u16);
	// sthx r11,r31,r5
	REX_STORE_U16(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u16);
	// bl 0x89ffc0c0
	ctx.lr = 0x8A0A2AA8;
	sub_89FFC0C0(ctx, base);
	// addi r5,r30,200
	ctx.r5.s64 = ctx.r30.s64 + 200;
	// addi r4,r30,206
	ctx.r4.s64 = ctx.r30.s64 + 206;
	// addi r3,r30,200
	ctx.r3.s64 = ctx.r30.s64 + 200;
	// lbzx r10,r29,r5
	ctx.r10.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r5.u32);
	// lbzx r11,r31,r4
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r4.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stbx r11,r31,r3
	REX_STORE_U8(ctx.r31.u32 + ctx.r3.u32, ctx.r11.u8);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8a0c2364
	__restgprlr_15(ctx, base);
	return;
loc_8A0A2ACC:
	// addi r10,r30,188
	ctx.r10.s64 = ctx.r30.s64 + 188;
	// lbzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8a0a2be8
	if (ctx.cr6.lt) goto loc_8A0A2BE8;
	// beq cr6,0x8a0a2bc4
	if (ctx.cr6.eq) goto loc_8A0A2BC4;
	// addi r10,r30,183
	ctx.r10.s64 = ctx.r30.s64 + 183;
	// lbzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x8a0a2c34
	if (ctx.cr6.eq) goto loc_8A0A2C34;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stbx r11,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u8);
	// bl 0x8a013dc0
	ctx.lr = 0x8A0A2B04;
	sub_8A013DC0(ctx, base);
	// addi r8,r30,186
	ctx.r8.s64 = ctx.r30.s64 + 186;
	// lis r7,-30160
	ctx.r7.s64 = -1976565760;
	// addi r28,r30,158
	ctx.r28.s64 = ctx.r30.s64 + 158;
	// addi r11,r7,27472
	ctx.r11.s64 = ctx.r7.s64 + 27472;
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
	// bl 0x8a013ec8
	ctx.lr = 0x8A0A2B48;
	sub_8A013EC8(ctx, base);
	// subf r6,r3,r29
	ctx.r6.u64 = ctx.r29.u64 - ctx.r3.u64;
	// clrlwi r11,r6,23
	ctx.r11.u64 = ctx.r6.u32 & 0x1FF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8a0a2b6c
	if (ctx.cr6.eq) goto loc_8A0A2B6C;
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// addi r10,r29,2
	ctx.r10.s64 = ctx.r29.s64 + 2;
	// bgt cr6,0x8a0a2b68
	if (ctx.cr6.gt) goto loc_8A0A2B68;
	// addi r10,r29,-2
	ctx.r10.s64 = ctx.r29.s64 + -2;
loc_8A0A2B68:
	// sthx r10,r31,r28
	REX_STORE_U16(ctx.r31.u32 + ctx.r28.u32, ctx.r10.u16);
loc_8A0A2B6C:
	// addic. r11,r11,-256
	ctx.xer.ca = ctx.r11.u32 > 255;
	ctx.r11.s64 = ctx.r11.s64 + -256;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x8a0a2b78
	if (!ctx.cr0.lt) goto loc_8A0A2B78;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_8A0A2B78:
	// cmpwi cr6,r11,248
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 248, ctx.xer);
	// addi r10,r30,168
	ctx.r10.s64 = ctx.r30.s64 + 168;
	// ble cr6,0x8a0a2ba4
	if (!ctx.cr6.gt) goto loc_8A0A2BA4;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r9,r11,32768
	ctx.r9.u64 = ctx.r11.u64 | 32768;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8a0a2c34
	if (!ctx.cr6.lt) goto loc_8A0A2C34;
	// addi r11,r11,4096
	ctx.r11.s64 = ctx.r11.s64 + 4096;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// b 0x8a0a2c34
	goto loc_8A0A2C34;
loc_8A0A2BA4:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r9,r11,49152
	ctx.r9.u64 = ctx.r11.u64 | 49152;
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x8a0a2c34
	if (!ctx.cr6.gt) goto loc_8A0A2C34;
	// addi r11,r11,-4096
	ctx.r11.s64 = ctx.r11.s64 + -4096;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// b 0x8a0a2c34
	goto loc_8A0A2C34;
loc_8A0A2BC4:
	// addi r9,r30,164
	ctx.r9.s64 = ctx.r30.s64 + 164;
	// addi r8,r30,48
	ctx.r8.s64 = ctx.r30.s64 + 48;
	// lwzx r7,r31,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// lwzx r6,r31,r8
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x8a0a2c34
	if (!ctx.cr6.lt) goto loc_8A0A2C34;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u8);
	// b 0x8a0a2c34
	goto loc_8A0A2C34;
loc_8A0A2BE8:
	// lis r9,-30137
	ctx.r9.s64 = -1975058432;
	// lis r8,16838
	ctx.r8.s64 = 1103495168;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// ori r6,r8,20077
	ctx.r6.u64 = ctx.r8.u64 | 20077;
	// stbx r7,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r7.u8);
	// addi r4,r30,164
	ctx.r4.s64 = ctx.r30.s64 + 164;
	// lwz r11,-916(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + -916);
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stw r11,-916(r9)
	REX_STORE_U32(ctx.r9.u32 + -916, ctx.r11.u32);
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
loc_8A0A2C34:
	// addi r29,r30,158
	ctx.r29.s64 = ctx.r30.s64 + 158;
	// lis r11,-30210
	ctx.r11.s64 = -1979842560;
	// addi r9,r30,168
	ctx.r9.s64 = ctx.r30.s64 + 168;
	// addi r27,r11,9016
	ctx.r27.s64 = ctx.r11.s64 + 9016;
	// addi r22,r30,48
	ctx.r22.s64 = ctx.r30.s64 + 48;
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
	// lwzx r8,r31,r22
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r22.u32);
	// srawi r9,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 4;
	// rlwinm r4,r5,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x3FE;
	// lhzx r3,r4,r27
	ctx.r3.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r27.u32);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mullw r6,r11,r9
	ctx.r6.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// srawi r11,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 8;
	// add r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stwx r11,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// stwx r5,r31,r22
	REX_STORE_U32(ctx.r31.u32 + ctx.r22.u32, ctx.r5.u32);
	// lhzx r4,r31,r22
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r22.u32);
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// addic. r11,r3,-160
	ctx.xer.ca = ctx.r3.u32 > 159;
	ctx.r11.s64 = ctx.r3.s64 + -160;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x8a0a2c98
	if (!ctx.cr0.lt) goto loc_8A0A2C98;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_8A0A2C98:
	// cmpwi cr6,r11,416
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 416, ctx.xer);
	// bgt cr6,0x8a0a29bc
	if (ctx.cr6.gt) goto loc_8A0A29BC;
	// rlwinm r11,r10,1,22,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x3FE;
	// addi r25,r30,52
	ctx.r25.s64 = ctx.r30.s64 + 52;
	// addi r8,r30,60
	ctx.r8.s64 = ctx.r30.s64 + 60;
	// lhzx r7,r11,r27
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r27.u32);
	// lwzx r10,r31,r25
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r25.u32);
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
	// stwx r4,r31,r25
	REX_STORE_U32(ctx.r31.u32 + ctx.r25.u32, ctx.r4.u32);
	// lhzx r3,r31,r25
	ctx.r3.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r25.u32);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// addic. r11,r11,-512
	ctx.xer.ca = ctx.r11.u32 > 511;
	ctx.r11.s64 = ctx.r11.s64 + -512;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x8a0a2ce0
	if (!ctx.cr0.lt) goto loc_8A0A2CE0;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_8A0A2CE0:
	// cmpwi cr6,r11,416
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 416, ctx.xer);
	// bgt cr6,0x8a0a29bc
	if (ctx.cr6.gt) goto loc_8A0A29BC;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x89ffc0c0
	ctx.lr = 0x8A0A2CF0;
	sub_89FFC0C0(ctx, base);
	// addi r11,r30,44
	ctx.r11.s64 = ctx.r30.s64 + 44;
	// li r10,254
	ctx.r10.s64 = 254;
	// lwzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lis r11,-30137
	ctx.r11.s64 = -1975058432;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// addi r11,r11,20328
	ctx.r11.s64 = ctx.r11.s64 + 20328;
	// rlwinm r8,r9,9,0,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0xFFFFFE00;
loc_8A0A2D0C:
	// add r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r6,r11,1024
	ctx.r6.s64 = ctx.r11.s64 + 1024;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r7,r11,1028
	ctx.r7.s64 = ctx.r11.s64 + 1028;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// lwzx r28,r5,r11
	ctx.r28.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// lwzx r6,r5,r6
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stwx r28,r5,r3
	REX_STORE_U32(ctx.r5.u32 + ctx.r3.u32, ctx.r28.u32);
	// stwx r6,r5,r7
	REX_STORE_U32(ctx.r5.u32 + ctx.r7.u32, ctx.r6.u32);
	// bge cr6,0x8a0a2d0c
	if (!ctx.cr6.lt) goto loc_8A0A2D0C;
	// lhzx r10,r31,r22
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r22.u32);
	// rlwinm r9,r9,11,0,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 11) & 0xFFFFF800;
	// lhzx r8,r31,r25
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r25.u32);
	// addi r7,r11,1024
	ctx.r7.s64 = ctx.r11.s64 + 1024;
	// lhzx r6,r31,r29
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r29.u32);
	// rotlwi r5,r10,16
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// extsh r4,r8
	ctx.r4.s64 = ctx.r8.s16;
	// extsh r3,r6
	ctx.r3.s64 = ctx.r6.s16;
	// or r10,r5,r4
	ctx.r10.u64 = ctx.r5.u64 | ctx.r4.u64;
	// stwx r3,r9,r7
	REX_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.r3.u32);
	// li r5,30
	ctx.r5.s64 = 30;
	// li r4,30
	ctx.r4.s64 = 30;
	// stwx r10,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x89ffe588
	ctx.lr = 0x8A0A2D80;
	sub_89FFE588(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8a0a2ed0
	if (ctx.cr6.eq) goto loc_8A0A2ED0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x89ffb0c0
	ctx.lr = 0x8A0A2D90;
	sub_89FFB0C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8a0a2ed0
	if (ctx.cr6.eq) goto loc_8A0A2ED0;
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// li r17,0
	ctx.r17.s64 = 0;
	// lis r21,4
	ctx.r21.s64 = 262144;
	// rlwinm r11,r17,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r15,128
	ctx.r15.s64 = 8388608;
	// lwzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lis r16,320
	ctx.r16.s64 = 20971520;
	// lis r18,120
	ctx.r18.s64 = 7864320;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r9,-30126
	ctx.r9.s64 = -1974337536;
	// extsh r20,r8
	ctx.r20.s64 = ctx.r8.s16;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// addi r7,r20,128
	ctx.r7.s64 = ctx.r20.s64 + 128;
	// lis r10,-30184
	ctx.r10.s64 = -1978138624;
	// lwz r19,-13288(r9)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r9.u32 + -13288);
	// rlwinm r23,r20,1,22,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 1) & 0x3FE;
	// rlwinm r24,r7,1,22,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x3FE;
	// addi r26,r10,544
	ctx.r26.s64 = ctx.r10.s64 + 544;
loc_8A0A2DE0:
	// lwzx r11,r11,r26
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// lhzx r10,r23,r27
	ctx.r10.u64 = REX_LOAD_U16(ctx.r23.u32 + ctx.r27.u32);
	// lhzx r9,r24,r27
	ctx.r9.u64 = REX_LOAD_U16(ctx.r24.u32 + ctx.r27.u32);
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// lwzx r7,r31,r22
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r22.u32);
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// lwzx r10,r31,r25
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r25.u32);
	// mullw r5,r11,r8
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// rlwinm r4,r6,16,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFFFF0000;
	// srawi r3,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 8;
	// srawi r9,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 8;
	// mullw r6,r11,r6
	ctx.r6.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// subf r5,r3,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r3.u64;
	// rlwinm r4,r8,16,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000;
	// mulli r3,r5,224
	ctx.r3.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(224));
	// srawi r8,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 8;
	// srawi r11,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 8;
	// srawi r9,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 8;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subf r30,r21,r8
	ctx.r30.u64 = ctx.r8.u64 - ctx.r21.u64;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8A0A2E40:
	// cmpw cr6,r30,r15
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r15.s32, ctx.xer);
	// blt cr6,0x8a0a2e78
	if (ctx.cr6.lt) goto loc_8A0A2E78;
	// cmpw cr6,r30,r16
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r16.s32, ctx.xer);
	// bgt cr6,0x8a0a2e78
	if (ctx.cr6.gt) goto loc_8A0A2E78;
	// subf r11,r19,r29
	ctx.r11.u64 = ctx.r29.u64 - ctx.r19.u64;
	// subf. r10,r18,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r18.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x8a0a2e60
	if (!ctx.cr0.lt) goto loc_8A0A2E60;
	// neg r10,r10
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r10.u64);
loc_8A0A2E60:
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
	// b 0x8a0a2e7c
	goto loc_8A0A2E7C;
loc_8A0A2E78:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8A0A2E7C:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8a0a2ea4
	if (ctx.cr6.eq) goto loc_8A0A2EA4;
	// addi r11,r28,24
	ctx.r11.s64 = ctx.r28.s64 + 24;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// rlwinm r7,r11,13,0,18
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0xFFFFE000;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8a0b0348
	ctx.lr = 0x8A0A2EA4;
	sub_8A0B0348(ctx, base);
loc_8A0A2EA4:
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x8a0a2e40
	if (ctx.cr6.lt) goto loc_8A0A2E40;
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
	// blt cr6,0x8a0a2de0
	if (ctx.cr6.lt) goto loc_8A0A2DE0;
loc_8A0A2ED0:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8a0c2364
	__restgprlr_15(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8A0A6FD0) {
	REX_FUNC_PROLOGUE();
	// lis r9,-30137
	ctx.r9.s64 = -1975058432;
	// lis r8,16838
	ctx.r8.s64 = 1103495168;
	// lis r5,-30165
	ctx.r5.s64 = -1976893440;
	// ori r6,r8,20077
	ctx.r6.u64 = ctx.r8.u64 | 20077;
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// lwz r10,-916(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + -916);
	// addi r11,r5,13736
	ctx.r11.s64 = ctx.r5.s64 + 13736;
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
	// stw r10,-916(r9)
	REX_STORE_U32(ctx.r9.u32 + -916, ctx.r10.u32);
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
	// li r4,12
	ctx.r4.s64 = 12;
	// beq cr6,0x8a0a7054
	if (ctx.cr6.eq) goto loc_8A0A7054;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8a0a7050
	if (ctx.cr6.eq) goto loc_8A0A7050;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8a0a704c
	if (ctx.cr6.eq) goto loc_8A0A704C;
	// b 0x8a0b8480
	sub_8A0B8480(ctx, base);
	return;
loc_8A0A704C:
	// b 0x8a0b8e70
	sub_8A0B8E70(ctx, base);
	return;
loc_8A0A7050:
	// b 0x8a0b9018
	sub_8A0B9018(ctx, base);
	return;
loc_8A0A7054:
	// b 0x8a0b8c78
	sub_8A0B8C78(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8A0A7158) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8a0c2334
	ctx.lr = 0x8A0A7160;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30165
	ctx.r11.s64 = -1976893440;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r31,r11,13736
	ctx.r31.s64 = ctx.r11.s64 + 13736;
	// mulli r30,r10,208
	ctx.r30.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwzx r11,r30,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x8a0a72a8
	if (ctx.cr6.lt) goto loc_8A0A72A8;
	// cmplwi cr6,r11,34
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 34, ctx.xer);
	// bgt cr6,0x8a0a72a8
	if (ctx.cr6.gt) goto loc_8A0A72A8;
	// bl 0x89ffc2b8
	ctx.lr = 0x8A0A7194;
	sub_89FFC2B8(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8a0a71b4
	if (!ctx.cr6.lt) goto loc_8A0A71B4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8a0a7058
	ctx.lr = 0x8A0A71AC;
	sub_8A0A7058(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8a0c2384
	__restgprlr_23(ctx, base);
	return;
loc_8A0A71B4:
	// mulli r5,r11,208
	ctx.r5.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// lwzx r10,r30,r29
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// lis r11,-30210
	ctx.r11.s64 = -1979842560;
	// addi r9,r31,60
	ctx.r9.s64 = ctx.r31.s64 + 60;
	// addi r7,r11,9016
	ctx.r7.s64 = ctx.r11.s64 + 9016;
	// addi r6,r31,48
	ctx.r6.s64 = ctx.r31.s64 + 48;
	// lwzx r3,r5,r3
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r3.u32);
	// addi r29,r31,56
	ctx.r29.s64 = ctx.r31.s64 + 56;
	// addi r27,r31,48
	ctx.r27.s64 = ctx.r31.s64 + 48;
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r9,r30,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// extsh r26,r11
	ctx.r26.s64 = ctx.r11.s16;
	// lwzx r8,r5,r6
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// srawi r11,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 4;
	// lwzx r6,r30,r29
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// rlwinm r29,r26,1,22,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0x3FE;
	// addi r9,r9,128
	ctx.r9.s64 = ctx.r9.s64 + 128;
	// addi r26,r31,206
	ctx.r26.s64 = ctx.r31.s64 + 206;
	// rlwinm r25,r9,1,22,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x3FE;
	// addi r24,r31,52
	ctx.r24.s64 = ctx.r31.s64 + 52;
	// lhzx r9,r29,r7
	ctx.r9.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r7.u32);
	// addi r29,r31,200
	ctx.r29.s64 = ctx.r31.s64 + 200;
	// addi r31,r31,200
	ctx.r31.s64 = ctx.r31.s64 + 200;
	// extsh r23,r9
	ctx.r23.s64 = ctx.r9.s16;
	// lbzx r9,r30,r26
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r26.u32);
	// lhzx r7,r25,r7
	ctx.r7.u64 = REX_LOAD_U16(ctx.r25.u32 + ctx.r7.u32);
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// mullw r26,r23,r11
	ctx.r26.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r11.s32);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// mullw r11,r7,r11
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// srawi r7,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 8;
	// srawi r11,r26,8
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r26.s32 >> 8;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// stwx r8,r30,r27
	REX_STORE_U32(ctx.r30.u32 + ctx.r27.u32, ctx.r8.u32);
	// lwzx r8,r5,r3
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r3.u32);
	// add r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stwx r7,r30,r24
	REX_STORE_U32(ctx.r30.u32 + ctx.r24.u32, ctx.r7.u32);
	// lbzx r11,r5,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r29.u32);
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stbx r6,r30,r31
	REX_STORE_U8(ctx.r30.u32 + ctx.r31.u32, ctx.r6.u8);
	// beq cr6,0x8a0a7298
	if (ctx.cr6.eq) goto loc_8A0A7298;
	// cmplwi cr6,r10,33
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 33, ctx.xer);
	// beq cr6,0x8a0a7288
	if (ctx.cr6.eq) goto loc_8A0A7288;
	// cmplwi cr6,r10,34
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 34, ctx.xer);
	// bne cr6,0x8a0a7340
	if (!ctx.cr6.eq) goto loc_8A0A7340;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8a0a6ad8
	ctx.lr = 0x8A0A7280;
	sub_8A0A6AD8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8a0c2384
	__restgprlr_23(ctx, base);
	return;
loc_8A0A7288:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8a0a6bf0
	ctx.lr = 0x8A0A7290;
	sub_8A0A6BF0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8a0c2384
	__restgprlr_23(ctx, base);
	return;
loc_8A0A7298:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8a0a6dc8
	ctx.lr = 0x8A0A72A0;
	sub_8A0A6DC8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8a0c2384
	__restgprlr_23(ctx, base);
	return;
loc_8A0A72A8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x89ffd2f0
	ctx.lr = 0x8A0A72B0;
	sub_89FFD2F0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x89ffd150
	ctx.lr = 0x8A0A72B8;
	sub_89FFD150(ctx, base);
	// addi r11,r31,158
	ctx.r11.s64 = ctx.r31.s64 + 158;
	// addi r10,r31,164
	ctx.r10.s64 = ctx.r31.s64 + 164;
	// addi r8,r31,12
	ctx.r8.s64 = ctx.r31.s64 + 12;
	// addi r7,r31,28
	ctx.r7.s64 = ctx.r31.s64 + 28;
	// addi r6,r31,16
	ctx.r6.s64 = ctx.r31.s64 + 16;
	// addi r5,r31,20
	ctx.r5.s64 = ctx.r31.s64 + 20;
	// addi r4,r31,36
	ctx.r4.s64 = ctx.r31.s64 + 36;
	// addi r9,r31,24
	ctx.r9.s64 = ctx.r31.s64 + 24;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// lhzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r11.u32);
	// lhzx r31,r30,r10
	ctx.r31.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r10.u32);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// lwzx r9,r30,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// clrlwi r11,r31,30
	ctx.r11.u64 = ctx.r31.u32 & 0x3;
	// addi r31,r10,512
	ctx.r31.s64 = ctx.r10.s64 + 512;
	// stwx r11,r30,r8
	REX_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r11.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r8,r31,10
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x3FF) != 0);
	ctx.r8.s64 = ctx.r31.s32 >> 10;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r10,r8,27
	ctx.r10.u64 = ctx.r8.u32 & 0x1F;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// stwx r10,r30,r29
	REX_STORE_U32(ctx.r30.u32 + ctx.r29.u32, ctx.r10.u32);
	// lwzx r10,r9,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r10,r30,r7
	REX_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r10.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r7,r30,r6
	REX_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r7.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r6,r30,r5
	REX_STORE_U32(ctx.r30.u32 + ctx.r5.u32, ctx.r6.u32);
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r5,r30,r4
	REX_STORE_U32(ctx.r30.u32 + ctx.r4.u32, ctx.r5.u32);
	// lwz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r4,r30,r3
	REX_STORE_U32(ctx.r30.u32 + ctx.r3.u32, ctx.r4.u32);
loc_8A0A7340:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8a0c2384
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8A0A8698) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8a0c2348
	ctx.lr = 0x8A0A86A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30165
	ctx.r11.s64 = -1976893440;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r30,r11,13736
	ctx.r30.s64 = ctx.r11.s64 + 13736;
	// mulli r31,r10,208
	ctx.r31.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// addi r6,r30,48
	ctx.r6.s64 = ctx.r30.s64 + 48;
	// lis r8,-128
	ctx.r8.s64 = -8388608;
	// lis r11,-30210
	ctx.r11.s64 = -1979842560;
	// addi r9,r11,9016
	ctx.r9.s64 = ctx.r11.s64 + 9016;
	// lwzx r7,r31,r6
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8a0a8750
	if (ctx.cr6.lt) goto loc_8A0A8750;
	// addi r10,r30,158
	ctx.r10.s64 = ctx.r30.s64 + 158;
	// addi r7,r30,44
	ctx.r7.s64 = ctx.r30.s64 + 44;
	// li r8,32
	ctx.r8.s64 = 32;
	// li r11,0
	ctx.r11.s64 = 0;
	// lhzx r5,r31,r10
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// lwzx r7,r31,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// addi r4,r5,3
	ctx.r4.s64 = ctx.r5.s64 + 3;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// addi r8,r7,-4
	ctx.r8.s64 = ctx.r7.s64 + -4;
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// sthx r3,r31,r10
	REX_STORE_U16(ctx.r31.u32 + ctx.r10.u32, ctx.r3.u16);
	// addi r10,r3,128
	ctx.r10.s64 = ctx.r3.s64 + 128;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// rlwinm r7,r10,1,22,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x3FE;
	// lhzx r5,r7,r9
	ctx.r5.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r9.u32);
	// extsh r10,r5
	ctx.r10.s64 = ctx.r5.s16;
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r10,r7
	ctx.r4.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r3,r4,14,0,17
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 14) & 0xFFFFC000;
	// srawi r10,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 8;
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
loc_8A0A8728:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r3,r4,3,22,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0x3F8;
	// lhzx r7,r3,r9
	ctx.r7.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r9.u32);
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// mullw r4,r5,r10
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// srawi r7,r4,24
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFFFF) != 0);
	ctx.r7.s64 = ctx.r4.s32 >> 24;
	// stwu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x8a0a8728
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8A0A8728;
	// b 0x8a0a877c
	goto loc_8A0A877C;
loc_8A0A8750:
	// lis r11,-30160
	ctx.r11.s64 = -1976565760;
	// addi r7,r30,148
	ctx.r7.s64 = ctx.r30.s64 + 148;
	// li r8,0
	ctx.r8.s64 = 0;
	// lhz r5,29244(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 29244);
	// lhzx r11,r31,r7
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r7.u32);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x8a0a8778
	if (!ctx.cr6.lt) goto loc_8A0A8778;
	// lis r10,-30165
	ctx.r10.s64 = -1976893440;
	// addi r7,r10,10384
	ctx.r7.s64 = ctx.r10.s64 + 10384;
	// stbx r8,r11,r7
	REX_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r8.u8);
loc_8A0A8778:
	// stwx r8,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r8.u32);
loc_8A0A877C:
	// addi r29,r30,184
	ctx.r29.s64 = ctx.r30.s64 + 184;
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8a0a88bc
	if (ctx.cr6.eq) goto loc_8A0A88BC;
	// lwzx r5,r31,r6
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// lis r11,16838
	ctx.r11.s64 = 1103495168;
	// lis r6,-30137
	ctx.r6.s64 = -1975058432;
	// ori r11,r11,20077
	ctx.r11.u64 = ctx.r11.u64 | 20077;
	// addi r4,r30,162
	ctx.r4.s64 = ctx.r30.s64 + 162;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// lwz r11,-916(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + -916);
	// addi r8,r30,52
	ctx.r8.s64 = ctx.r30.s64 + 52;
	// mullw r11,r11,r28
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	// lhzx r4,r31,r4
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r4.u32);
	// lwzx r7,r31,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
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
	// stw r11,-916(r6)
	REX_STORE_U32(ctx.r6.u32 + -916, ctx.r11.u32);
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
	// bl 0x8a0bc7f0
	ctx.lr = 0x8A0A885C;
	sub_8A0BC7F0(ctx, base);
	// addi r5,r30,8
	ctx.r5.s64 = ctx.r30.s64 + 8;
	// addi r4,r30,24
	ctx.r4.s64 = ctx.r30.s64 + 24;
	// lbzx r9,r31,r29
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// lis r11,-30137
	ctx.r11.s64 = -1975058432;
	// addi r3,r30,76
	ctx.r3.s64 = ctx.r30.s64 + 76;
	// addi r7,r30,80
	ctx.r7.s64 = ctx.r30.s64 + 80;
	// addi r6,r30,72
	ctx.r6.s64 = ctx.r30.s64 + 72;
	// lwzx r8,r31,r4
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// addi r9,r9,255
	ctx.r9.s64 = ctx.r9.s64 + 255;
	// lwzx r5,r31,r5
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// lhz r4,-1220(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + -1220);
	// rlwinm r11,r5,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// subfic r10,r4,512
	ctx.xer.ca = ctx.r4.u32 <= 512;
	ctx.r10.u64 = static_cast<uint64_t>(512) - ctx.r4.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r4,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r4.u32);
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r3,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r3.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// mullw r5,r7,r10
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// stbx r9,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r9.u8);
	// rlwinm r4,r5,24,16,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFFFF;
	// sthx r4,r31,r6
	REX_STORE_U16(ctx.r31.u32 + ctx.r6.u32, ctx.r4.u16);
loc_8A0A88BC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8a0c2398
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8A0A9E98) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8a0c2340
	ctx.lr = 0x8A0A9EA0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30165
	ctx.r11.s64 = -1976893440;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r30,r11,13736
	ctx.r30.s64 = ctx.r11.s64 + 13736;
	// mulli r31,r10,208
	ctx.r31.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(208));
	// addi r9,r30,8
	ctx.r9.s64 = ctx.r30.s64 + 8;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x8a0aa31c
	if (ctx.cr6.gt) goto loc_8A0AA31C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8a0aa01c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8A0AA01C;
	// bdzf 4*cr6+eq,0x8a0aa24c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8A0AA24C;
	// bne cr6,0x8a0aa24c
	if (!ctx.cr6.eq) goto loc_8A0AA24C;
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
	// blt cr6,0x8a0a9f5c
	if (ctx.cr6.lt) goto loc_8A0A9F5C;
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
	// clrlwi r11,r3,28
	ctx.r11.u64 = ctx.r3.u32 & 0xF;
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
loc_8A0A9F5C:
	// addi r29,r30,188
	ctx.r29.s64 = ctx.r30.s64 + 188;
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8a0a9ffc
	if (ctx.cr6.lt) goto loc_8A0A9FFC;
	// beq cr6,0x8a0a9fd0
	if (ctx.cr6.eq) goto loc_8A0A9FD0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8a0aa31c
	if (!ctx.cr6.lt) goto loc_8A0AA31C;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x89ffe588
	ctx.lr = 0x8A0A9F8C;
	sub_89FFE588(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8a0aa31c
	if (ctx.cr6.eq) goto loc_8A0AA31C;
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
	// addi r10,r30,158
	ctx.r10.s64 = ctx.r30.s64 + 158;
	// addi r9,r30,52
	ctx.r9.s64 = ctx.r30.s64 + 52;
	// lis r8,-30186
	ctx.r8.s64 = -1978269696;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// lwzx r5,r31,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r8,r8,-25920
	ctx.r8.s64 = ctx.r8.s64 + -25920;
	// ori r7,r7,32768
	ctx.r7.u64 = ctx.r7.u64 | 32768;
	// lhzx r6,r31,r10
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// addis r4,r5,32
	ctx.r4.s64 = ctx.r5.s64 + 2097152;
	// lwzx r5,r31,r9
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8a0b04a0
	ctx.lr = 0x8A0A9FC8;
	sub_8A0B04A0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8a0c2390
	__restgprlr_26(ctx, base);
	return;
loc_8A0A9FD0:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,60
	ctx.r4.s64 = 60;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x89ffe588
	ctx.lr = 0x8A0A9FE0;
	sub_89FFE588(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8a0aa31c
	if (ctx.cr6.eq) goto loc_8A0AA31C;
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r10,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8a0c2390
	__restgprlr_26(ctx, base);
	return;
loc_8A0A9FFC:
	// addi r10,r30,196
	ctx.r10.s64 = ctx.r30.s64 + 196;
	// lbzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8a0aa31c
	if (ctx.cr6.eq) goto loc_8A0AA31C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8a0c2390
	__restgprlr_26(ctx, base);
	return;
loc_8A0AA01C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x89ffc2b8
	ctx.lr = 0x8A0AA024;
	sub_89FFC2B8(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8a0aa040
	if (!ctx.cr6.lt) goto loc_8A0AA040;
loc_8A0AA030:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8a0a9d48
	ctx.lr = 0x8A0AA038;
	sub_8A0A9D48(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8a0c2390
	__restgprlr_26(ctx, base);
	return;
loc_8A0AA040:
	// mulli r8,r11,208
	ctx.r8.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r7,r30,48
	ctx.r7.s64 = ctx.r30.s64 + 48;
	// addi r6,r30,56
	ctx.r6.s64 = ctx.r30.s64 + 56;
	// addi r5,r30,60
	ctx.r5.s64 = ctx.r30.s64 + 60;
	// addi r29,r30,48
	ctx.r29.s64 = ctx.r30.s64 + 48;
	// addi r4,r30,52
	ctx.r4.s64 = ctx.r30.s64 + 52;
	// lwzx r11,r8,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// addi r28,r30,188
	ctx.r28.s64 = ctx.r30.s64 + 188;
	// lwzx r10,r31,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// addi r3,r30,52
	ctx.r3.s64 = ctx.r30.s64 + 52;
	// lwzx r9,r31,r5
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r10,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u32);
	// lwzx r10,r8,r4
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// stwx r9,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r9.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x8a0aa1dc
	if (ctx.cr6.gt) goto loc_8A0AA1DC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8a0aa0e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8A0AA0E0;
	// bdzf 4*cr6+eq,0x8a0aa174
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8A0AA174;
	// bne cr6,0x8a0aa1a4
	if (!ctx.cr6.eq) goto loc_8A0AA1A4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8a013dc0
	ctx.lr = 0x8A0AA0AC;
	sub_8A013DC0(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8a013fd8
	ctx.lr = 0x8A0AA0B8;
	sub_8A013FD8(ctx, base);
	// lwzx r10,r31,r29
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// lis r11,352
	ctx.r11.s64 = 23068672;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8a0aa1dc
	if (!ctx.cr6.lt) goto loc_8A0AA1DC;
	// li r3,46
	ctx.r3.s64 = 46;
	// bl 0x8a017608
	ctx.lr = 0x8A0AA0D0;
	sub_8A017608(ctx, base);
	// lbzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r10,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r10.u8);
	// b 0x8a0aa1dc
	goto loc_8A0AA1DC;
loc_8A0AA0E0:
	// addi r29,r30,180
	ctx.r29.s64 = ctx.r30.s64 + 180;
	// li r27,0
	ctx.r27.s64 = 0;
	// stbx r27,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r27.u8);
loc_8A0AA0EC:
	// rlwinm r11,r27,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 7) & 0xFFFFFF80;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// bl 0x8a0b3aa8
	ctx.lr = 0x8A0AA118;
	sub_8A0B3AA8(ctx, base);
	// extsb r10,r3
	ctx.r10.s64 = ctx.r3.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8a0aa130
	if (ctx.cr6.eq) goto loc_8A0AA130;
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
loc_8A0AA130:
	// addi r11,r27,1
	ctx.r11.s64 = ctx.r27.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x8a0aa0ec
	if (ctx.cr6.lt) goto loc_8A0AA0EC;
	// lbzx r11,r31,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8a0aa1dc
	if (ctx.cr6.eq) goto loc_8A0AA1DC;
	// lbzx r10,r31,r28
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// rlwimi r9,r8,7,0,24
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0xFFFFFF80) | (ctx.r9.u64 & 0xFFFFFFFF0000007F);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stbx r7,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r7.u8);
	// stbx r9,r31,r29
	REX_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r9.u8);
	// b 0x8a0aa1dc
	goto loc_8A0AA1DC;
loc_8A0AA174:
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
	// blt cr6,0x8a0aa1dc
	if (ctx.cr6.lt) goto loc_8A0AA1DC;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stbx r9,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u8);
	// stbx r8,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r8.u8);
	// b 0x8a0aa1dc
	goto loc_8A0AA1DC;
loc_8A0AA1A4:
	// addi r10,r30,158
	ctx.r10.s64 = ctx.r30.s64 + 158;
	// lwzx r9,r31,r29
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// lis r8,64
	ctx.r8.s64 = 4194304;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// lhzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// sthx r6,r31,r10
	REX_STORE_U16(ctx.r31.u32 + ctx.r10.u32, ctx.r6.u16);
	// bgt cr6,0x8a0aa1dc
	if (ctx.cr6.gt) goto loc_8A0AA1DC;
	// addi r10,r30,180
	ctx.r10.s64 = ctx.r30.s64 + 180;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r31,r28
	REX_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r11.u8);
	// lbzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// clrlwi r7,r9,25
	ctx.r7.u64 = ctx.r9.u32 & 0x7F;
	// stbx r7,r31,r10
	REX_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r7.u8);
loc_8A0AA1DC:
	// addi r11,r30,158
	ctx.r11.s64 = ctx.r30.s64 + 158;
	// addi r8,r30,28
	ctx.r8.s64 = ctx.r30.s64 + 28;
	// addi r9,r30,12
	ctx.r9.s64 = ctx.r30.s64 + 12;
	// addi r7,r30,16
	ctx.r7.s64 = ctx.r30.s64 + 16;
	// addi r6,r30,20
	ctx.r6.s64 = ctx.r30.s64 + 20;
	// lhzx r5,r31,r11
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// addi r4,r30,36
	ctx.r4.s64 = ctx.r30.s64 + 36;
	// lwzx r10,r31,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// addi r11,r11,-64
	ctx.r11.s64 = ctx.r11.s64 + -64;
	// srawi r8,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 3;
	// clrlwi r11,r8,28
	ctx.r11.u64 = ctx.r8.u32 & 0xF;
	// stwx r11,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
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
	// stwx r8,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r7,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r7.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8a0c2390
	__restgprlr_26(ctx, base);
	return;
loc_8A0AA24C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x89ffc2b8
	ctx.lr = 0x8A0AA254;
	sub_89FFC2B8(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8a0aa030
	if (ctx.cr6.lt) goto loc_8A0AA030;
	// mulli r8,r11,208
	ctx.r8.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(208));
	// addi r7,r30,48
	ctx.r7.s64 = ctx.r30.s64 + 48;
	// addi r6,r30,56
	ctx.r6.s64 = ctx.r30.s64 + 56;
	// addi r11,r30,183
	ctx.r11.s64 = ctx.r30.s64 + 183;
	// addi r5,r30,60
	ctx.r5.s64 = ctx.r30.s64 + 60;
	// addi r4,r30,48
	ctx.r4.s64 = ctx.r30.s64 + 48;
	// lwzx r10,r8,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// addi r3,r30,52
	ctx.r3.s64 = ctx.r30.s64 + 52;
	// lwzx r9,r31,r6
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// addi r7,r30,52
	ctx.r7.s64 = ctx.r30.s64 + 52;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// addi r29,r9,1
	ctx.r29.s64 = ctx.r9.s64 + 1;
	// lwzx r9,r31,r5
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// stwx r6,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r6.u32);
	// lwzx r10,r8,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// clrlwi r5,r29,24
	ctx.r5.u64 = ctx.r29.u32 & 0xFF;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stbx r5,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r5.u8);
	// cmplwi cr6,r5,3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 3, ctx.xer);
	// stwx r4,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r4.u32);
	// blt cr6,0x8a0aa31c
	if (ctx.cr6.lt) goto loc_8A0AA31C;
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
	// lwzx r9,r31,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
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
	// stwx r8,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r7,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r7.u32);
loc_8A0AA31C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8a0c2390
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8A0AD7E8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8a0c2344
	ctx.lr = 0x8A0AD7F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30184
	ctx.r11.s64 = -1978138624;
	// lis r9,-30107
	ctx.r9.s64 = -1973092352;
	// addi r10,r11,1928
	ctx.r10.s64 = ctx.r11.s64 + 1928;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r9,-28928
	ctx.r29.s64 = ctx.r9.s64 + -28928;
	// lbz r11,1928(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1928);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8a0ad88c
	if (ctx.cr6.eq) goto loc_8A0AD88C;
	// addi r31,r10,-9
	ctx.r31.s64 = ctx.r10.s64 + -9;
loc_8A0AD818:
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
	// bl 0x8a015df0
	ctx.lr = 0x8A0AD870;
	sub_8A015DF0(ctx, base);
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
	// bne cr6,0x8a0ad818
	if (!ctx.cr6.eq) goto loc_8A0AD818;
loc_8A0AD88C:
	// lis r11,-30195
	ctx.r11.s64 = -1978859520;
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
	// bl 0x8a0168b8
	ctx.lr = 0x8A0AD8A8;
	sub_8A0168B8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8a0c2394
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8A0AEA60) {
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
	// lis r9,-30165
	ctx.r9.s64 = -1976893440;
	// lis r8,-30160
	ctx.r8.s64 = -1976565760;
	// lis r7,-30165
	ctx.r7.s64 = -1976893440;
	// lwz r11,7204(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 7204);
	// lhz r3,29208(r8)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r8.u32 + 29208);
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,7204(r9)
	REX_STORE_U32(ctx.r9.u32 + 7204, ctx.r11.u32);
	// sth r10,13208(r7)
	REX_STORE_U16(ctx.r7.u32 + 13208, ctx.r10.u16);
	// bl 0x8a015300
	ctx.lr = 0x8A0AEA94;
	sub_8A015300(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8a0aeaac
	if (!ctx.cr6.eq) goto loc_8A0AEAAC;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8A0AEAAC:
	// lis r11,-30197
	ctx.r11.s64 = -1978990592;
	// addi r3,r11,-5928
	ctx.r3.s64 = ctx.r11.s64 + -5928;
	// bl 0x89ff61a0
	ctx.lr = 0x8A0AEAB8;
	sub_89FF61A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8A0AEEE8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8a0c2334
	ctx.lr = 0x8A0AEEF0;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-30165
	ctx.r11.s64 = -1976893440;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lis r10,-30184
	ctx.r10.s64 = -1978138624;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r25,r10,2156
	ctx.r25.s64 = ctx.r10.s64 + 2156;
	// lhz r11,13208(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 13208);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// srawi r23,r9,7
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7F) != 0);
	ctx.r23.s64 = ctx.r9.s32 >> 7;
	// extsh r27,r23
	ctx.r27.s64 = ctx.r23.s16;
	// rlwinm r24,r27,1,0,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x89ffc148
	ctx.lr = 0x8A0AEF20;
	sub_89FFC148(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8a0aef30
	if (!ctx.cr6.eq) goto loc_8A0AEF30;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8a0c2384
	__restgprlr_23(ctx, base);
	return;
loc_8A0AEF30:
	// lis r10,-30137
	ctx.r10.s64 = -1975058432;
	// lis r11,-30165
	ctx.r11.s64 = -1976893440;
	// lis r9,-30160
	ctx.r9.s64 = -1976565760;
	// addi r30,r11,13736
	ctx.r30.s64 = ctx.r11.s64 + 13736;
	// lis r8,-16208
	ctx.r8.s64 = -1062207488;
	// lhz r29,3704(r10)
	ctx.r29.u64 = REX_LOAD_U16(ctx.r10.u32 + 3704);
	// addi r7,r30,4
	ctx.r7.s64 = ctx.r30.s64 + 4;
	// addi r5,r30,12
	ctx.r5.s64 = ctx.r30.s64 + 12;
	// extsh r6,r29
	ctx.r6.s64 = ctx.r29.s16;
	// lhz r4,29208(r9)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r9.u32 + 29208);
	// addi r28,r30,8
	ctx.r28.s64 = ctx.r30.s64 + 8;
	// mulli r31,r6,208
	ctx.r31.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(208));
	// stwx r4,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r4.u32);
	// ori r3,r8,260
	ctx.r3.u64 = ctx.r8.u64 | 260;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,16
	ctx.r10.s64 = 16;
	// stwx r3,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r3.u32);
	// stwx r11,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stwx r10,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r10.u32);
	// bl 0x89ffbe00
	ctx.lr = 0x8A0AEF84;
	sub_89FFBE00(ctx, base);
	// addi r9,r30,24
	ctx.r9.s64 = ctx.r30.s64 + 24;
	// lwzx r10,r31,r28
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// addi r8,r30,76
	ctx.r8.s64 = ctx.r30.s64 + 76;
	// lis r7,-30137
	ctx.r7.s64 = -1975058432;
	// addi r6,r30,80
	ctx.r6.s64 = ctx.r30.s64 + 80;
	// addi r5,r30,72
	ctx.r5.s64 = ctx.r30.s64 + 72;
	// lwzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplwi cr6,r27,3
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 3, ctx.xer);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lhz r4,-1220(r7)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r7.u32 + -1220);
	// subfic r3,r4,512
	ctx.xer.ca = ctx.r4.u32 <= 512;
	ctx.r3.u64 = static_cast<uint64_t>(512) - ctx.r4.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r9,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r9.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r8,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r8.u32);
	// lwz r7,12(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// extsh r4,r7
	ctx.r4.s64 = ctx.r7.s16;
	// mullw r3,r4,r3
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// rlwinm r11,r3,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFFFF;
	// sthx r11,r31,r5
	REX_STORE_U16(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u16);
	// bgt cr6,0x8a0af034
	if (ctx.cr6.gt) goto loc_8A0AF034;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8a0af010
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8A0AF010;
	// bdzf 4*cr6+eq,0x8a0aeff0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8A0AEFF0;
	// bne cr6,0x8a0af010
	if (!ctx.cr6.eq) goto loc_8A0AF010;
loc_8A0AEFF0:
	// lhzx r11,r24,r25
	ctx.r11.u64 = REX_LOAD_U16(ctx.r24.u32 + ctx.r25.u32);
	// addi r10,r30,48
	ctx.r10.s64 = ctx.r30.s64 + 48;
	// addi r9,r30,52
	ctx.r9.s64 = ctx.r30.s64 + 52;
	// rotlwi r8,r11,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// rlwinm r7,r26,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 16) & 0xFFFF0000;
	// stwx r8,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u32);
	// stwx r7,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r7.u32);
	// b 0x8a0af034
	goto loc_8A0AF034;
loc_8A0AF010:
	// extsh r11,r26
	ctx.r11.s64 = ctx.r26.s16;
	// lhzx r10,r24,r25
	ctx.r10.u64 = REX_LOAD_U16(ctx.r24.u32 + ctx.r25.u32);
	// addi r9,r30,48
	ctx.r9.s64 = ctx.r30.s64 + 48;
	// addi r8,r11,-352
	ctx.r8.s64 = ctx.r11.s64 + -352;
	// addi r7,r30,52
	ctx.r7.s64 = ctx.r30.s64 + 52;
	// rlwinm r6,r8,16,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000;
	// rotlwi r5,r10,16
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// stwx r6,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r6.u32);
	// stwx r5,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r5.u32);
loc_8A0AF034:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8a013ce0
	ctx.lr = 0x8A0AF03C;
	sub_8A013CE0(ctx, base);
	// lis r9,-30160
	ctx.r9.s64 = -1976565760;
	// addi r10,r30,186
	ctx.r10.s64 = ctx.r30.s64 + 186;
	// addi r11,r9,27472
	ctx.r11.s64 = ctx.r9.s64 + 27472;
	// addi r8,r30,52
	ctx.r8.s64 = ctx.r30.s64 + 52;
	// addi r6,r11,24
	ctx.r6.s64 = ctx.r11.s64 + 24;
	// addi r5,r11,28
	ctx.r5.s64 = ctx.r11.s64 + 28;
	// addi r7,r30,48
	ctx.r7.s64 = ctx.r30.s64 + 48;
	// lwzx r4,r31,r8
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// lwzx r3,r31,r7
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// lbzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// mulli r10,r11,696
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(696));
	// lwzx r9,r10,r6
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// lwzx r6,r10,r5
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// addis r5,r9,8
	ctx.r5.s64 = ctx.r9.s64 + 524288;
	// bl 0x8a013ec8
	ctx.lr = 0x8A0AF078;
	sub_8A013EC8(ctx, base);
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// lis r7,-30210
	ctx.r7.s64 = -1979842560;
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
	// lis r11,-30165
	ctx.r11.s64 = -1976893440;
	// addi r7,r30,158
	ctx.r7.s64 = ctx.r30.s64 + 158;
	// lhzx r3,r3,r6
	ctx.r3.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r6.u32);
	// addi r28,r30,56
	ctx.r28.s64 = ctx.r30.s64 + 56;
	// addi r5,r30,192
	ctx.r5.s64 = ctx.r30.s64 + 192;
	// lhzx r4,r4,r6
	ctx.r4.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r6.u32);
	// addi r29,r30,168
	ctx.r29.s64 = ctx.r30.s64 + 168;
	// lbz r9,10463(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 10463);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// sthx r8,r31,r7
	REX_STORE_U16(ctx.r31.u32 + ctx.r7.u32, ctx.r8.u16);
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stbx r23,r31,r5
	REX_STORE_U8(ctx.r31.u32 + ctx.r5.u32, ctx.r23.u8);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r6,r8,13,0,18
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 13) & 0xFFFFE000;
	// rlwinm r7,r10,13,0,18
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0xFFFFE000;
	// srawi r10,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 8;
	// addi r4,r30,60
	ctx.r4.s64 = ctx.r30.s64 + 60;
	// addi r3,r30,204
	ctx.r3.s64 = ctx.r30.s64 + 204;
	// stwx r10,r31,r28
	REX_STORE_U32(ctx.r31.u32 + ctx.r28.u32, ctx.r10.u32);
	// addi r11,r30,200
	ctx.r11.s64 = ctx.r30.s64 + 200;
	// li r6,116
	ctx.r6.s64 = 116;
	// lis r10,6
	ctx.r10.s64 = 393216;
	// srawi r7,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 8;
	// stbx r6,r31,r3
	REX_STORE_U8(ctx.r31.u32 + ctx.r3.u32, ctx.r6.u8);
	// cmplwi cr6,r9,5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 5, ctx.xer);
	// stwx r10,r31,r29
	REX_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r10.u32);
	// stwx r7,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r7.u32);
	// stbx r6,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r6.u8);
	// bne cr6,0x8a0af134
	if (!ctx.cr6.eq) goto loc_8A0AF134;
	// lis r11,-30097
	ctx.r11.s64 = -1972436992;
	// lwz r11,248(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 248);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8a0af134
	if (ctx.cr6.eq) goto loc_8A0AF134;
	// lis r10,-30097
	ctx.r10.s64 = -1972436992;
	// lwz r11,252(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 252);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,252(r10)
	REX_STORE_U32(ctx.r10.u32 + 252, ctx.r11.u32);
loc_8A0AF134:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8a0c2384
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8A0B00E0) {
	REX_FUNC_PROLOGUE();
	// lwz r7,8(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r7,16
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 16, ctx.xer);
	// blt cr6,0x8a0b0164
	if (ctx.cr6.lt) goto loc_8A0B0164;
	// cmplwi cr6,r7,19
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 19, ctx.xer);
	// bgt cr6,0x8a0b0164
	if (ctx.cr6.gt) goto loc_8A0B0164;
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
	// lwz r7,28(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// rlwinm r6,r8,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// lwzx r10,r6,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r4,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r7,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r7.u32);
	// stw r9,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r9.u32);
	// blr 
	return;
loc_8A0B0164:
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
	// blt cr6,0x8a0b0200
	if (ctx.cr6.lt) goto loc_8A0B0200;
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
loc_8A0B0200:
	// addis r11,r11,-160
	ctx.r11.s64 = ctx.r11.s64 + -10485760;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x8a0b0210
	if (!ctx.cr0.lt) goto loc_8A0B0210;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_8A0B0210:
	// lis r10,168
	ctx.r10.s64 = 11010048;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8a0b0244
	if (ctx.cr6.gt) goto loc_8A0B0244;
	// lis r11,-30126
	ctx.r11.s64 = -1974337536;
	// lwz r11,-13288(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -13288);
	// subf r10,r11,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r11.u64;
	// addis r11,r10,-120
	ctx.r11.s64 = ctx.r10.s64 + -7864320;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x8a0b0238
	if (!ctx.cr0.lt) goto loc_8A0B0238;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_8A0B0238:
	// lis r10,128
	ctx.r10.s64 = 8388608;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_8A0B0244:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8A0B1930) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8a0c2344
	ctx.lr = 0x8A0B1938;
	__savegprlr_27(ctx, base);
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
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x8a0bc188
	ctx.lr = 0x8A0B1958;
	sub_8A0BC188(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8a0b196c
	if (!ctx.cr6.eq) goto loc_8A0B196C;
loc_8A0B1960:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8a0c2394
	__restgprlr_27(ctx, base);
	return;
loc_8A0B196C:
	// lis r10,-30160
	ctx.r10.s64 = -1976565760;
	// li r5,3
	ctx.r5.s64 = 3;
	// lhz r11,10760(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 10760);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8a0b1988
	if (!ctx.cr6.lt) goto loc_8A0B1988;
	// li r11,3
	ctx.r11.s64 = 3;
	// sth r11,10760(r10)
	REX_STORE_U16(ctx.r10.u32 + 10760, ctx.r11.u16);
loc_8A0B1988:
	// lis r6,-30160
	ctx.r6.s64 = -1976565760;
	// clrlwi r7,r11,16
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFF;
	// lis r10,-30137
	ctx.r10.s64 = -1975058432;
	// lis r9,-30131
	ctx.r9.s64 = -1974665216;
	// addi r8,r10,-392
	ctx.r8.s64 = ctx.r10.s64 + -392;
	// lhz r11,8372(r6)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r6.u32 + 8372);
	// addi r9,r9,27664
	ctx.r9.s64 = ctx.r9.s64 + 27664;
	// mulli r10,r11,140
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(140));
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x8a0b1960
	if (!ctx.cr6.lt) goto loc_8A0B1960;
	// addi r9,r8,-4
	ctx.r9.s64 = ctx.r8.s64 + -4;
loc_8A0B19B8:
	// lwz r4,0(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8a0b19d0
	if (!ctx.cr6.eq) goto loc_8A0B19D0;
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// beq 0x8a0b19ec
	if (ctx.cr0.eq) goto loc_8A0B19EC;
loc_8A0B19D0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,140
	ctx.r10.s64 = ctx.r10.s64 + 140;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8a0b19b8
	if (ctx.cr6.lt) goto loc_8A0B19B8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8a0c2394
	__restgprlr_27(ctx, base);
	return;
loc_8A0B19EC:
	// lis r9,-30126
	ctx.r9.s64 = -1974337536;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r31,8
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 8, ctx.xer);
	// sth r7,8372(r6)
	REX_STORE_U16(ctx.r6.u32 + 8372, ctx.r7.u16);
	// lhz r11,-13100(r9)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + -13100);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// sth r6,-13100(r9)
	REX_STORE_U16(ctx.r9.u32 + -13100, ctx.r6.u16);
	// blt cr6,0x8a0b1a34
	if (ctx.cr6.lt) goto loc_8A0B1A34;
	// lis r10,-30137
	ctx.r10.s64 = -1975058432;
	// lis r9,16838
	ctx.r9.s64 = 1103495168;
	// ori r7,r9,20077
	ctx.r7.u64 = ctx.r9.u64 | 20077;
	// lwz r11,-916(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -916);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r11,-916(r10)
	REX_STORE_U32(ctx.r10.u32 + -916, ctx.r11.u32);
	// srawi r5,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 16;
	// rlwinm r31,r5,20,29,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 20) & 0x7;
loc_8A0B1A34:
	// lis r11,-30137
	ctx.r11.s64 = -1975058432;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// addi r9,r11,16200
	ctx.r9.s64 = ctx.r11.s64 + 16200;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8a0b1660
	ctx.lr = 0x8A0B1A54;
	sub_8A0B1660(ctx, base);
	// li r3,66
	ctx.r3.s64 = 66;
	// bl 0x8a017608
	ctx.lr = 0x8A0B1A5C;
	sub_8A017608(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8a0c2394
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8A0B2578) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8a0c2330
	ctx.lr = 0x8A0B2580;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// bl 0x89ffa240
	ctx.lr = 0x8A0B25A4;
	sub_89FFA240(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8a0b2798
	if (ctx.cr6.eq) goto loc_8A0B2798;
	// extsh r3,r26
	ctx.r3.s64 = ctx.r26.s16;
	// bl 0x8a015390
	ctx.lr = 0x8A0B25B8;
	sub_8A015390(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8a0b2798
	if (ctx.cr6.eq) goto loc_8A0B2798;
	// extsh r22,r31
	ctx.r22.s64 = ctx.r31.s16;
	// addi r29,r22,1
	ctx.r29.s64 = ctx.r22.s64 + 1;
	// cmpwi cr6,r29,2048
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2048, ctx.xer);
	// bgt cr6,0x8a0b2798
	if (ctx.cr6.gt) goto loc_8A0B2798;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x89ffaab8
	ctx.lr = 0x8A0B25D8;
	sub_89FFAAB8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8a0b2798
	if (ctx.cr6.eq) goto loc_8A0B2798;
	// lis r10,-30137
	ctx.r10.s64 = -1975058432;
	// extsh r31,r23
	ctx.r31.s64 = ctx.r23.s16;
	// lis r9,-16240
	ctx.r9.s64 = -1064304640;
	// addi r8,r31,4
	ctx.r8.s64 = ctx.r31.s64 + 4;
	// ori r6,r9,8192
	ctx.r6.u64 = ctx.r9.u64 | 8192;
	// lwz r11,-392(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -392);
	// srawi r7,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	// li r27,0
	ctx.r27.s64 = 0;
	// clrlwi r5,r7,26
	ctx.r5.u64 = ctx.r7.u32 & 0x3F;
	// addi r10,r10,-392
	ctx.r10.s64 = ctx.r10.s64 + -392;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// addi r28,r10,4
	ctx.r28.s64 = ctx.r10.s64 + 4;
	// stw r26,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// stw r27,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r27.u32);
	// sth r23,116(r11)
	REX_STORE_U16(ctx.r11.u32 + 116, ctx.r23.u16);
	// stw r5,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r5.u32);
	// bl 0x89ffae88
	ctx.lr = 0x8A0B2628;
	sub_89FFAE88(ctx, base);
	// addi r4,r31,128
	ctx.r4.s64 = ctx.r31.s64 + 128;
	// lis r11,-30210
	ctx.r11.s64 = -1979842560;
	// stw r25,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r25.u32);
	// rlwinm r10,r4,1,22,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x3FE;
	// stw r24,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r24.u32);
	// addi r9,r11,9016
	ctx.r9.s64 = ctx.r11.s64 + 9016;
	// stw r30,120(r3)
	REX_STORE_U32(ctx.r3.u32 + 120, ctx.r30.u32);
	// srawi r11,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 4;
	// rlwinm r8,r23,1,22,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0x3FE;
	// li r7,1
	ctx.r7.s64 = 1;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// lhzx r6,r10,r9
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// mullw r4,r5,r11
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// srawi r10,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 8;
	// stw r10,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r10.u32);
	// lhzx r9,r8,r9
	ctx.r9.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r9.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// mullw r6,r8,r11
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// stb r27,139(r3)
	REX_STORE_U8(ctx.r3.u32 + 139, ctx.r27.u8);
	// stb r7,138(r3)
	REX_STORE_U8(ctx.r3.u32 + 138, ctx.r7.u8);
	// stw r3,128(r3)
	REX_STORE_U32(ctx.r3.u32 + 128, ctx.r3.u32);
	// stw r29,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r29.u32);
	// srawi r5,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 8;
	// stw r5,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r5.u32);
	// ble cr6,0x8a0b2774
	if (!ctx.cr6.gt) goto loc_8A0B2774;
	// addi r29,r28,-4
	ctx.r29.s64 = ctx.r28.s64 + -4;
	// addi r26,r22,-1
	ctx.r26.s64 = ctx.r22.s64 + -1;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// li r25,8
	ctx.r25.s64 = 8;
	// li r28,4
	ctx.r28.s64 = 4;
loc_8A0B26A4:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwzu r3,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// subf r11,r30,r26
	ctx.r11.u64 = ctx.r26.u64 - ctx.r30.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r31,124(r3)
	REX_STORE_U32(ctx.r3.u32 + 124, ctx.r31.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// blt cr6,0x8a0b26e0
	if (ctx.cr6.lt) goto loc_8A0B26E0;
	// bne cr6,0x8a0b26e4
	if (!ctx.cr6.eq) goto loc_8A0B26E4;
	// stw r25,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r25.u32);
	// b 0x8a0b26e4
	goto loc_8A0B26E4;
loc_8A0B26E0:
	// stw r28,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r28.u32);
loc_8A0B26E4:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// bl 0x89ffae88
	ctx.lr = 0x8A0B26F0;
	sub_89FFAE88(ctx, base);
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r10,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r10.u32);
	// lwz r9,56(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// stw r9,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r9.u32);
loc_8A0B2704:
	// addi r10,r11,42
	ctx.r10.s64 = ctx.r11.s64 + 42;
	// lhz r9,52(r31)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 52);
	// addi r8,r11,46
	ctx.r8.s64 = ctx.r11.s64 + 46;
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r11,50
	ctx.r6.s64 = ctx.r11.s64 + 50;
	// rlwinm r4,r8,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r9,r7,r3
	REX_STORE_U16(ctx.r7.u32 + ctx.r3.u32, ctx.r9.u16);
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// lhz r7,56(r31)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + 56);
	// sthx r7,r4,r3
	REX_STORE_U16(ctx.r4.u32 + ctx.r3.u32, ctx.r7.u16);
	// lhz r6,116(r31)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + 116);
	// sthx r6,r10,r3
	REX_STORE_U16(ctx.r10.u32 + ctx.r3.u32, ctx.r6.u16);
	// blt cr6,0x8a0b2704
	if (ctx.cr6.lt) goto loc_8A0B2704;
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// sth r23,116(r3)
	REX_STORE_U16(ctx.r3.u32 + 116, ctx.r23.u16);
	// lwz r10,120(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 120);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// stw r10,120(r3)
	REX_STORE_U32(ctx.r3.u32 + 120, ctx.r10.u32);
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// stb r27,139(r3)
	REX_STORE_U8(ctx.r3.u32 + 139, ctx.r27.u8);
	// stw r11,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// cmpw cr6,r9,r22
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r22.s32, ctx.xer);
	// stb r27,138(r3)
	REX_STORE_U8(ctx.r3.u32 + 138, ctx.r27.u8);
	// blt cr6,0x8a0b26a4
	if (ctx.cr6.lt) goto loc_8A0B26A4;
loc_8A0B2774:
	// lis r11,-30137
	ctx.r11.s64 = -1975058432;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,16200(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 16200);
	// bl 0x8a0bab00
	ctx.lr = 0x8A0B2784;
	sub_8A0BAB00(ctx, base);
	// li r3,69
	ctx.r3.s64 = 69;
	// bl 0x8a017608
	ctx.lr = 0x8A0B278C;
	sub_8A017608(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8a0c2380
	__restgprlr_22(ctx, base);
	return;
loc_8A0B2798:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8a0c2380
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8A0B4448) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8a0c2328
	ctx.lr = 0x8A0B4450;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// bl 0x89ffa240
	ctx.lr = 0x8A0B4470;
	sub_89FFA240(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8a0b4634
	if (ctx.cr6.eq) goto loc_8A0B4634;
	// extsh r3,r25
	ctx.r3.s64 = ctx.r25.s16;
	// rlwinm r27,r31,0,23,24
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x180;
	// bl 0x8a015390
	ctx.lr = 0x8A0B4488;
	sub_8A015390(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8a0b4634
	if (ctx.cr6.eq) goto loc_8A0B4634;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x89ffaab8
	ctx.lr = 0x8A0B4498;
	sub_89FFAAB8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8a0b4634
	if (ctx.cr6.eq) goto loc_8A0B4634;
	// rlwinm r8,r27,0,23,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x180;
	// lis r9,-30137
	ctx.r9.s64 = -1975058432;
	// srawi r11,r8,7
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7F) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 7;
	// lis r7,-30184
	ctx.r7.s64 = -1978138624;
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// extsh r6,r24
	ctx.r6.s64 = ctx.r24.s16;
	// lis r4,-30165
	ctx.r4.s64 = -1976893440;
	// lwz r31,-392(r9)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r9.u32 + -392);
	// addi r28,r7,2376
	ctx.r28.s64 = ctx.r7.s64 + 2376;
	// rlwinm r20,r5,3,0,28
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r4,13736
	ctx.r11.s64 = ctx.r4.s64 + 13736;
	// mulli r10,r6,208
	ctx.r10.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(208));
	// lwzx r29,r20,r28
	ctx.r29.u64 = REX_LOAD_U32(ctx.r20.u32 + ctx.r28.u32);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r11,r3,8192
	ctx.r11.u64 = ctx.r3.u64 | 8192;
	// stw r30,124(r31)
	REX_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// addi r10,r9,-392
	ctx.r10.s64 = ctx.r9.s64 + -392;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r9,154(r30)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r30.u32 + 154);
	// stw r25,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r25.u32);
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// sth r9,136(r31)
	REX_STORE_U16(ctx.r31.u32 + 136, ctx.r9.u16);
	// lbz r8,0(r29)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r29.u32 + 0);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// sth r26,118(r31)
	REX_STORE_U16(ctx.r31.u32 + 118, ctx.r26.u16);
	// stw r26,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
	// stw r7,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// sth r27,116(r31)
	REX_STORE_U16(ctx.r31.u32 + 116, ctx.r27.u16);
	// bl 0x89ffae88
	ctx.lr = 0x8A0B4520;
	sub_89FFAE88(ctx, base);
	// rlwinm r11,r23,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r10,r22,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 16) & 0xFFFF0000;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r11,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r10,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// addi r5,r28,4
	ctx.r5.s64 = ctx.r28.s64 + 4;
	// stw r6,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r6.u32);
	// li r3,192
	ctx.r3.s64 = 192;
	// lwz r7,48(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// add r4,r7,r11
	ctx.r4.u64 = ctx.r7.u64 + ctx.r11.u64;
	// stw r4,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r4.u32);
	// li r21,512
	ctx.r21.s64 = 512;
	// lwz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r10,128
	ctx.r10.s64 = 128;
	// stb r3,70(r31)
	REX_STORE_U8(ctx.r31.u32 + 70, ctx.r3.u8);
	// stw r11,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// lis r9,-30137
	ctx.r9.s64 = -1975058432;
	// stb r10,71(r31)
	REX_STORE_U8(ctx.r31.u32 + 71, ctx.r10.u8);
	// addi r8,r28,6
	ctx.r8.s64 = ctx.r28.s64 + 6;
	// stb r26,139(r31)
	REX_STORE_U8(ctx.r31.u32 + 139, ctx.r26.u8);
	// sth r21,68(r31)
	REX_STORE_U16(ctx.r31.u32 + 68, ctx.r21.u16);
	// lhzx r3,r20,r5
	ctx.r3.u64 = REX_LOAD_U16(ctx.r20.u32 + ctx.r5.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,16200(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 16200);
	// li r9,0
	ctx.r9.s64 = 0;
	// lhzx r10,r20,r8
	ctx.r10.u64 = REX_LOAD_U16(ctx.r20.u32 + ctx.r8.u32);
	// subf r11,r22,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r22.u64;
	// subf r10,r23,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r23.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// bl 0x8a0b6e50
	ctx.lr = 0x8A0B45A8;
	sub_8A0B6E50(ctx, base);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_8A0B45AC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwzu r3,4(r25)
	ea = 4 + ctx.r25.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	ctx.r25.u32 = ea;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lbzu r11,2(r29)
	ea = 2 + ctx.r29.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r29.u32 = ea;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// sth r27,116(r3)
	REX_STORE_U16(ctx.r3.u32 + 116, ctx.r27.u16);
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// lwz r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// stw r8,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// bl 0x89ffae88
	ctx.lr = 0x8A0B45DC;
	sub_89FFAE88(ctx, base);
	// stw r31,124(r3)
	REX_STORE_U32(ctx.r3.u32 + 124, ctx.r31.u32);
	// lhz r4,134(r31)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 134);
	// extsh r11,r30
	ctx.r11.s64 = ctx.r30.s16;
	// sth r4,134(r3)
	REX_STORE_U16(ctx.r3.u32 + 134, ctx.r4.u16);
	// addi r7,r3,84
	ctx.r7.s64 = ctx.r3.s64 + 84;
	// sth r21,52(r3)
	REX_STORE_U16(ctx.r3.u32 + 52, ctx.r21.u16);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// stw r11,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// extsh r30,r6
	ctx.r30.s64 = ctx.r6.s16;
	// lwz r10,68(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// clrlwi r5,r30,16
	ctx.r5.u64 = ctx.r30.u32 & 0xFFFF;
	// stw r10,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r10.u32);
	// lbz r9,1(r29)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r29.u32 + 1);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// cmplwi cr6,r5,27
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 27, ctx.xer);
	// stw r7,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r7.u32);
	// stw r8,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r8.u32);
	// blt cr6,0x8a0b45ac
	if (ctx.cr6.lt) goto loc_8A0B45AC;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8a0c2378
	__restgprlr_20(ctx, base);
	return;
loc_8A0B4634:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8a0c2378
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8A0B5C80) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8a0c2328
	ctx.lr = 0x8A0B5C88;
	__savegprlr_20(ctx, base);
	// stwu r1,-1040(r1)
	ea = -1040 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,64
	ctx.r10.s64 = 64;
	// li r4,192
	ctx.r4.s64 = 192;
	// stb r11,96(r1)
	REX_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// li r7,32
	ctx.r7.s64 = 32;
	// stb r11,97(r1)
	REX_STORE_U8(ctx.r1.u32 + 97, ctx.r11.u8);
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r10,98(r1)
	REX_STORE_U8(ctx.r1.u32 + 98, ctx.r10.u8);
	// li r31,4
	ctx.r31.s64 = 4;
	// stb r7,99(r1)
	REX_STORE_U8(ctx.r1.u32 + 99, ctx.r7.u8);
	// li r29,24
	ctx.r29.s64 = 24;
	// stb r4,100(r1)
	REX_STORE_U8(ctx.r1.u32 + 100, ctx.r4.u8);
	// li r8,2
	ctx.r8.s64 = 2;
	// stb r30,101(r1)
	REX_STORE_U8(ctx.r1.u32 + 101, ctx.r30.u8);
	// li r27,128
	ctx.r27.s64 = 128;
	// stb r11,102(r1)
	REX_STORE_U8(ctx.r1.u32 + 102, ctx.r11.u8);
	// li r6,48
	ctx.r6.s64 = 48;
	// stb r11,103(r1)
	REX_STORE_U8(ctx.r1.u32 + 103, ctx.r11.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// stb r31,104(r1)
	REX_STORE_U8(ctx.r1.u32 + 104, ctx.r31.u8);
	// li r26,5
	ctx.r26.s64 = 5;
	// stb r10,105(r1)
	REX_STORE_U8(ctx.r1.u32 + 105, ctx.r10.u8);
	// li r28,184
	ctx.r28.s64 = 184;
	// stb r29,106(r1)
	REX_STORE_U8(ctx.r1.u32 + 106, ctx.r29.u8);
	// li r25,160
	ctx.r25.s64 = 160;
	// stb r4,107(r1)
	REX_STORE_U8(ctx.r1.u32 + 107, ctx.r4.u8);
	// li r3,40
	ctx.r3.s64 = 40;
	// stb r7,108(r1)
	REX_STORE_U8(ctx.r1.u32 + 108, ctx.r7.u8);
	// li r24,200
	ctx.r24.s64 = 200;
	// stb r31,109(r1)
	REX_STORE_U8(ctx.r1.u32 + 109, ctx.r31.u8);
	// stb r11,110(r1)
	REX_STORE_U8(ctx.r1.u32 + 110, ctx.r11.u8);
	// li r9,3
	ctx.r9.s64 = 3;
	// stb r11,111(r1)
	REX_STORE_U8(ctx.r1.u32 + 111, ctx.r11.u8);
	// stb r10,112(r1)
	REX_STORE_U8(ctx.r1.u32 + 112, ctx.r10.u8);
	// stb r7,113(r1)
	REX_STORE_U8(ctx.r1.u32 + 113, ctx.r7.u8);
	// stb r4,114(r1)
	REX_STORE_U8(ctx.r1.u32 + 114, ctx.r4.u8);
	// stb r27,115(r1)
	REX_STORE_U8(ctx.r1.u32 + 115, ctx.r27.u8);
	// stb r11,116(r1)
	REX_STORE_U8(ctx.r1.u32 + 116, ctx.r11.u8);
	// stb r11,117(r1)
	REX_STORE_U8(ctx.r1.u32 + 117, ctx.r11.u8);
	// stb r11,118(r1)
	REX_STORE_U8(ctx.r1.u32 + 118, ctx.r11.u8);
	// stb r10,119(r1)
	REX_STORE_U8(ctx.r1.u32 + 119, ctx.r10.u8);
	// stb r29,120(r1)
	REX_STORE_U8(ctx.r1.u32 + 120, ctx.r29.u8);
	// stb r4,121(r1)
	REX_STORE_U8(ctx.r1.u32 + 121, ctx.r4.u8);
	// stb r25,122(r1)
	REX_STORE_U8(ctx.r1.u32 + 122, ctx.r25.u8);
	// stb r11,123(r1)
	REX_STORE_U8(ctx.r1.u32 + 123, ctx.r11.u8);
	// stb r11,124(r1)
	REX_STORE_U8(ctx.r1.u32 + 124, ctx.r11.u8);
	// stb r8,125(r1)
	REX_STORE_U8(ctx.r1.u32 + 125, ctx.r8.u8);
	// stb r10,126(r1)
	REX_STORE_U8(ctx.r1.u32 + 126, ctx.r10.u8);
	// stb r7,127(r1)
	REX_STORE_U8(ctx.r1.u32 + 127, ctx.r7.u8);
	// stb r4,128(r1)
	REX_STORE_U8(ctx.r1.u32 + 128, ctx.r4.u8);
	// stb r28,129(r1)
	REX_STORE_U8(ctx.r1.u32 + 129, ctx.r28.u8);
	// stb r8,130(r1)
	REX_STORE_U8(ctx.r1.u32 + 130, ctx.r8.u8);
	// stb r11,131(r1)
	REX_STORE_U8(ctx.r1.u32 + 131, ctx.r11.u8);
	// stb r5,132(r1)
	REX_STORE_U8(ctx.r1.u32 + 132, ctx.r5.u8);
	// stb r10,133(r1)
	REX_STORE_U8(ctx.r1.u32 + 133, ctx.r10.u8);
	// stb r7,134(r1)
	REX_STORE_U8(ctx.r1.u32 + 134, ctx.r7.u8);
	// stb r27,135(r1)
	REX_STORE_U8(ctx.r1.u32 + 135, ctx.r27.u8);
	// stb r30,136(r1)
	REX_STORE_U8(ctx.r1.u32 + 136, ctx.r30.u8);
	// stb r5,137(r1)
	REX_STORE_U8(ctx.r1.u32 + 137, ctx.r5.u8);
	// stb r11,138(r1)
	REX_STORE_U8(ctx.r1.u32 + 138, ctx.r11.u8);
	// stb r26,139(r1)
	REX_STORE_U8(ctx.r1.u32 + 139, ctx.r26.u8);
	// stb r10,140(r1)
	REX_STORE_U8(ctx.r1.u32 + 140, ctx.r10.u8);
	// stb r3,141(r1)
	REX_STORE_U8(ctx.r1.u32 + 141, ctx.r3.u8);
	// stb r10,142(r1)
	REX_STORE_U8(ctx.r1.u32 + 142, ctx.r10.u8);
	// stb r30,143(r1)
	REX_STORE_U8(ctx.r1.u32 + 143, ctx.r30.u8);
	// stb r26,144(r1)
	REX_STORE_U8(ctx.r1.u32 + 144, ctx.r26.u8);
	// stb r11,145(r1)
	REX_STORE_U8(ctx.r1.u32 + 145, ctx.r11.u8);
	// stb r11,146(r1)
	REX_STORE_U8(ctx.r1.u32 + 146, ctx.r11.u8);
	// stb r10,147(r1)
	REX_STORE_U8(ctx.r1.u32 + 147, ctx.r10.u8);
	// stb r6,148(r1)
	REX_STORE_U8(ctx.r1.u32 + 148, ctx.r6.u8);
	// stb r10,149(r1)
	REX_STORE_U8(ctx.r1.u32 + 149, ctx.r10.u8);
	// stb r24,150(r1)
	REX_STORE_U8(ctx.r1.u32 + 150, ctx.r24.u8);
	// stb r11,151(r1)
	REX_STORE_U8(ctx.r1.u32 + 151, ctx.r11.u8);
	// stb r11,152(r1)
	REX_STORE_U8(ctx.r1.u32 + 152, ctx.r11.u8);
	// stb r11,153(r1)
	REX_STORE_U8(ctx.r1.u32 + 153, ctx.r11.u8);
	// stb r10,154(r1)
	REX_STORE_U8(ctx.r1.u32 + 154, ctx.r10.u8);
	// stb r6,155(r1)
	REX_STORE_U8(ctx.r1.u32 + 155, ctx.r6.u8);
	// stb r30,156(r1)
	REX_STORE_U8(ctx.r1.u32 + 156, ctx.r30.u8);
	// stb r30,157(r1)
	REX_STORE_U8(ctx.r1.u32 + 157, ctx.r30.u8);
	// stb r11,158(r1)
	REX_STORE_U8(ctx.r1.u32 + 158, ctx.r11.u8);
	// stb r11,159(r1)
	REX_STORE_U8(ctx.r1.u32 + 159, ctx.r11.u8);
	// stb r8,173(r1)
	REX_STORE_U8(ctx.r1.u32 + 173, ctx.r8.u8);
	// li r5,56
	ctx.r5.s64 = 56;
	// stb r8,180(r1)
	REX_STORE_U8(ctx.r1.u32 + 180, ctx.r8.u8);
	// li r27,88
	ctx.r27.s64 = 88;
	// stb r8,187(r1)
	REX_STORE_U8(ctx.r1.u32 + 187, ctx.r8.u8);
	// li r25,8
	ctx.r25.s64 = 8;
	// stb r8,194(r1)
	REX_STORE_U8(ctx.r1.u32 + 194, ctx.r8.u8);
	// li r24,136
	ctx.r24.s64 = 136;
	// stb r8,201(r1)
	REX_STORE_U8(ctx.r1.u32 + 201, ctx.r8.u8);
	// li r23,120
	ctx.r23.s64 = 120;
	// stb r8,202(r1)
	REX_STORE_U8(ctx.r1.u32 + 202, ctx.r8.u8);
	// addi r22,r1,244
	ctx.r22.s64 = ctx.r1.s64 + 244;
	// stb r8,207(r1)
	REX_STORE_U8(ctx.r1.u32 + 207, ctx.r8.u8);
	// li r8,216
	ctx.r8.s64 = 216;
	// stb r11,160(r1)
	REX_STORE_U8(ctx.r1.u32 + 160, ctx.r11.u8);
	// li r21,176
	ctx.r21.s64 = 176;
	// stb r10,161(r1)
	REX_STORE_U8(ctx.r1.u32 + 161, ctx.r10.u8);
	// stb r3,162(r1)
	REX_STORE_U8(ctx.r1.u32 + 162, ctx.r3.u8);
	// stb r30,163(r1)
	REX_STORE_U8(ctx.r1.u32 + 163, ctx.r30.u8);
	// stb r6,164(r1)
	REX_STORE_U8(ctx.r1.u32 + 164, ctx.r6.u8);
	// stb r11,165(r1)
	REX_STORE_U8(ctx.r1.u32 + 165, ctx.r11.u8);
	// stb r11,166(r1)
	REX_STORE_U8(ctx.r1.u32 + 166, ctx.r11.u8);
	// stb r9,167(r1)
	REX_STORE_U8(ctx.r1.u32 + 167, ctx.r9.u8);
	// stb r10,168(r1)
	REX_STORE_U8(ctx.r1.u32 + 168, ctx.r10.u8);
	// stb r6,169(r1)
	REX_STORE_U8(ctx.r1.u32 + 169, ctx.r6.u8);
	// stb r30,170(r1)
	REX_STORE_U8(ctx.r1.u32 + 170, ctx.r30.u8);
	// stb r27,171(r1)
	REX_STORE_U8(ctx.r1.u32 + 171, ctx.r27.u8);
	// stb r9,172(r1)
	REX_STORE_U8(ctx.r1.u32 + 172, ctx.r9.u8);
	// stb r26,174(r1)
	REX_STORE_U8(ctx.r1.u32 + 174, ctx.r26.u8);
	// stb r10,175(r1)
	REX_STORE_U8(ctx.r1.u32 + 175, ctx.r10.u8);
	// stb r6,176(r1)
	REX_STORE_U8(ctx.r1.u32 + 176, ctx.r6.u8);
	// stb r4,177(r1)
	REX_STORE_U8(ctx.r1.u32 + 177, ctx.r4.u8);
	// stb r30,178(r1)
	REX_STORE_U8(ctx.r1.u32 + 178, ctx.r30.u8);
	// stb r26,179(r1)
	REX_STORE_U8(ctx.r1.u32 + 179, ctx.r26.u8);
	// stb r25,181(r1)
	REX_STORE_U8(ctx.r1.u32 + 181, ctx.r25.u8);
	// stb r5,182(r1)
	REX_STORE_U8(ctx.r1.u32 + 182, ctx.r5.u8);
	// stb r5,183(r1)
	REX_STORE_U8(ctx.r1.u32 + 183, ctx.r5.u8);
	// stb r24,184(r1)
	REX_STORE_U8(ctx.r1.u32 + 184, ctx.r24.u8);
	// stb r30,185(r1)
	REX_STORE_U8(ctx.r1.u32 + 185, ctx.r30.u8);
	// stb r31,186(r1)
	REX_STORE_U8(ctx.r1.u32 + 186, ctx.r31.u8);
	// stb r11,188(r1)
	REX_STORE_U8(ctx.r1.u32 + 188, ctx.r11.u8);
	// stb r6,189(r1)
	REX_STORE_U8(ctx.r1.u32 + 189, ctx.r6.u8);
	// stb r5,190(r1)
	REX_STORE_U8(ctx.r1.u32 + 190, ctx.r5.u8);
	// stb r29,191(r1)
	REX_STORE_U8(ctx.r1.u32 + 191, ctx.r29.u8);
	// stb r30,192(r1)
	REX_STORE_U8(ctx.r1.u32 + 192, ctx.r30.u8);
	// stb r11,193(r1)
	REX_STORE_U8(ctx.r1.u32 + 193, ctx.r11.u8);
	// stb r11,195(r1)
	REX_STORE_U8(ctx.r1.u32 + 195, ctx.r11.u8);
	// stb r6,196(r1)
	REX_STORE_U8(ctx.r1.u32 + 196, ctx.r6.u8);
	// stb r10,197(r1)
	REX_STORE_U8(ctx.r1.u32 + 197, ctx.r10.u8);
	// stb r7,198(r1)
	REX_STORE_U8(ctx.r1.u32 + 198, ctx.r7.u8);
	// stb r5,199(r1)
	REX_STORE_U8(ctx.r1.u32 + 199, ctx.r5.u8);
	// stb r11,200(r1)
	REX_STORE_U8(ctx.r1.u32 + 200, ctx.r11.u8);
	// stb r6,203(r1)
	REX_STORE_U8(ctx.r1.u32 + 203, ctx.r6.u8);
	// stb r5,204(r1)
	REX_STORE_U8(ctx.r1.u32 + 204, ctx.r5.u8);
	// stb r7,205(r1)
	REX_STORE_U8(ctx.r1.u32 + 205, ctx.r7.u8);
	// stb r23,206(r1)
	REX_STORE_U8(ctx.r1.u32 + 206, ctx.r23.u8);
	// stb r9,208(r1)
	REX_STORE_U8(ctx.r1.u32 + 208, ctx.r9.u8);
	// stb r11,209(r1)
	REX_STORE_U8(ctx.r1.u32 + 209, ctx.r11.u8);
	// stb r3,210(r1)
	REX_STORE_U8(ctx.r1.u32 + 210, ctx.r3.u8);
	// stb r5,211(r1)
	REX_STORE_U8(ctx.r1.u32 + 211, ctx.r5.u8);
	// stb r8,212(r1)
	REX_STORE_U8(ctx.r1.u32 + 212, ctx.r8.u8);
	// stb r30,213(r1)
	REX_STORE_U8(ctx.r1.u32 + 213, ctx.r30.u8);
	// stb r11,214(r1)
	REX_STORE_U8(ctx.r1.u32 + 214, ctx.r11.u8);
	// stb r9,215(r1)
	REX_STORE_U8(ctx.r1.u32 + 215, ctx.r9.u8);
	// stb r9,216(r1)
	REX_STORE_U8(ctx.r1.u32 + 216, ctx.r9.u8);
	// stb r3,217(r1)
	REX_STORE_U8(ctx.r1.u32 + 217, ctx.r3.u8);
	// stb r10,218(r1)
	REX_STORE_U8(ctx.r1.u32 + 218, ctx.r10.u8);
	// stb r8,219(r1)
	REX_STORE_U8(ctx.r1.u32 + 219, ctx.r8.u8);
	// stb r5,220(r1)
	REX_STORE_U8(ctx.r1.u32 + 220, ctx.r5.u8);
	// stb r9,221(r1)
	REX_STORE_U8(ctx.r1.u32 + 221, ctx.r9.u8);
	// stb r9,222(r1)
	REX_STORE_U8(ctx.r1.u32 + 222, ctx.r9.u8);
	// stb r11,223(r1)
	REX_STORE_U8(ctx.r1.u32 + 223, ctx.r11.u8);
	// stb r7,224(r1)
	REX_STORE_U8(ctx.r1.u32 + 224, ctx.r7.u8);
	// stb r10,225(r1)
	REX_STORE_U8(ctx.r1.u32 + 225, ctx.r10.u8);
	// stb r28,226(r1)
	REX_STORE_U8(ctx.r1.u32 + 226, ctx.r28.u8);
	// stb r30,227(r1)
	REX_STORE_U8(ctx.r1.u32 + 227, ctx.r30.u8);
	// stb r11,228(r1)
	REX_STORE_U8(ctx.r1.u32 + 228, ctx.r11.u8);
	// stb r9,229(r1)
	REX_STORE_U8(ctx.r1.u32 + 229, ctx.r9.u8);
	// stb r9,230(r1)
	REX_STORE_U8(ctx.r1.u32 + 230, ctx.r9.u8);
	// stb r3,231(r1)
	REX_STORE_U8(ctx.r1.u32 + 231, ctx.r3.u8);
	// stb r10,232(r1)
	REX_STORE_U8(ctx.r1.u32 + 232, ctx.r10.u8);
	// li r11,16
	ctx.r11.s64 = 16;
	// stb r10,234(r1)
	REX_STORE_U8(ctx.r1.u32 + 234, ctx.r10.u8);
	// li r8,144
	ctx.r8.s64 = 144;
	// stb r10,239(r1)
	REX_STORE_U8(ctx.r1.u32 + 239, ctx.r10.u8);
	// stb r11,237(r1)
	REX_STORE_U8(ctx.r1.u32 + 237, ctx.r11.u8);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stb r21,233(r1)
	REX_STORE_U8(ctx.r1.u32 + 233, ctx.r21.u8);
	// stb r9,235(r1)
	REX_STORE_U8(ctx.r1.u32 + 235, ctx.r9.u8);
	// stb r9,236(r1)
	REX_STORE_U8(ctx.r1.u32 + 236, ctx.r9.u8);
	// stb r7,238(r1)
	REX_STORE_U8(ctx.r1.u32 + 238, ctx.r7.u8);
	// stb r8,240(r1)
	REX_STORE_U8(ctx.r1.u32 + 240, ctx.r8.u8);
	// stb r30,241(r1)
	REX_STORE_U8(ctx.r1.u32 + 241, ctx.r30.u8);
	// stb r31,242(r1)
	REX_STORE_U8(ctx.r1.u32 + 242, ctx.r31.u8);
	// stb r30,243(r1)
	REX_STORE_U8(ctx.r1.u32 + 243, ctx.r30.u8);
	// stw r30,0(r22)
	REX_STORE_U32(ctx.r22.u32 + 0, ctx.r30.u32);
	// sth r30,4(r22)
	REX_STORE_U16(ctx.r22.u32 + 4, ctx.r30.u16);
	// lbz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8a0b5fe8
	if (ctx.cr6.eq) goto loc_8A0B5FE8;
	// addi r9,r1,101
	ctx.r9.s64 = ctx.r1.s64 + 101;
	// addi r31,r9,-6
	ctx.r31.s64 = ctx.r9.s64 + -6;
loc_8A0B5F68:
	// extsh r29,r10
	ctx.r29.s64 = ctx.r10.s16;
	// lbz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + 4);
	// addi r6,r1,256
	ctx.r6.s64 = ctx.r1.s64 + 256;
	// lbz r4,3(r31)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r31.u32 + 3);
	// rlwinm r7,r29,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r28,2(r31)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r31.u32 + 2);
	// lbz r9,5(r31)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + 5);
	// neg r3,r5
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// add r7,r29,r7
	ctx.r7.u64 = ctx.r29.u64 + ctx.r7.u64;
	// lbz r10,6(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 6);
	// lbzu r8,7(r31)
	ea = 7 + ctx.r31.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// neg r27,r4
	ctx.r27.s64 = static_cast<int64_t>(-ctx.r4.u64);
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// add r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 + ctx.r6.u64;
	// srawi r3,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 1;
	// sth r8,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r8.u16);
	// stw r6,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// srawi r27,r27,1
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1) != 0);
	ctx.r27.s64 = ctx.r27.s32 >> 1;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// extsb r8,r3
	ctx.r8.s64 = ctx.r3.s8;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// extsb r7,r27
	ctx.r7.s64 = ctx.r27.s8;
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8a016260
	ctx.lr = 0x8A0B5FD0;
	sub_8A016260(ctx, base);
	// lbz r11,1(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 1);
	// add r4,r28,r29
	ctx.r4.u64 = ctx.r28.u64 + ctx.r29.u64;
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x8a0b5f68
	if (!ctx.cr6.eq) goto loc_8A0B5F68;
loc_8A0B5FE8:
	// lis r11,-30104
	ctx.r11.s64 = -1972895744;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// addi r31,r11,-32176
	ctx.r31.s64 = ctx.r11.s64 + -32176;
loc_8A0B5FF4:
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// add r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_8A0B6000:
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// add r11,r5,r9
	ctx.r11.u64 = ctx.r5.u64 + ctx.r9.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r7,r31,3120
	ctx.r7.s64 = ctx.r31.s64 + 3120;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r1,256
	ctx.r6.s64 = ctx.r1.s64 + 256;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
loc_8A0B6044:
	// lhzu r11,2(r8)
	ea = 2 + ctx.r8.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r8.u32 = ea;
	// sthu r11,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x8a0b6044
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8A0B6044;
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,17
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 17, ctx.xer);
	// blt cr6,0x8a0b6000
	if (ctx.cr6.lt) goto loc_8A0B6000;
	// addi r9,r31,3120
	ctx.r9.s64 = ctx.r31.s64 + 3120;
	// mulli r10,r29,170
	ctx.r10.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(170));
	// mulli r11,r29,780
	ctx.r11.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(780));
	// addi r6,r31,3800
	ctx.r6.s64 = ctx.r31.s64 + 3800;
	// li r7,13
	ctx.r7.s64 = 13;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x8a016b28
	ctx.lr = 0x8A0B6088;
	sub_8A016B28(ctx, base);
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x8a0b5ff4
	if (ctx.cr6.lt) goto loc_8A0B5FF4;
	// lis r9,-30210
	ctx.r9.s64 = -1979842560;
	// lis r11,6
	ctx.r11.s64 = 393216;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// addi r8,r9,9016
	ctx.r8.s64 = ctx.r9.s64 + 9016;
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
loc_8A0B60B0:
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r29,r31,3800
	ctx.r29.s64 = ctx.r31.s64 + 3800;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// mulli r22,r10,52
	ctx.r22.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(52));
	// addi r3,r9,128
	ctx.r3.s64 = ctx.r9.s64 + 128;
	// rlwinm r9,r10,4,22,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0x3F0;
	// rlwinm r7,r3,1,22,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x3FE;
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// addi r20,r10,1
	ctx.r20.s64 = ctx.r10.s64 + 1;
	// addi r24,r31,3800
	ctx.r24.s64 = ctx.r31.s64 + 3800;
	// lhzx r6,r9,r8
	ctx.r6.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// addi r28,r31,3800
	ctx.r28.s64 = ctx.r31.s64 + 3800;
	// lhzx r5,r7,r8
	ctx.r5.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r8.u32);
	// addi r23,r31,3800
	ctx.r23.s64 = ctx.r31.s64 + 3800;
	// rotlwi r21,r6,16
	ctx.r21.u64 = __builtin_rotateleft32(ctx.r6.u32, 16);
	// rotlwi r9,r5,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 16);
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// srawi r9,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 8;
	// srawi r10,r21,8
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r21.s32 >> 8;
	// addi r25,r31,3800
	ctx.r25.s64 = ctx.r31.s64 + 3800;
	// stwx r10,r22,r29
	REX_STORE_U32(ctx.r22.u32 + ctx.r29.u32, ctx.r10.u32);
	// addi r29,r24,32
	ctx.r29.s64 = ctx.r24.s64 + 32;
	// addi r26,r31,3800
	ctx.r26.s64 = ctx.r31.s64 + 3800;
	// stwx r9,r22,r28
	REX_STORE_U32(ctx.r22.u32 + ctx.r28.u32, ctx.r9.u32);
	// addi r27,r31,3800
	ctx.r27.s64 = ctx.r31.s64 + 3800;
	// addi r3,r31,3800
	ctx.r3.s64 = ctx.r31.s64 + 3800;
	// addi r4,r31,3800
	ctx.r4.s64 = ctx.r31.s64 + 3800;
	// addi r5,r31,3800
	ctx.r5.s64 = ctx.r31.s64 + 3800;
	// stwx r11,r22,r29
	REX_STORE_U32(ctx.r22.u32 + ctx.r29.u32, ctx.r11.u32);
	// addi r6,r31,3800
	ctx.r6.s64 = ctx.r31.s64 + 3800;
	// addi r7,r31,3800
	ctx.r7.s64 = ctx.r31.s64 + 3800;
	// addi r21,r31,3800
	ctx.r21.s64 = ctx.r31.s64 + 3800;
	// addi r23,r23,36
	ctx.r23.s64 = ctx.r23.s64 + 36;
	// addi r25,r25,20
	ctx.r25.s64 = ctx.r25.s64 + 20;
	// addi r26,r26,16
	ctx.r26.s64 = ctx.r26.s64 + 16;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// stwx r11,r22,r21
	REX_STORE_U32(ctx.r22.u32 + ctx.r21.u32, ctx.r11.u32);
	// addi r4,r4,28
	ctx.r4.s64 = ctx.r4.s64 + 28;
	// stwx r11,r22,r23
	REX_STORE_U32(ctx.r22.u32 + ctx.r23.u32, ctx.r11.u32);
	// addi r5,r5,48
	ctx.r5.s64 = ctx.r5.s64 + 48;
	// stwx r11,r22,r25
	REX_STORE_U32(ctx.r22.u32 + ctx.r25.u32, ctx.r11.u32);
	// addi r6,r6,44
	ctx.r6.s64 = ctx.r6.s64 + 44;
	// stwx r11,r22,r26
	REX_STORE_U32(ctx.r22.u32 + ctx.r26.u32, ctx.r11.u32);
	// addi r7,r7,40
	ctx.r7.s64 = ctx.r7.s64 + 40;
	// stwx r11,r22,r27
	REX_STORE_U32(ctx.r22.u32 + ctx.r27.u32, ctx.r11.u32);
	// extsh r29,r20
	ctx.r29.s64 = ctx.r20.s16;
	// neg r28,r10
	ctx.r28.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// neg r9,r9
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// stwx r30,r22,r5
	REX_STORE_U32(ctx.r22.u32 + ctx.r5.u32, ctx.r30.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stwx r28,r22,r4
	REX_STORE_U32(ctx.r22.u32 + ctx.r4.u32, ctx.r28.u32);
	// stwx r9,r22,r3
	REX_STORE_U32(ctx.r22.u32 + ctx.r3.u32, ctx.r9.u32);
	// cmpwi cr6,r29,17
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 17, ctx.xer);
	// stwx r30,r22,r6
	REX_STORE_U32(ctx.r22.u32 + ctx.r6.u32, ctx.r30.u32);
	// stwx r30,r22,r7
	REX_STORE_U32(ctx.r22.u32 + ctx.r7.u32, ctx.r30.u32);
	// blt cr6,0x8a0b60b0
	if (ctx.cr6.lt) goto loc_8A0B60B0;
	// addi r1,r1,1040
	ctx.r1.s64 = ctx.r1.s64 + 1040;
	// b 0x8a0c2378
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8A0B9CA0) {
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
	// lis r10,-30160
	ctx.r10.s64 = -1976565760;
	// lwz r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r8,36(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r9,28(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// rlwinm r7,r8,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r10,9448(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 9448);
	// subf r6,r8,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r8.u64;
	// subf r5,r11,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r11.u64;
	// rlwinm r4,r5,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r10,r5,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r5.u64;
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// srawi r8,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r6.s32 >> 4;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r8.u32);
	// subf r10,r11,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r11.u64;
	// stw r11,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addis r11,r5,-160
	ctx.r11.s64 = ctx.r5.s64 + -10485760;
	// stw r5,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r5.u32);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x8a0b9d04
	if (!ctx.cr0.lt) goto loc_8A0B9D04;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_8A0B9D04:
	// lis r10,168
	ctx.r10.s64 = 11010048;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8a0b9d58
	if (ctx.cr6.gt) goto loc_8A0B9D58;
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// lis r9,-30126
	ctx.r9.s64 = -1974337536;
	// lwz r10,32(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r7,r11,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r6,r11,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r11.u64;
	// lwz r11,-13288(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + -13288);
	// srawi r9,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 4;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r9,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r9.u32);
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// stw r6,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r6.u32);
	// addis r11,r4,-120
	ctx.r11.s64 = ctx.r4.s64 + -7864320;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x8a0b9d4c
	if (!ctx.cr0.lt) goto loc_8A0B9D4C;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_8A0B9D4C:
	// lis r10,128
	ctx.r10.s64 = 8388608;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8a0b9d70
	if (!ctx.cr6.gt) goto loc_8A0B9D70;
loc_8A0B9D58:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8A0B9D70:
	// lbz r11,77(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 77);
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r7,78(r3)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + 78);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// stb r4,77(r3)
	REX_STORE_U8(ctx.r3.u32 + 77, ctx.r4.u8);
	// cmplw cr6,r4,r7
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8a0b9da4
	if (!ctx.cr6.eq) goto loc_8A0B9DA4;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// stb r10,77(r3)
	REX_STORE_U8(ctx.r3.u32 + 77, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r4,r11,29
	ctx.r4.u64 = ctx.r11.u32 & 0x7;
	// stw r4,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
loc_8A0B9DA4:
	// lbz r11,47(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 47);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8a0b9dec
	if (ctx.cr6.eq) goto loc_8A0B9DEC;
	// lbz r11,46(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 46);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// ble cr6,0x8a0b9dd8
	if (!ctx.cr6.gt) goto loc_8A0B9DD8;
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// addi r11,r11,-1285
	ctx.r11.s64 = ctx.r11.s64 + -1285;
	// stw r11,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8A0B9DD8:
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8A0B9DEC:
	// lbz r11,76(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 76);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stb r10,76(r3)
	REX_STORE_U8(ctx.r3.u32 + 76, ctx.r10.u8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8a0b9e30
	if (ctx.cr6.eq) goto loc_8A0B9E30;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge cr6,0x8a0b9e10
	if (!ctx.cr6.lt) goto loc_8A0B9E10;
	// neg r8,r8
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r8.u64);
loc_8A0B9E10:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// bge cr6,0x8a0b9e20
	if (!ctx.cr6.lt) goto loc_8A0B9E20;
	// neg r11,r9
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r9.u64);
loc_8A0B9E20:
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8a0b9e44
	if (!ctx.cr6.lt) goto loc_8A0B9E44;
loc_8A0B9E30:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// ori r8,r11,1
	ctx.r8.u64 = ctx.r11.u64 | 1;
	// stb r9,47(r3)
	REX_STORE_U8(ctx.r3.u32 + 47, ctx.r9.u8);
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
loc_8A0B9E44:
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// blt cr6,0x8a0b9ef8
	if (ctx.cr6.lt) goto loc_8A0B9EF8;
	// clrlwi r11,r10,30
	ctx.r11.u64 = ctx.r10.u32 & 0x3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8a0b9ef8
	if (!ctx.cr6.eq) goto loc_8A0B9EF8;
	// clrlwi r11,r7,30
	ctx.r11.u64 = ctx.r7.u32 & 0x3;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8a0b9ee4
	if (ctx.cr6.lt) goto loc_8A0B9EE4;
	// beq cr6,0x8a0b9eac
	if (ctx.cr6.eq) goto loc_8A0B9EAC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8a0b9ef8
	if (!ctx.cr6.lt) goto loc_8A0B9EF8;
	// lis r11,128
	ctx.r11.s64 = 8388608;
	// lbz r8,79(r3)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + 79);
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r7,80(r3)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + 80);
	// ori r4,r11,32896
	ctx.r4.u64 = ctx.r11.u64 | 32896;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r4,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8a0bbb00
	ctx.lr = 0x8A0B9E9C;
	sub_8A0BBB00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8A0B9EAC:
	// lis r11,128
	ctx.r11.s64 = 8388608;
	// lbz r8,79(r3)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + 79);
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r7,80(r3)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + 80);
	// ori r4,r11,32896
	ctx.r4.u64 = ctx.r11.u64 | 32896;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r4,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x8a0bbb00
	ctx.lr = 0x8A0B9ED4;
	sub_8A0BBB00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8A0B9EE4:
	// li r7,0
	ctx.r7.s64 = 0;
	// lbz r8,79(r3)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + 79);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8a0b82f0
	ctx.lr = 0x8A0B9EF8;
	sub_8A0B82F0(ctx, base);
loc_8A0B9EF8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8A0BBA68) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8a0c234c
	ctx.lr = 0x8A0BBA70;
	__savegprlr_29(ctx, base);
	// lhz r11,92(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 92);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// sth r11,92(r3)
	REX_STORE_U16(ctx.r3.u32 + 92, ctx.r11.u16);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// blt cr6,0x8a0bba90
	if (ctx.cr6.lt) goto loc_8A0BBA90;
	// sth r9,92(r3)
	REX_STORE_U16(ctx.r3.u32 + 92, ctx.r9.u16);
loc_8A0BBA90:
	// lhz r11,92(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 92);
	// li r10,192
	ctx.r10.s64 = 192;
	// lwz r31,0(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r30,512
	ctx.r30.s64 = 512;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// rlwinm r31,r31,0,27,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x10;
	// addi r11,r11,25
	ctx.r11.s64 = ctx.r11.s64 + 25;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// lwz r29,0(r11)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// or r9,r31,r29
	ctx.r9.u64 = ctx.r31.u64 | ctx.r29.u64;
	// stw r5,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r5.u32);
	// stw r4,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r4.u32);
	// oris r5,r9,16384
	ctx.r5.u64 = ctx.r9.u64 | 1073741824;
	// stw r6,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r6.u32);
	// stw r7,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r7.u32);
	// stw r5,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lbz r4,207(r3)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r3.u32 + 207);
	// stb r4,80(r11)
	REX_STORE_U8(ctx.r11.u32 + 80, ctx.r4.u8);
	// lbz r3,200(r3)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r3.u32 + 200);
	// stb r3,79(r11)
	REX_STORE_U8(ctx.r11.u32 + 79, ctx.r3.u8);
	// sth r30,44(r11)
	REX_STORE_U16(ctx.r11.u32 + 44, ctx.r30.u16);
	// stb r10,46(r11)
	REX_STORE_U8(ctx.r11.u32 + 46, ctx.r10.u8);
	// stb r10,47(r11)
	REX_STORE_U8(ctx.r11.u32 + 47, ctx.r10.u8);
	// stw r8,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r8.u32);
	// b 0x8a0c239c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8A0BBFF0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8a0bc064
	if (ctx.cr6.eq) goto loc_8A0BC064;
	// lbz r10,46(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 46);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// bge cr6,0x8a0bc018
	if (!ctx.cr6.lt) goto loc_8A0BC018;
	// rlwinm r11,r11,0,2,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8A0BC018:
	// lbz r11,47(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 47);
	// addi r5,r10,240
	ctx.r5.s64 = ctx.r10.s64 + 240;
	// lwz r7,28(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r8,36(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// addi r6,r11,5
	ctx.r6.s64 = ctx.r11.s64 + 5;
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
loc_8A0BC064:
	// lwz r11,64(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8a0bc084
	if (ctx.cr6.eq) goto loc_8A0BC084;
	// lhz r11,154(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 154);
	// lhz r10,72(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 72);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_8A0BC084:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8A0BC7F0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8a0c2344
	ctx.lr = 0x8A0BC7F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,45
	ctx.r3.s64 = 45;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x8a015420
	ctx.lr = 0x8A0BC810;
	sub_8A015420(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x8a0bc950
	if (ctx.cr6.eq) goto loc_8A0BC950;
	// bl 0x89ffa240
	ctx.lr = 0x8A0BC820;
	sub_89FFA240(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8a0bc94c
	if (ctx.cr6.eq) goto loc_8A0BC94C;
	// lis r11,-30137
	ctx.r11.s64 = -1975058432;
	// lis r6,-30137
	ctx.r6.s64 = -1975058432;
	// lis r5,-30185
	ctx.r5.s64 = -1978204160;
	// lis r4,-16384
	ctx.r4.s64 = -1073741824;
	// lis r3,16838
	ctx.r3.s64 = 1103495168;
	// lwz r9,16200(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16200);
	// addi r5,r5,11904
	ctx.r5.s64 = ctx.r5.s64 + 11904;
	// ori r11,r3,20077
	ctx.r11.u64 = ctx.r3.u64 | 20077;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// li r3,45
	ctx.r3.s64 = 45;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r4,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r4.u32);
	// lis r4,128
	ctx.r4.s64 = 8388608;
	// lwz r9,-916(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + -916);
	// extsh r8,r31
	ctx.r8.s64 = ctx.r31.s16;
	// stw r3,4(r28)
	REX_STORE_U32(ctx.r28.u32 + 4, ctx.r3.u32);
	// lis r27,-30184
	ctx.r27.s64 = -1978138624;
	// mullw r7,r9,r11
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// sth r31,52(r28)
	REX_STORE_U16(ctx.r28.u32 + 52, ctx.r31.u16);
	// lwz r9,1448(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 1448);
	// stw r9,20(r28)
	REX_STORE_U32(ctx.r28.u32 + 20, ctx.r9.u32);
	// lwz r9,1444(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 1444);
	// ori r5,r4,32896
	ctx.r5.u64 = ctx.r4.u64 | 32896;
	// stb r10,77(r28)
	REX_STORE_U8(ctx.r28.u32 + 77, ctx.r10.u8);
	// addi r3,r8,8
	ctx.r3.s64 = ctx.r8.s64 + 8;
	// stw r5,48(r28)
	REX_STORE_U32(ctx.r28.u32 + 48, ctx.r5.u32);
	// stb r10,78(r28)
	REX_STORE_U8(ctx.r28.u32 + 78, ctx.r10.u8);
	// srawi r4,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r4.s64 = ctx.r3.s32 >> 4;
	// stw r9,16(r28)
	REX_STORE_U32(ctx.r28.u32 + 16, ctx.r9.u32);
	// addi r9,r7,12345
	ctx.r9.s64 = ctx.r7.s64 + 12345;
	// addi r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 1;
	// stb r10,76(r28)
	REX_STORE_U8(ctx.r28.u32 + 76, ctx.r10.u8);
	// addi r7,r27,3136
	ctx.r7.s64 = ctx.r27.s64 + 3136;
	// stw r10,44(r28)
	REX_STORE_U32(ctx.r28.u32 + 44, ctx.r10.u32);
	// srawi r5,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r5.s64 = ctx.r3.s32 >> 16;
	// lbz r3,3136(r27)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r27.u32 + 3136);
	// clrlwi r10,r4,27
	ctx.r10.u64 = ctx.r4.u32 & 0x1F;
	// stw r3,8(r28)
	REX_STORE_U32(ctx.r28.u32 + 8, ctx.r3.u32);
	// clrlwi r5,r5,17
	ctx.r5.u64 = ctx.r5.u32 & 0x7FFF;
	// stw r10,12(r28)
	REX_STORE_U32(ctx.r28.u32 + 12, ctx.r10.u32);
	// stw r30,28(r28)
	REX_STORE_U32(ctx.r28.u32 + 28, ctx.r30.u32);
	// addi r4,r8,128
	ctx.r4.s64 = ctx.r8.s64 + 128;
	// stw r29,32(r28)
	REX_STORE_U32(ctx.r28.u32 + 32, ctx.r29.u32);
	// lis r3,-30210
	ctx.r3.s64 = -1979842560;
	// lwz r10,4(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// mullw r8,r5,r10
	ctx.r8.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// rlwinm r8,r8,17,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 17) & 0xFFFF;
	// addi r7,r3,9016
	ctx.r7.s64 = ctx.r3.s64 + 9016;
	// rlwinm r5,r4,1,22,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x3FE;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// stw r10,24(r28)
	REX_STORE_U32(ctx.r28.u32 + 24, ctx.r10.u32);
	// lhzx r3,r5,r7
	ctx.r3.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r7.u32);
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// mullw r8,r9,r10
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// rlwinm r4,r31,1,22,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x3FE;
	// srawi r5,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 8;
	// addi r11,r11,12345
	ctx.r11.s64 = ctx.r11.s64 + 12345;
	// stw r5,36(r28)
	REX_STORE_U32(ctx.r28.u32 + 36, ctx.r5.u32);
	// li r3,96
	ctx.r3.s64 = 96;
	// stw r11,-916(r6)
	REX_STORE_U32(ctx.r6.u32 + -916, ctx.r11.u32);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// lhzx r9,r4,r7
	ctx.r9.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r7.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// mullw r7,r8,r10
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// stb r3,79(r28)
	REX_STORE_U8(ctx.r28.u32 + 79, ctx.r3.u8);
	// srawi r5,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 8;
	// srawi r4,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 16;
	// stw r5,40(r28)
	REX_STORE_U32(ctx.r28.u32 + 40, ctx.r5.u32);
	// rlwinm r11,r4,19,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 19) & 0x3;
	// stb r11,77(r28)
	REX_STORE_U8(ctx.r28.u32 + 77, ctx.r11.u8);
loc_8A0BC94C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8A0BC950:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8a0c2394
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8A0BDF28) {
	REX_FUNC_PROLOGUE();
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// ori r10,r11,53972
	ctx.r10.u64 = ctx.r11.u64 | 53972;
loc_8A0BDF38:
	// li r11,64
	ctx.r11.s64 = 64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8A0BDF44:
	// add r11,r6,r7
	ctx.r11.u64 = ctx.r6.u64 + ctx.r7.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r9,28824(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 28824);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8a0bdf90
	if (ctx.cr6.eq) goto loc_8A0BDF90;
	// lwz r9,28828(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 28828);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,28828(r11)
	REX_STORE_U32(ctx.r11.u32 + 28828, ctx.r9.u32);
	// lwzx r5,r3,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8a0bdf7c
	if (ctx.cr6.eq) goto loc_8A0BDF7C;
	// addi r9,r9,-9
	ctx.r9.s64 = ctx.r9.s64 + -9;
	// stw r9,28828(r11)
	REX_STORE_U32(ctx.r11.u32 + 28828, ctx.r9.u32);
loc_8A0BDF7C:
	// lwz r9,28828(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 28828);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x8a0bdf90
	if (!ctx.cr6.lt) goto loc_8A0BDF90;
	// stw r8,28828(r11)
	REX_STORE_U32(ctx.r11.u32 + 28828, ctx.r8.u32);
	// stb r8,28824(r11)
	REX_STORE_U8(ctx.r11.u32 + 28824, ctx.r8.u8);
loc_8A0BDF90:
	// lbz r9,28840(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 28840);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8a0bdfd0
	if (ctx.cr6.eq) goto loc_8A0BDFD0;
	// lwz r9,28844(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 28844);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,28844(r11)
	REX_STORE_U32(ctx.r11.u32 + 28844, ctx.r9.u32);
	// lwzx r5,r3,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8a0bdfbc
	if (ctx.cr6.eq) goto loc_8A0BDFBC;
	// addi r9,r9,-9
	ctx.r9.s64 = ctx.r9.s64 + -9;
	// stw r9,28844(r11)
	REX_STORE_U32(ctx.r11.u32 + 28844, ctx.r9.u32);
loc_8A0BDFBC:
	// lwz r9,28844(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 28844);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x8a0bdfd0
	if (!ctx.cr6.lt) goto loc_8A0BDFD0;
	// stw r8,28844(r11)
	REX_STORE_U32(ctx.r11.u32 + 28844, ctx.r8.u32);
	// stb r8,28840(r11)
	REX_STORE_U8(ctx.r11.u32 + 28840, ctx.r8.u8);
loc_8A0BDFD0:
	// lbz r9,28856(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 28856);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8a0be010
	if (ctx.cr6.eq) goto loc_8A0BE010;
	// lwz r9,28860(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 28860);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,28860(r11)
	REX_STORE_U32(ctx.r11.u32 + 28860, ctx.r9.u32);
	// lwzx r5,r3,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8a0bdffc
	if (ctx.cr6.eq) goto loc_8A0BDFFC;
	// addi r9,r9,-9
	ctx.r9.s64 = ctx.r9.s64 + -9;
	// stw r9,28860(r11)
	REX_STORE_U32(ctx.r11.u32 + 28860, ctx.r9.u32);
loc_8A0BDFFC:
	// lwz r9,28860(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 28860);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x8a0be010
	if (!ctx.cr6.lt) goto loc_8A0BE010;
	// stw r8,28860(r11)
	REX_STORE_U32(ctx.r11.u32 + 28860, ctx.r8.u32);
	// stb r8,28856(r11)
	REX_STORE_U8(ctx.r11.u32 + 28856, ctx.r8.u8);
loc_8A0BE010:
	// lbz r9,28872(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 28872);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8a0be050
	if (ctx.cr6.eq) goto loc_8A0BE050;
	// lwz r9,28876(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 28876);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,28876(r11)
	REX_STORE_U32(ctx.r11.u32 + 28876, ctx.r9.u32);
	// lwzx r5,r3,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8a0be03c
	if (ctx.cr6.eq) goto loc_8A0BE03C;
	// addi r9,r9,-9
	ctx.r9.s64 = ctx.r9.s64 + -9;
	// stw r9,28876(r11)
	REX_STORE_U32(ctx.r11.u32 + 28876, ctx.r9.u32);
loc_8A0BE03C:
	// lwz r9,28876(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 28876);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x8a0be050
	if (!ctx.cr6.lt) goto loc_8A0BE050;
	// stw r8,28876(r11)
	REX_STORE_U32(ctx.r11.u32 + 28876, ctx.r8.u32);
	// stb r8,28872(r11)
	REX_STORE_U8(ctx.r11.u32 + 28872, ctx.r8.u8);
loc_8A0BE050:
	// lbz r9,28888(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 28888);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8a0be090
	if (ctx.cr6.eq) goto loc_8A0BE090;
	// lwz r9,28892(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 28892);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,28892(r11)
	REX_STORE_U32(ctx.r11.u32 + 28892, ctx.r9.u32);
	// lwzx r5,r3,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8a0be07c
	if (ctx.cr6.eq) goto loc_8A0BE07C;
	// addi r9,r9,-9
	ctx.r9.s64 = ctx.r9.s64 + -9;
	// stw r9,28892(r11)
	REX_STORE_U32(ctx.r11.u32 + 28892, ctx.r9.u32);
loc_8A0BE07C:
	// lwz r9,28892(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 28892);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x8a0be090
	if (!ctx.cr6.lt) goto loc_8A0BE090;
	// stw r8,28892(r11)
	REX_STORE_U32(ctx.r11.u32 + 28892, ctx.r8.u32);
	// stb r8,28888(r11)
	REX_STORE_U8(ctx.r11.u32 + 28888, ctx.r8.u8);
loc_8A0BE090:
	// addi r7,r7,5
	ctx.r7.s64 = ctx.r7.s64 + 5;
	// bdnz 0x8a0bdf44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8A0BDF44;
	// addi r6,r6,320
	ctx.r6.s64 = ctx.r6.s64 + 320;
	// cmpwi cr6,r6,640
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 640, ctx.xer);
	// blt cr6,0x8a0bdf38
	if (ctx.cr6.lt) goto loc_8A0BDF38;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8A0BF780) {
	REX_FUNC_PROLOGUE();
	// lis r11,-30103
	ctx.r11.s64 = -1972830208;
	// lis r10,-30166
	ctx.r10.s64 = -1976958976;
	// addi r11,r11,-31664
	ctx.r11.s64 = ctx.r11.s64 + -31664;
	// extsb r9,r3
	ctx.r9.s64 = ctx.r3.s8;
	// addis r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 65536;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r8,-11572
	ctx.r6.s64 = ctx.r8.s64 + -11572;
	// lbz r5,31298(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 31298);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r5,3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 3, ctx.xer);
	// stwx r10,r7,r6
	REX_STORE_U32(ctx.r7.u32 + ctx.r6.u32, ctx.r10.u32);
	// stb r10,22(r11)
	REX_STORE_U8(ctx.r11.u32 + 22, ctx.r10.u8);
	// stb r10,24(r11)
	REX_STORE_U8(ctx.r11.u32 + 24, ctx.r10.u8);
	// stb r10,26(r11)
	REX_STORE_U8(ctx.r11.u32 + 26, ctx.r10.u8);
	// stb r10,28(r11)
	REX_STORE_U8(ctx.r11.u32 + 28, ctx.r10.u8);
	// stb r10,30(r11)
	REX_STORE_U8(ctx.r11.u32 + 30, ctx.r10.u8);
	// stb r10,32(r11)
	REX_STORE_U8(ctx.r11.u32 + 32, ctx.r10.u8);
	// stb r10,34(r11)
	REX_STORE_U8(ctx.r11.u32 + 34, ctx.r10.u8);
	// beq cr6,0x8a0bf81c
	if (ctx.cr6.eq) goto loc_8A0BF81C;
	// lbz r8,53(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 53);
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// extsb r6,r7
	ctx.r6.s64 = ctx.r7.s8;
	// stb r6,53(r11)
	REX_STORE_U8(ctx.r11.u32 + 53, ctx.r6.u8);
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// ble cr6,0x8a0bf7f0
	if (!ctx.cr6.gt) goto loc_8A0BF7F0;
	// li r8,4
	ctx.r8.s64 = 4;
	// stb r8,53(r11)
	REX_STORE_U8(ctx.r11.u32 + 53, ctx.r8.u8);
loc_8A0BF7F0:
	// lbz r8,49(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 49);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bne cr6,0x8a0bf81c
	if (!ctx.cr6.eq) goto loc_8A0BF81C;
	// lbz r8,51(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 51);
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// extsb r6,r7
	ctx.r6.s64 = ctx.r7.s8;
	// stb r6,51(r11)
	REX_STORE_U8(ctx.r11.u32 + 51, ctx.r6.u8);
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// ble cr6,0x8a0bf81c
	if (!ctx.cr6.gt) goto loc_8A0BF81C;
	// li r8,3
	ctx.r8.s64 = 3;
	// stb r8,51(r11)
	REX_STORE_U8(ctx.r11.u32 + 51, ctx.r8.u8);
loc_8A0BF81C:
	// lis r8,-30160
	ctx.r8.s64 = -1976565760;
	// stb r10,49(r11)
	REX_STORE_U8(ctx.r11.u32 + 49, ctx.r10.u8);
	// stb r10,55(r11)
	REX_STORE_U8(ctx.r11.u32 + 55, ctx.r10.u8);
	// mulli r9,r9,696
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(696));
	// stb r10,59(r11)
	REX_STORE_U8(ctx.r11.u32 + 59, ctx.r10.u8);
	// stb r10,57(r11)
	REX_STORE_U8(ctx.r11.u32 + 57, ctx.r10.u8);
	// stb r10,47(r11)
	REX_STORE_U8(ctx.r11.u32 + 47, ctx.r10.u8);
	// stb r10,61(r11)
	REX_STORE_U8(ctx.r11.u32 + 61, ctx.r10.u8);
	// addi r8,r8,27472
	ctx.r8.s64 = ctx.r8.s64 + 27472;
	// addi r11,r8,8
	ctx.r11.s64 = ctx.r8.s64 + 8;
	// lwzx r10,r9,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r7,r10,0,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8a0bf864
	if (ctx.cr6.eq) goto loc_8A0BF864;
	// addi r11,r8,637
	ctx.r11.s64 = ctx.r8.s64 + 637;
	// lbzx r10,r9,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbx r10,r9,r11
	REX_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
loc_8A0BF864:
	// addi r11,r8,637
	ctx.r11.s64 = ctx.r8.s64 + 637;
	// lbzx r10,r9,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbx r10,r9,r11
	REX_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8A0C0160) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8a0c2340
	ctx.lr = 0x8A0C0168;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r26,-30097
	ctx.r26.s64 = -1972436992;
	// lwz r11,416(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 416);
	// lwz r3,88(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8A0C018C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r31,16
	ctx.r31.s64 = 16;
loc_8A0C0190:
	// bl 0x8a0c0000
	ctx.lr = 0x8A0C0194;
	sub_8A0C0000(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8a0c0190
	if (!ctx.cr0.eq) goto loc_8A0C0190;
	// lis r11,-30103
	ctx.r11.s64 = -1972830208;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r29,r11,22312
	ctx.r29.s64 = ctx.r11.s64 + 22312;
	// lis r11,-30210
	ctx.r11.s64 = -1979842560;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// addi r10,r11,10048
	ctx.r10.s64 = ctx.r11.s64 + 10048;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// lis r28,-30097
	ctx.r28.s64 = -1972436992;
	// lfs f31,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f31.f64 = double(temp.f32);
loc_8A0C01C0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8a0c01f8
	if (ctx.cr6.eq) goto loc_8A0C01F8;
	// lwz r3,420(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 420);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f1,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,740(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 740);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8A0C01E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x8a0c01f8
	if (!ctx.cr6.eq) goto loc_8A0C01F8;
	// stw r27,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
loc_8A0C01F8:
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// addi r11,r29,128
	ctx.r11.s64 = ctx.r29.s64 + 128;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8a0c01c0
	if (ctx.cr6.lt) goto loc_8A0C01C0;
	// lwz r11,416(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 416);
	// lwz r3,88(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8A0C0224;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8a0c2390
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8A0C0748) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8a0c2310
	ctx.lr = 0x8A0C0750;
	__savegprlr_14(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-30097
	ctx.r31.s64 = -1972436992;
	// lwz r3,416(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 416);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,332(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 332);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8A0C076C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,416(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 416);
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
	// bne cr6,0x8a0c0790
	if (!ctx.cr6.eq) goto loc_8A0C0790;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// rotlwi r30,r10,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_8A0C0790:
	// lwz r9,428(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 428);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8a0c07a4
	if (ctx.cr6.eq) goto loc_8A0C07A4;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// rotlwi r30,r10,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_8A0C07A4:
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
	ctx.lr = 0x8A0C07BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// ble cr6,0x8a0c07dc
	if (!ctx.cr6.gt) goto loc_8A0C07DC;
	// lwz r3,416(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 416);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,336(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 336);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8A0C07DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8A0C07DC:
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8a0c0b38
	if (ctx.cr6.eq) goto loc_8A0C0B38;
	// lis r11,-30195
	ctx.r11.s64 = -1978859520;
	// lis r10,-30195
	ctx.r10.s64 = -1978859520;
	// lis r9,-30195
	ctx.r9.s64 = -1978859520;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// lis r14,-30195
	ctx.r14.s64 = -1978859520;
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lis r15,-30195
	ctx.r15.s64 = -1978859520;
	// lis r16,-30195
	ctx.r16.s64 = -1978859520;
	// lis r17,-30195
	ctx.r17.s64 = -1978859520;
	// lis r18,-30097
	ctx.r18.s64 = -1972436992;
	// lis r19,-30097
	ctx.r19.s64 = -1972436992;
	// lis r20,-30097
	ctx.r20.s64 = -1972436992;
	// lis r21,-30097
	ctx.r21.s64 = -1972436992;
	// lis r22,-30097
	ctx.r22.s64 = -1972436992;
	// lis r23,-30097
	ctx.r23.s64 = -1972436992;
	// lis r24,-30097
	ctx.r24.s64 = -1972436992;
	// lis r25,-30097
	ctx.r25.s64 = -1972436992;
	// lis r26,-30097
	ctx.r26.s64 = -1972436992;
	// lis r27,-30097
	ctx.r27.s64 = -1972436992;
	// lis r29,-30097
	ctx.r29.s64 = -1972436992;
	// lis r28,-30097
	ctx.r28.s64 = -1972436992;
	// lis r30,-30097
	ctx.r30.s64 = -1972436992;
loc_8A0C0844:
	// lwz r3,416(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 416);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,344(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 344);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8A0C085C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,416(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 416);
	// lwz r3,84(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8A0C0874;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,416(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 416);
	// lwz r4,360(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 360);
	// lwz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,80(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 80);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8A0C088C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,416(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 416);
	// lwz r4,364(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 364);
	// lwz r5,0(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8A0C08A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,416(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 416);
	// lwz r4,368(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 368);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,88(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 88);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8A0C08BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,416(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 416);
	// lwz r4,372(r27)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 372);
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,92(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 92);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8A0C08D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,416(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 416);
	// lwz r4,376(r26)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r26.u32 + 376);
	// lwz r6,0(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,96(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 96);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8A0C08EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,416(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 416);
	// lwz r4,380(r25)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r25.u32 + 380);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,100(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8A0C0904;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,416(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 416);
	// lwz r4,384(r24)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r24.u32 + 384);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,104(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 104);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8A0C091C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,416(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 416);
	// lwz r4,388(r23)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r23.u32 + 388);
	// lwz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,108(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 108);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8A0C0934;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,416(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 416);
	// lwz r4,392(r22)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r22.u32 + 392);
	// lwz r5,0(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,112(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8A0C094C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,416(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 416);
	// lwz r4,396(r21)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r21.u32 + 396);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,116(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 116);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8A0C0964;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,416(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 416);
	// lwz r4,400(r20)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r20.u32 + 400);
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,120(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 120);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8A0C097C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,416(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 416);
	// lwz r4,404(r19)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r19.u32 + 404);
	// lwz r6,0(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,124(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 124);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8A0C0994;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,416(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 416);
	// lwz r4,0(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8A0C09A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,416(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 416);
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
	ctx.lr = 0x8A0C09C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,360(r30)
	REX_STORE_U32(ctx.r30.u32 + 360, ctx.r3.u32);
	// lwz r3,416(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 416);
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,176(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 176);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8A0C09DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,368(r29)
	REX_STORE_U32(ctx.r29.u32 + 368, ctx.r3.u32);
	// lwz r3,416(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 416);
	// lwz r6,0(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,216(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 216);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8A0C09F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,408(r18)
	REX_STORE_U32(ctx.r18.u32 + 408, ctx.r3.u32);
	// lwz r3,416(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 416);
	// lwz r4,0(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,224(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 224);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8A0C0A0C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r3,4144(r17)
	REX_STORE_U8(ctx.r17.u32 + 4144, ctx.r3.u8);
	// lwz r3,416(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 416);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,228(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 228);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8A0C0A24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r3,4145(r16)
	REX_STORE_U8(ctx.r16.u32 + 4145, ctx.r3.u8);
	// lwz r3,416(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 416);
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,232(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 232);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8A0C0A3C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r3,4146(r15)
	REX_STORE_U8(ctx.r15.u32 + 4146, ctx.r3.u8);
	// lwz r3,416(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 416);
	// lwz r6,0(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,236(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 236);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8A0C0A54;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r3,4147(r14)
	REX_STORE_U8(ctx.r14.u32 + 4147, ctx.r3.u8);
	// lwz r3,416(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 416);
	// lwz r4,0(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,240(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 240);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8A0C0A6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,416(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 416);
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
	ctx.lr = 0x8A0C0A8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,92(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// stb r3,4149(r7)
	REX_STORE_U8(ctx.r7.u32 + 4149, ctx.r3.u8);
	// lwz r3,416(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 416);
	// lwz r6,0(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,248(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 248);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8A0C0AA8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,416(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 416);
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
	ctx.lr = 0x8A0C0AC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// ble cr6,0x8a0c0b28
	if (!ctx.cr6.gt) goto loc_8A0C0B28;
	// lwz r3,416(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 416);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,68(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8A0C0AE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8a0c0b14
	if (!ctx.cr6.eq) goto loc_8A0C0B14;
loc_8A0C0AF0:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8a0c36c8
	ctx.lr = 0x8A0C0AF8;
	sub_8A0C36C8(ctx, base);
	// lwz r3,416(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 416);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,68(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8A0C0B0C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8a0c0af0
	if (ctx.cr6.eq) goto loc_8A0C0AF0;
loc_8A0C0B14:
	// lwz r3,416(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 416);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8A0C0B28;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8A0C0B28:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bne 0x8a0c0844
	if (!ctx.cr0.eq) goto loc_8A0C0844;
loc_8A0C0B38:
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8a0c0b48
	if (!ctx.cr6.eq) goto loc_8A0C0B48;
	// bl 0x8a0c02e8
	ctx.lr = 0x8A0C0B48;
	sub_8A0C02E8(ctx, base);
loc_8A0C0B48:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8a0c2360
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8A0C32B0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8a0c234c
	ctx.lr = 0x8A0C32B8;
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
	// beq cr6,0x8a0c32d4
	if (ctx.cr6.eq) goto loc_8A0C32D4;
	// bl 0x8a0c35c0
	ctx.lr = 0x8A0C32D4;
	sub_8A0C35C0(ctx, base);
loc_8A0C32D4:
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
	// bl 0x8a0c35d0
	ctx.lr = 0x8A0C32EC;
	sub_8A0C35D0(ctx, base);
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
	// bl 0x8a0c35d0
	ctx.lr = 0x8A0C330C;
	sub_8A0C35D0(ctx, base);
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
	// bl 0x8a0c6f40
	ctx.lr = 0x8A0C3324;
	sub_8A0C6F40(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8a0c6f58
	ctx.lr = 0x8A0C332C;
	sub_8A0C6F58(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8a0c3344
	if (!ctx.cr0.eq) goto loc_8A0C3344;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// beq cr6,0x8a0c3344
	if (ctx.cr6.eq) goto loc_8A0C3344;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8a0c35c0
	ctx.lr = 0x8A0C3344;
	sub_8A0C35C0(ctx, base);
loc_8A0C3344:
	// addi r1,r1,2832
	ctx.r1.s64 = ctx.r1.s64 + 2832;
	// b 0x8a0c239c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8A0C3CE8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8a0c233c
	ctx.lr = 0x8A0C3CF0;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,56(r4)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 56);
	// addi r25,r4,56
	ctx.r25.s64 = ctx.r4.s64 + 56;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8a0c3d50
	if (ctx.cr6.eq) goto loc_8A0C3D50;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
loc_8A0C3D1C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8a0c3d3c
	if (ctx.cr6.lt) goto loc_8A0C3D3C;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8a0c3d5c
	if (ctx.cr6.eq) goto loc_8A0C3D5C;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8a0c3d5c
	if (ctx.cr6.eq) goto loc_8A0C3D5C;
loc_8A0C3D3C:
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// lwz r31,0(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8a0c3d1c
	if (!ctx.cr6.eq) goto loc_8A0C3D1C;
loc_8A0C3D50:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8A0C3D54:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8a0c238c
	__restgprlr_25(ctx, base);
	return;
loc_8A0C3D5C:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,1412(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1412);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x8a0c3d84
	if (ctx.cr6.eq) goto loc_8A0C3D84;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bctrl 
	ctx.lr = 0x8A0C3D80;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8a0c3da0
	goto loc_8A0C3DA0;
loc_8A0C3D84:
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// lwz r7,1424(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 1424);
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,4096
	ctx.r5.u64 = ctx.r5.u64 | 4096;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8a0cac28
	ctx.lr = 0x8A0C3DA0;
	__imp__NtAllocateVirtualMemory(ctx, base);
loc_8A0C3DA0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8a0c3d50
	if (ctx.cr6.lt) goto loc_8A0C3D50;
	// lhz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r28.u32 + 0);
	// lwz r10,48(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r9,28(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// stw r11,48(r30)
	REX_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8a0c3dcc
	if (!ctx.cr6.eq) goto loc_8A0C3DCC;
	// stw r26,28(r30)
	REX_STORE_U32(ctx.r30.u32 + 28, ctx.r26.u32);
loc_8A0C3DCC:
	// lwz r11,64(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 64);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lbz r10,5(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8a0c3dfc
	if (ctx.cr0.eq) goto loc_8A0C3DFC;
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rotlwi r10,r10,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8a0c3e68
	if (ctx.cr6.eq) goto loc_8A0C3E68;
loc_8A0C3DFC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8a0c3e0c
	if (!ctx.cr6.eq) goto loc_8A0C3E0C;
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// b 0x8a0c3e18
	goto loc_8A0C3E18;
loc_8A0C3E0C:
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8A0C3E18:
	// lbz r10,5(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8a0c3e68
	if (!ctx.cr0.eq) goto loc_8A0C3E68;
	// lwz r9,44(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
loc_8A0C3E28:
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rotlwi r10,r10,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8a0c3e5c
	if (!ctx.cr6.lt) goto loc_8A0C3E5C;
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8a0c3e5c
	if (ctx.cr0.eq) goto loc_8A0C3E5C;
	// lbz r10,5(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8a0c3e28
	if (ctx.cr0.eq) goto loc_8A0C3E28;
	// b 0x8a0c3e68
	goto loc_8A0C3E68;
loc_8A0C3E5C:
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8a0c3d50
	if (!ctx.cr6.eq) goto loc_8A0C3D50;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8A0C3E68:
	// lbz r10,5(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// andi. r10,r10,239
	ctx.r10.u64 = ctx.r10.u64 & 239;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r10,5(r11)
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r10.u8);
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,0(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// subf. r10,r10,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bne 0x8a0c3ef8
	if (!ctx.cr0.eq) goto loc_8A0C3EF8;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,44(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8a0c3eb8
	if (!ctx.cr6.eq) goto loc_8A0C3EB8;
	// li r10,16
	ctx.r10.s64 = 16;
	// stb r10,5(r3)
	REX_STORE_U8(ctx.r3.u32 + 5, ctx.r10.u8);
	// stw r3,64(r30)
	REX_STORE_U32(ctx.r30.u32 + 64, ctx.r3.u32);
	// b 0x8a0c3ec4
	goto loc_8A0C3EC4;
loc_8A0C3EB8:
	// stb r26,5(r3)
	REX_STORE_U8(ctx.r3.u32 + 5, ctx.r26.u8);
	// lwz r10,40(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// stw r10,64(r30)
	REX_STORE_U32(ctx.r30.u32 + 64, ctx.r10.u32);
loc_8A0C3EC4:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// lwz r10,24(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r10,76(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 76);
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r10,24(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// stw r31,76(r10)
	REX_STORE_U32(ctx.r10.u32 + 76, ctx.r31.u32);
	// stw r26,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r26.u32);
	// stw r26,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// lwz r10,52(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,52(r30)
	REX_STORE_U32(ctx.r30.u32 + 52, ctx.r10.u32);
	// b 0x8a0c3f04
	goto loc_8A0C3F04;
loc_8A0C3EF8:
	// li r10,16
	ctx.r10.s64 = 16;
	// stb r10,5(r3)
	REX_STORE_U8(ctx.r3.u32 + 5, ctx.r10.u8);
	// stw r3,64(r30)
	REX_STORE_U32(ctx.r30.u32 + 64, ctx.r3.u32);
loc_8A0C3F04:
	// lbz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r9,5(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 5);
	// rlwinm. r9,r9,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stb r10,4(r3)
	REX_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r10,r10,28,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFF;
	// sth r10,0(r3)
	REX_STORE_U16(ctx.r3.u32 + 0, ctx.r10.u16);
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// sth r11,2(r3)
	REX_STORE_U16(ctx.r3.u32 + 2, ctx.r11.u16);
	// bne 0x8a0c3f3c
	if (!ctx.cr0.eq) goto loc_8A0C3F3C;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// rotlwi r11,r10,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
loc_8A0C3F3C:
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8a0c3d54
	if (!ctx.cr6.eq) goto loc_8A0C3D54;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// b 0x8a0c3f68
	goto loc_8A0C3F68;
loc_8A0C3F50:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,28(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8a0c3f64
	if (ctx.cr6.lt) goto loc_8A0C3F64;
	// stw r10,28(r30)
	REX_STORE_U32(ctx.r30.u32 + 28, ctx.r10.u32);
loc_8A0C3F64:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_8A0C3F68:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8a0c3f50
	if (!ctx.cr6.eq) goto loc_8A0C3F50;
	// b 0x8a0c3d54
	goto loc_8A0C3D54;
}

DEFINE_REX_FUNC(sub_8A0C7150) {
	REX_FUNC_PROLOGUE();
	// lhz r4,0(r3)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x8a0c7160
	sub_8A0C7160(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8A0C7160) {
	REX_FUNC_PROLOGUE();
	// twi 31,r0,20
	ppc_trap(ctx, base, 20);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8A0C7200) {
	REX_FUNC_PROLOGUE();
	// b 0x8a0c7168
	sub_8A0C7168(ctx, base);
	return;
}

DEFINE_REX_FUNC(__savefpr_14) {
	REX_FUNC_PROLOGUE();
	// stfd f14,-144(r12)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r12.u32 + -144, ctx.f14.u64);
	// stfd f15,-136(r12)
	REX_STORE_U64(ctx.r12.u32 + -136, ctx.f15.u64);
	// stfd f16,-128(r12)
	REX_STORE_U64(ctx.r12.u32 + -128, ctx.f16.u64);
	// stfd f17,-120(r12)
	REX_STORE_U64(ctx.r12.u32 + -120, ctx.f17.u64);
	// stfd f18,-112(r12)
	REX_STORE_U64(ctx.r12.u32 + -112, ctx.f18.u64);
	// stfd f19,-104(r12)
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

DEFINE_REX_FUNC(__savefpr_17) {
	REX_FUNC_PROLOGUE();
	// stfd f17,-120(r12)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r12.u32 + -120, ctx.f17.u64);
	// stfd f18,-112(r12)
	REX_STORE_U64(ctx.r12.u32 + -112, ctx.f18.u64);
	// stfd f19,-104(r12)
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

DEFINE_REX_FUNC(__savefpr_24) {
	REX_FUNC_PROLOGUE();
	// stfd f24,-64(r12)
	ctx.fpscr.disableFlushMode();
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

DEFINE_REX_FUNC(__savefpr_31) {
	REX_FUNC_PROLOGUE();
	// stfd f31,-8(r12)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r12.u32 + -8, ctx.f31.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(__restfpr_16) {
	REX_FUNC_PROLOGUE();
	// lfd f16,-128(r12)
	ctx.fpscr.disableFlushMode();
	ctx.f16.u64 = REX_LOAD_U64(ctx.r12.u32 + -128);
	// lfd f17,-120(r12)
	ctx.f17.u64 = REX_LOAD_U64(ctx.r12.u32 + -120);
	// lfd f18,-112(r12)
	ctx.f18.u64 = REX_LOAD_U64(ctx.r12.u32 + -112);
	// lfd f19,-104(r12)
	ctx.f19.u64 = REX_LOAD_U64(ctx.r12.u32 + -104);
	// lfd f20,-96(r12)
	ctx.f20.u64 = REX_LOAD_U64(ctx.r12.u32 + -96);
	// lfd f21,-88(r12)
	ctx.f21.u64 = REX_LOAD_U64(ctx.r12.u32 + -88);
	// lfd f22,-80(r12)
	ctx.f22.u64 = REX_LOAD_U64(ctx.r12.u32 + -80);
	// lfd f23,-72(r12)
	ctx.f23.u64 = REX_LOAD_U64(ctx.r12.u32 + -72);
	// lfd f24,-64(r12)
	ctx.f24.u64 = REX_LOAD_U64(ctx.r12.u32 + -64);
	// lfd f25,-56(r12)
	ctx.f25.u64 = REX_LOAD_U64(ctx.r12.u32 + -56);
	// lfd f26,-48(r12)
	ctx.f26.u64 = REX_LOAD_U64(ctx.r12.u32 + -48);
	// lfd f27,-40(r12)
	ctx.f27.u64 = REX_LOAD_U64(ctx.r12.u32 + -40);
	// lfd f28,-32(r12)
	ctx.f28.u64 = REX_LOAD_U64(ctx.r12.u32 + -32);
	// lfd f29,-24(r12)
	ctx.f29.u64 = REX_LOAD_U64(ctx.r12.u32 + -24);
	// lfd f30,-16(r12)
	ctx.f30.u64 = REX_LOAD_U64(ctx.r12.u32 + -16);
	// lfd f31,-8(r12)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r12.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(__restfpr_25) {
	REX_FUNC_PROLOGUE();
	// lfd f25,-56(r12)
	ctx.fpscr.disableFlushMode();
	ctx.f25.u64 = REX_LOAD_U64(ctx.r12.u32 + -56);
	// lfd f26,-48(r12)
	ctx.f26.u64 = REX_LOAD_U64(ctx.r12.u32 + -48);
	// lfd f27,-40(r12)
	ctx.f27.u64 = REX_LOAD_U64(ctx.r12.u32 + -40);
	// lfd f28,-32(r12)
	ctx.f28.u64 = REX_LOAD_U64(ctx.r12.u32 + -32);
	// lfd f29,-24(r12)
	ctx.f29.u64 = REX_LOAD_U64(ctx.r12.u32 + -24);
	// lfd f30,-16(r12)
	ctx.f30.u64 = REX_LOAD_U64(ctx.r12.u32 + -16);
	// lfd f31,-8(r12)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r12.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8A0C72A8) {
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
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x8a0c80b8
	ctx.lr = 0x8A0C72C8;
	sub_8A0C80B8(ctx, base);
	// cmpwi cr6,r3,101
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 101, ctx.xer);
	// beq cr6,0x8a0c72e0
	if (ctx.cr6.eq) goto loc_8A0C72E0;
loc_8A0C72D0:
	// lbzu r3,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r3.u64 = REX_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// bl 0x8a0c8098
	ctx.lr = 0x8A0C72D8;
	sub_8A0C8098(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8a0c72d0
	if (!ctx.cr0.eq) goto loc_8A0C72D0;
loc_8A0C72E0:
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x8a0c80b8
	ctx.lr = 0x8A0C72EC;
	sub_8A0C80B8(ctx, base);
	// cmpwi cr6,r3,120
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 120, ctx.xer);
	// bne cr6,0x8a0c72f8
	if (!ctx.cr6.eq) goto loc_8A0C72F8;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
loc_8A0C72F8:
	// lis r11,-30195
	ctx.r11.s64 = -1978859520;
	// lbz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 0);
	// lwz r11,1400(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1400);
	// lwz r9,188(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 188);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lbz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// stb r9,0(r31)
	REX_STORE_U8(ctx.r31.u32 + 0, ctx.r9.u8);
loc_8A0C7318:
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// stb r10,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// lbzu r8,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne 0x8a0c7318
	if (!ctx.cr0.eq) goto loc_8A0C7318;
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

DEFINE_REX_FUNC(sub_8A0C7FE8) {
	REX_FUNC_PROLOGUE();
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// cmpwi cr6,r11,101
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 101, ctx.xer);
	// beq cr6,0x8a0c8034
	if (ctx.cr6.eq) goto loc_8A0C8034;
	// cmpwi cr6,r11,69
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 69, ctx.xer);
	// beq cr6,0x8a0c8034
	if (ctx.cr6.eq) goto loc_8A0C8034;
	// cmpwi cr6,r11,102
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 102, ctx.xer);
	// bne cr6,0x8a0c8014
	if (!ctx.cr6.eq) goto loc_8A0C8014;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x8a0c7d98
	sub_8A0C7D98(ctx, base);
	return;
loc_8A0C8014:
	// cmpwi cr6,r11,97
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 97, ctx.xer);
	// beq cr6,0x8a0c802c
	if (ctx.cr6.eq) goto loc_8A0C802C;
	// cmpwi cr6,r11,65
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 65, ctx.xer);
	// beq cr6,0x8a0c802c
	if (ctx.cr6.eq) goto loc_8A0C802C;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x8a0c7e68
	sub_8A0C7E68(ctx, base);
	return;
loc_8A0C802C:
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x8a0c77d0
	sub_8A0C77D0(ctx, base);
	return;
loc_8A0C8034:
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x8a0c76e0
	sub_8A0C76E0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8A0C8380) {
	REX_FUNC_PROLOGUE();
	// lhz r8,0(r4)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// lwz r7,0(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm. r11,r8,28,21,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0x7FF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r9,4(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm r6,r8,0,0,16
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFF8000;
	// clrlwi r7,r7,12
	ctx.r7.u64 = ctx.r7.u32 & 0xFFFFF;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// beq 0x8a0c83bc
	if (ctx.cr0.eq) goto loc_8A0C83BC;
	// cmpwi cr6,r11,2047
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2047, ctx.xer);
	// beq cr6,0x8a0c83b4
	if (ctx.cr6.eq) goto loc_8A0C83B4;
	// addi r11,r11,15360
	ctx.r11.s64 = ctx.r11.s64 + 15360;
	// b 0x8a0c83e8
	goto loc_8A0C83E8;
loc_8A0C83B4:
	// li r11,32767
	ctx.r11.s64 = 32767;
	// b 0x8a0c83ec
	goto loc_8A0C83EC;
loc_8A0C83BC:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8a0c83e0
	if (!ctx.cr6.eq) goto loc_8A0C83E0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8a0c83e0
	if (!ctx.cr6.eq) goto loc_8A0C83E0;
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r6,0(r3)
	REX_STORE_U16(ctx.r3.u32 + 0, ctx.r6.u16);
	// stw r11,2(r3)
	REX_STORE_U32(ctx.r3.u32 + 2, ctx.r11.u32);
	// stw r11,6(r3)
	REX_STORE_U32(ctx.r3.u32 + 6, ctx.r11.u32);
	// blr 
	return;
loc_8A0C83E0:
	// addi r11,r11,15361
	ctx.r11.s64 = ctx.r11.s64 + 15361;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8A0C83E8:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
loc_8A0C83EC:
	// rlwinm r8,r9,11,21,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 11) & 0x7FF;
	// rlwinm r7,r7,11,0,20
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 11) & 0xFFFFF800;
	// rlwinm r9,r9,11,0,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 11) & 0xFFFFF800;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stw r9,6(r3)
	REX_STORE_U32(ctx.r3.u32 + 6, ctx.r9.u32);
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// rlwinm. r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,2(r3)
	REX_STORE_U32(ctx.r3.u32 + 2, ctx.r10.u32);
	// bne 0x8a0c844c
	if (!ctx.cr0.eq) goto loc_8A0C844C;
loc_8A0C8410:
	// lwz r10,6(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 6);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r9,2(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 2);
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// stw r10,6(r3)
	REX_STORE_U32(ctx.r3.u32 + 6, ctx.r10.u32);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,2(r3)
	REX_STORE_U32(ctx.r3.u32 + 2, ctx.r9.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// beq 0x8a0c8410
	if (ctx.cr0.eq) goto loc_8A0C8410;
loc_8A0C844C:
	// clrlwi r10,r6,16
	ctx.r10.u64 = ctx.r6.u32 & 0xFFFF;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,0(r3)
	REX_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// blr 
	return;
}

