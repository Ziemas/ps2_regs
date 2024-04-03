#ifndef GS_H_
#define GS_H_

#include "util.h"

#define GS_NOINTERLACE 0
#define GS_INTERLACE   1

#define GS_FIELD 0
#define GS_FRAME 1

#define GS_PRIM_POINT     0
#define GS_PRIM_LINE      1
#define GS_PRIM_LINESTRIP 2
#define GS_PRIM_TRI       3
#define GS_PRIM_TRISTRIP  4
#define GS_PRIM_TRIFAN    5
#define GS_PRIM_SPRITE    6

#define GS_PSMCT32  0
#define GS_PSMCT24  1
#define GS_PSMCT16  2
#define GS_PSMCT16S 10
#define GS_PSMT8    19
#define GS_PSMT4    20
#define GS_PSMT8H   27
#define GS_PSMT4HL  36
#define GS_PSMT4HH  44
#define GS_PSMZ32   48
#define GS_PSMZ24   49
#define GS_PSMZ16   50
#define GS_PSMZ16S  58

#define GS_MODULATE   0
#define GS_DECAL      1
#define GS_HILIGHT    2
#define GS_HIGHLIGHT2 3

#define GS_REPEAT        0
#define GS_CLAMP         1
#define GS_REGION_CLAMP  2
#define GS_REGION_REPEAT 3

#define GS_DEPTH_NEVER   0
#define GS_DEPTH_ALWAYS  1
#define GS_DEPTH_GEQUAL  2
#define GS_DEPTH_GREATER 3

#define GS_ALPHA_NEVER    0
#define GS_ALPHA_ALWAYS   1
#define GS_ALPHA_LESS     2
#define GS_ALPHA_LEQUAL   3
#define GS_ALPHA_EQUAL    4
#define GS_ALPHA_GEQUAL   5
#define GS_ALPHA_GREATER  6
#define GS_ALPHA_NOTEQUAL 7

#define GS_AFAIL_KEEP     0
#define GS_AFAIL_FB_ONLY  1
#define GS_AFAIL_ZB_ONLY  2
#define GS_AFAIL_RGB_ONLY 3

#define GS_ALPHA_CS   0
#define GS_ALPHA_CD   1
#define GS_ALPHA_ZERO 2
#define GS_ALPHA_AS   0
#define GS_ALPHA_AD   1
#define GS_ALPHA_FIX  2

/* Priviledged registers */
#define GS_R_PMODE    0x12000000
#define GS_R_SMODE2   0x12000020
#define GS_R_DISPFB1  0x12000070
#define GS_R_DISPLAY1 0x12000080
#define GS_R_DISPFB2  0x12000090
#define GS_R_DISPLAY2 0x120000a0
#define GS_R_EXTBUF   0x120000b0
#define GS_R_EXTDATA  0x120000c0
#define GS_R_EXTWRITE 0x120000d0
#define GS_R_BGCOLOR  0x120000e0
#define GS_R_CSR      0x12001000
#define GS_R_IMR      0x12001010
#define GS_R_BUSDIR   0x12001040
#define GS_R_SIGLBLID 0x12001080

/* General purpose registers */
#define GS_R_PRIM       0x00
#define GS_R_RGBAQ      0x01
#define GS_R_ST         0x02
#define GS_R_UV         0x03
#define GS_R_XYZF2      0x04
#define GS_R_XYZ2       0x05
#define GS_R_TEX0_1     0x06
#define GS_R_TEX0_2     0x07
#define GS_R_CLAMP_1    0x08
#define GS_R_CLAMP_2    0x09
#define GS_R_FOG        0x0a
#define GS_R_XYZF3      0x0c
#define GS_R_XYZ3       0x0d
#define GS_R_TEX1_1     0x14
#define GS_R_TEX1_2     0x15
#define GS_R_TEX2_1     0x16
#define GS_R_TEX2_2     0x17
#define GS_R_XYOFFSET_1 0x18
#define GS_R_XYOFFSET_2 0x19
#define GS_R_PRMODECONT 0x1a
#define GS_R_PRMODE     0x1b
#define GS_R_TEXCLUT    0x1c
#define GS_R_SCANMSK    0x22
#define GS_R_MIPTBP1_1  0x34
#define GS_R_MIPTBP1_2  0x35
#define GS_R_MIPTBP2_1  0x36
#define GS_R_MIPTBP2_2  0x37
#define GS_R_TEXA       0x3b
#define GS_R_FOGCOL     0x3d
#define GS_R_TEXFLUSH   0x3f
#define GS_R_SCISSOR_1  0x40
#define GS_R_SCISSOR_2  0x41
#define GS_R_ALPHA_1    0x42
#define GS_R_ALPHA_2    0x43
#define GS_R_DIMX       0x44
#define GS_R_DTHE       0x45
#define GS_R_COLCLAMP   0x46
#define GS_R_TEST_1     0x47
#define GS_R_TEST_2     0x48
#define GS_R_PABE       0x49
#define GS_R_FBA_1      0x4a
#define GS_R_FBA_2      0x4b
#define GS_R_FRAME_1    0x4c
#define GS_R_FRAME_2    0x4d
#define GS_R_ZBUF_1     0x4e
#define GS_R_ZBUF_2     0x4f
#define GS_R_BITBLTBUF  0x50
#define GS_R_TRXPOS     0x51
#define GS_R_TRXREG     0x52
#define GS_R_TRXDIR     0x53
#define GS_R_HWREG      0x54
#define GS_R_SIGNAL     0x60
#define GS_R_FINISH     0x61
#define GS_R_LABEL      0x62

/* PRIM Fields */
#define GS_PRIM_FIX  BIT(10)
#define GS_PRIM_CTXT BIT(9)
#define GS_PRIM_FST  BIT(8)
#define GS_PRIM_AA1  BIT(7)
#define GS_PRIM_ABE  BIT(6)
#define GS_PRIM_FGE  BIT(5)
#define GS_PRIM_TME  BIT(4)
#define GS_PRIM_IIP  BIT(3)
#define GS_PRIM_PRIM GENMASK(2, 0)

/* RGBAQ Fields */
#define GS_RGBAQ_Q GENMASK(63, 32)
#define GS_RGBAQ_A GENMASK(31, 24)
#define GS_RGBAQ_B GENMASK(23, 16)
#define GS_RGBAQ_G GENMASK(15, 8)
#define GS_RGBAQ_R GENMASK(7, 0)

/* ST Fields */
#define GS_ST_T GENMASK(63, 32)
#define GS_ST_S GENMASK(31, 0)

/* UV Fields */
#define GS_UV_V GENMASK(29, 16)
#define GS_UV_U GENMASK(13, 0)

/* XYZF2/3 Fields */
#define GS_XYZF_F GENMASK(63, 56)
#define GS_XYZF_Z GENMASK(55, 32)
#define GS_XYZF_Y GENMASK(31, 16)
#define GS_XYZF_X GENMASK(15, 0)

/* XYZ2/3 Fields */
#define GS_XYZ_Z GENMASK(63, 32)
#define GS_XYZ_Y GENMASK(31, 16)
#define GS_XYZ_X GENMASK(15, 0)

/* TEX0 Fields */
#define GS_TEX0_CLD  GENMASK(63, 61)
#define GS_TEX0_CSA  GENMASK(60, 56)
#define GS_TEX0_CSM  BIT(55)
#define GS_TEX0_CPSM GENMASK(54, 51)
#define GS_TEX0_CBP  GENMASK(50, 37)
#define GS_TEX0_TFX  GENMASK(36, 35)
#define GS_TEX0_TCC  BIT(34)
#define GS_TEX0_TH   GENMASK(33, 30)
#define GS_TEX0_TW   GENMASK(29, 26)
#define GS_TEX0_PSM  GENMASK(25, 20)
#define GS_TEX0_TBW  GENMASK(19, 14)
#define GS_TEX0_TBP0 GENMASK(13, 0)

/* CLAMP Fields */
#define GS_CLAMP_MAXV GENMASK(43, 34)
#define GS_CLAMP_MINV GENMASK(33, 24)
#define GS_CLAMP_MAXU GENMASK(23, 14)
#define GS_CLAMP_MINU GENMASK(13, 4)
#define GS_CLAMP_WMT  GENMASK(3, 2)
#define GS_CLAMP_WMS  GENMASK(1, 0)

/* FOG Fields */
#define GS_FOG_F GENMASK(63, 56)

/* TEX1 Fields */
#define GS_TEX1_K    GENMASK(43, 32)
#define GS_TEX1_L    GENMASK(20, 19)
#define GS_TEX1_MTBA BIT(9)
#define GS_TEX1_MMIN GENMASK(8, 6)
#define GS_TEX1_MMAG BIT(5)
#define GS_TEX1_MXL  GENMASK(4, 2)
#define GS_TEX1_LCM  BIT(0)

/* TEX2 Fields */
#define GS_TEX2_CLD  GENMASK(63, 61)
#define GS_TEX2_CSA  GENMASK(60, 56)
#define GS_TEX2_CSM  BIT(55)
#define GS_TEX2_CPSM GENMASK(54, 51)
#define GS_TEX2_CBP  GENMASK(50, 37)
#define GS_TEX2_PSM  GENMASK(25, 20)

/* XYZOFFSET Fields */
#define GS_XYOFFSET_OFY GENMASK(47, 32)
#define GS_XYOFFSET_OFX GENMASK(15, 0)

/* PRMODECONT Fields */
#define GS_PRMODECONT_AC BIT(0)

/* PRMODE Fields */
#define GS_PRMODE_FIX  BIT(10)
#define GS_PRMODE_CTXT BIT(9)
#define GS_PRMODE_FST  BIT(8)
#define GS_PRMODE_AA1  BIT(7)
#define GS_PRMODE_ABE  BIT(6)
#define GS_PRMODE_FGE  BIT(5)
#define GS_PRMODE_TME  BIT(4)
#define GS_PRMODE_IIP  BIT(3)

/* TEXCLUT Fields */
#define GS_TEXCLUT_COV GENMASK(21, 12)
#define GS_TEXCLUT_COU GENMASK(11, 6)
#define GS_TEXCLUT_CBW GENMASK(5, 0)

/* SCANMSK Fields */
#define GS_SCANMSK_MSK GENMASK(1, 0)

/* MIPTBP1 Fields */
#define GS_MIPTBP1_TBW3 GENMASK(59, 54)
#define GS_MIPTBP1_TBP3 GENMASK(53, 40)
#define GS_MIPTBP1_TBW2 GENMASK(39, 34)
#define GS_MIPTBP1_TBP2 GENMASK(33, 20)
#define GS_MIPTBP1_TBW1 GENMASK(19, 14)
#define GS_MIPTBP1_TBP1 GENMASK(13, 0)

/* MIPTBP2 Fields */
#define GS_MIPTBP2_TBW6 GENMASK(59, 54)
#define GS_MIPTBP2_TBP6 GENMASK(53, 40)
#define GS_MIPTBP2_TBW5 GENMASK(39, 34)
#define GS_MIPTBP2_TBP5 GENMASK(33, 20)
#define GS_MIPTBP2_TBW4 GENMASK(19, 14)
#define GS_MIPTBP2_TBP4 GENMASK(13, 0)

/* TEXA Fields */
#define GS_TEXA_TA1 GENMASK(39, 32)
#define GS_TEXA_AEM BIT(15)
#define GS_TEXA_TA0 GENMASK(7, 0)

/* FOGCOL Fields */
#define GS_FOGCOL_FCB GENMASK(23, 16)
#define GS_FOGCOL_FCG GENMASK(15, 8)
#define GS_FOGCOL_FCR GENMASK(7, 0)

/* SCISSOR Fields */
#define GS_SCISSOR_SCAY1 GENMASK(58, 48)
#define GS_SCISSOR_SCAY0 GENMASK(42, 32)
#define GS_SCISSOR_SCAX1 GENMASK(26, 16)
#define GS_SCISSOR_SCAX0 GENMASK(10, 0)

/* ALPHA Fields */
#define GS_ALPHA_FIX GENMASK(39, 32)
#define GS_ALPHA_D   GENMASK(7, 6)
#define GS_ALPHA_C   GENMASK(5, 4)
#define GS_ALPHA_B   GENMASK(3, 2)
#define GS_ALPHA_A   GENMASK(1, 0)

/* DTHE Fields */
#define GS_DTHE_DTHE BIT(0)

/* COLCLAMP Fields */
#define GS_COLCLAMP_CLAMP BIT(0)

/* TEST Fields */
#define GS_TEST_ZTST  GENMASK(18, 17)
#define GS_TEST_ZTE   BIT(16)
#define GS_TEST_DATM  BIT(15)
#define GS_TEST_DATE  BIT(14)
#define GS_TEST_AFAIL GENMASK(13, 12)
#define GS_TEST_AREF  GENMASK(11, 4)
#define GS_TEST_ATST  GENMASK(3, 1)
#define GS_TEST_ATE   BIT(0)

/* PABE  Fields */
#define GS_PABE_PABE BIT(0)

/* FBA Fields */
#define GS_FBA_FBA BIT(0)

/* FRAME Fields */
#define GS_FRAME_FBMSK GENMASK(63, 32)
#define GS_FRAME_PSM   GENMASK(29, 24)
#define GS_FRAME_FBW   GENMASK(21, 16)
#define GS_FRAME_FBP   GENMASK(8, 0)

/* ZBUF Fields */
#define GS_ZBUF_ZMSK BIT(32)
#define GS_ZBUF_PSM  GENMASK(27, 24)
#define GS_ZBUF_ZBP  GENMASK(8, 0)

/* BITBLTBUF Fields */
#define GS_BITBLTBUF_DPSM GENMASK(61, 56)
#define GS_BITBLTBUF_DBW  GENMASK(53, 48)
#define GS_BITBLTBUF_DBP  GENMASK(45, 32)
#define GS_BITBLTBUF_SPSM GENMASK(29, 24)
#define GS_BITBLTBUF_SBW  GENMASK(21, 16)
#define GS_BITBLTBUF_SBP  GENMASK(13, 0)

/* TRXPOS Fields */
#define GS_TRXPOS_DIR  GENMASK(60, 59)
#define GS_TRXPOS_DSAY GENMASK(58, 48)
#define GS_TRXPOS_DSAX GENMASK(42, 32)
#define GS_TRXPOS_SSAY GENMASK(26, 16)
#define GS_TRXPOS_SSAX GENMASK(10, 0)

/* TRXREG Fields */
#define GS_TRXREG_RRH GENMASK(43, 32)
#define GS_TRXREG_RRW GENMASK(11, 0)

/* TRXDIR Fields */
#define GS_TRXDIR_XDIR GENMASK(1, 0)

/* SIGNAL Fields */
#define GS_SIGNAL_ID    GENMASK(31, 0)
#define GS_SIGNAL_IDMSK GENMASK(63, 32)

/* LABEL Fields */
#define GS_LABEL_ID    GENMASK(31, 0)
#define GS_LABEL_IDMSK GENMASK(63, 32)

/* PMODE Fields */
#define GS_PMODE_ALP   GENMASK(15, 8)
#define GS_PMODE_SLBG  BIT(7)
#define GS_PMODE_AMOD  BIT(6)
#define GS_PMODE_MMOD  BIT(5)
#define GS_PMODE_CRTMD GENMASK(4, 2)
#define GS_PMODE_EN2   BIT(1)
#define GS_PMODE_EN1   BIT(0)

/* SMODE2 Fields */
#define GS_SMODE2_DPMS GENMASK(3, 2)
#define GS_SMODE2_FFMD BIT(1)
#define GS_SMODE2_INT  BIT(0)

/* DISPFB Fields */
#define GS_DISPFB2_DBY GENMASK(53, 42)
#define GS_DISPFB2_DBX GENMASK(42, 32)
#define GS_DISPFB2_PSM GENMASK(19, 15)
#define GS_DISPFB2_FBW GENMASK(14, 9)
#define GS_DISPFB2_FBP GENMASK(8, 0)

/* DISPLAY Fields */
#define GS_DISPLAY_DH   GENMASK(54, 44)
#define GS_DISPLAY_DW   GENMASK(43, 32)
#define GS_DISPLAY_MAGV GENMASK(28, 27)
#define GS_DISPLAY_MAGH GENMASK(26, 23)
#define GS_DISPLAY_DY   GENMASK(22, 12)
#define GS_DISPLAY_DX   GENMASK(11, 0)

/* EXTBUF Fields */
#define GS_EXTBUF_WDY   GENMASK(53, 43)
#define GS_EXTBUF_WDX   GENMASK(42, 32)
#define GS_EXTBUF_EMODC GENMASK(26, 25)
#define GS_EXTBUF_EMODA GENMASK(24, 23)
#define GS_EXTBUF_WFFMD BIT(22)
#define GS_EXTBUF_FBIN  GENMASK(21, 20)
#define GS_EXTBUF_EXBW  GENMASK(19, 14)
#define GS_EXTBUF_EXBP  GENMASK(13, 0)

/* EXTDATA Fields */
#define GS_EXTDATA_WH   GENMASK(54, 44)
#define GS_EXTDATA_WW   GENMASK(43, 32)
#define GS_EXTDATA_SMPV GENMASK(28, 27)
#define GS_EXTDATA_SMPH GENMASK(26, 23)
#define GS_EXTDATA_SY   GENMASK(22, 12)
#define GS_EXTDATA_SX   GENMASK(11, 0)

/* EXTWRITE Fields */
#define GS_EXTWRITE_WRITE BIT(0)

/* BGCOLOR Fields */
#define GS_BGCOLOR_B GENMASK(23, 16)
#define GS_BGCOLOR_G GENMASK(15, 8)
#define GS_BGCOLOR_R GENMASK(7, 0)

/* CSR Fields */
#define GS_CSR_ID     GENMASK(31, 24)
#define GS_CSR_REV    GENMASK(23, 16)
#define GS_CSR_FIFO   GENMASK(15, 14)
#define GS_CSR_FIELD  BIT(13)
#define GS_CSR_NFIELD BIT(12)
#define GS_CSR_RESET  BIT(9)
#define GS_CSR_FLUSH  BIT(8)
#define GS_CSR_EDWINT BIT(4)
#define GS_CSR_VSINT  BIT(3)
#define GS_CSR_HSINT  BIT(2)
#define GS_CSR_FINISH BIT(1)
#define GS_CSR_SIGNAL BIT(0)

/* IMR Fields */
#define GS_IMR_EDWMSK    BIT(12)
#define GS_IMR_VSMSK     BIT(11)
#define GS_IMR_HSMSK     BIT(10)
#define GS_IMR_FINISHMSK BIT(9)
#define GS_IMR_SIGMSK    BIT(8)

/* BUSDIR Fields */
#define GS_BUSDIR_DIR BIT(0)

/* SIGLBLID Fields */
#define GS_SIGLBLID_LBLID GENMASK(63, 32)
#define GS_SIGLBLID_SIGID GENMASK(31, 0)

#define GS_SET_PRIM(prim, iip, tme, fge, abe, aa1, fst, ctxt, fix)              \
        (FIELD_PREP(GS_PRIM_PRIM, (prim)) | FIELD_PREP(GS_PRIM_IIP, (iip)) |    \
            FIELD_PREP(GS_PRIM_TME, (tme)) | FIELD_PREP(GS_PRIM_FGE, (fge)) |   \
            FIELD_PREP(GS_PRIM_ABE, (abe)) | FIELD_PREP(GS_PRIM_AA1, (aa1)) |   \
            FIELD_PREP(GS_PRIM_FST, (fst)) | FIELD_PREP(GS_PRIM_CTXT, (ctxt)) | \
            FIELD_PREP(GS_PRIM_FIX, (fix)))

#define GS_SET_RGBAQ(r, g, b, a, q)                                                                \
        (FIELD_PREP(GS_RGBAQ_R, (r)) | FIELD_PREP(GS_RGBAQ_G, (g)) | FIELD_PREP(GS_RGBAQ_B, (b)) | \
            FIELD_PREP(GS_RGBAQ_A, (a)) | FIELD_PREP(GS_RGBAQ_Q, (q)))

#define GS_SET_ST(s, t) (FIELD_PREP(GS_ST_S, (s)) | FIELD_PREP(GS_ST_T, (t)))
#define GS_SET_UV(u, v) (FIELD_PREP(GS_UV_U, (u)) | FIELD_PREP(GS_UV_V, (v)))

#define GS_SET_XYZF(x, y, z, f)                                                                 \
        (FIELD_PREP(GS_XYZF_X, (x)) | FIELD_PREP(GS_XYZF_Y, (y)) | FIELD_PREP(GS_XYZF_Z, (z)) | \
            FIELD_PREP(GS_XYZF_F, (f)))

#define GS_SET_XYZ(x, y, z) \
        (FIELD_PREP(GS_XYZ_X, (x)) | FIELD_PREP(GS_XYZ_Y, (y)) | FIELD_PREP(GS_XYZ_Z, (z)))

#define GS_SET_TEX0(tbp, tbw, psm, tw, th, tcc, tfx, cbp, cpsm, csm, csa, cld)  \
        (FIELD_PREP(GS_TEX0_TBP, (tbp)) | FIELD_PREP(GS_TEX0_TBW, (tbw)) |      \
            FIELD_PREP(GS_TEX0_PSM, (psm)) | FIELD_PREP(GS_TEX0_TW, (tw)) |     \
            FIELD_PREP(GS_TEX0_TH, (th)) | FIELD_PREP(GS_TEX0_TCC, (tcc)) |     \
            FIELD_PREP(GS_TEX0_TFX, (tfx)) | FIELD_PREP(GS_TEX0_CBP, (cbp)) |   \
            FIELD_PREP(GS_TEX0_CPSM, (cpsm)) | FIELD_PREP(GS_TEX0_CSM, (csm)) | \
            FIELD_PREP(GS_TEX0_CSA, (csa)) | FIELD_PREP(GS_TEX0_CLD, (cld)))

#define GS_SET_CLAMP(wms, wmt, minu, maxu, minv, maxv)                              \
        (FIELD_PREP(GS_CLAMP_WMS, (wms)) | FIELD_PREP(GS_CLAMP_WMT, (wmt)) |        \
            FIELD_PREP(GS_CLAMP_MINU, (minu)) | FIELD_PREP(GS_CLAMP_MAXU, (maxu)) | \
            FIELD_PREP(GS_CLAMP_MINV, (minv)) | FIELD_PREP(GS_CLAMP_MAXV, (maxv)))

#define GS_SET_FOG(f) (FIELD_PREP(GS_FOG_F, (f)))

#define GS_SET_TEX1(lcm, mxl, mmag, mmin, mtba, l, k)                             \
        (FIELD_PREP(GS_TEX1_LCM, (lcm)) | FIELD_PREP(GS_TEX1_MXL, (mxcl)) |       \
            FIELD_PREP(GS_TEX1_MMAG, (mmag)) | FIELD_PREP(GS_TEX1_MMIN, (mmin)) | \
            FIELD_PREP(GS_TEX1_MTBA, (mtba)) | FIELD_PREP(GS_TEX1_L, (l)) |       \
            FIELD_PREP(GS_TEX1_K, (k)))

#define GS_SET_TEX2(psm, cbp, cpsm, csm, csa, cld)                              \
        (FIELD_PREP(GS_TEX2_PSM, (psm)) | FIELD_PREP(GS_TEX2_CBP, (cbp)) |      \
            FIELD_PREP(GS_TEX2_CPSM, (cpsm)) | FIELD_PREP(GS_TEX2_CSM, (csm)) | \
            FIELD_PREP(GS_TEX2_CSA, (csa)) | FIELD_PREP(GS_TEX2_CLD, (cld)))

#define GS_SET_XYOFFSET(ofx, ofy) \
        (FIELD_PREP(GS_XYOFFSET_OFX, (ofx)) | FIELD_PREP(GS_XYOFFSET_OFY, (ofy)))

#define GS_SET_PRMODECONT(ac) (FIELD_PREP(GS_PRMODECONT_AC, (ac)))

#define GS_SET_PRMODE(iip, tme, fge, abe, aa1, fst, ctxt, fix)                    \
        (FIELD_PREP(GS_PRMODE_IIP, (iip)) | FIELD_PREP(GS_PRMODE_TME, (tme)) |    \
            FIELD_PREP(GS_PRMODE_FGE, (fge)) | FIELD_PREP(GS_PRMODE_ABE, (abe)) | \
            FIELD_PREP(GS_PRMODE_AA1, (aa1)) | FIELD_PREP(GS_PRMODE_FST, (fst)) | \
            FIELD_PREP(GS_PRMODE_CTXT, (ctxt)) | FIELD_PREP(GS_PRMODE_FIX, (fix)))

#define GS_SET_TEXCLUT(cbw, cou, cov)                                            \
        (FIELD_PREP(GS_TEXCLUT_CBW, (cbw)) | FIELD_PREP(GS_TEXCLUT_COU, (cou)) | \
            FIELD_PREP(GS_TEXCLUT_COV, (cov)))

#define GS_SET_SCANMSK(msk) (FIELD_PREP(GS_SCNMSK_MSK, (msk)))

#define GS_SET_MIPTBP1(tbp1, tbw1, tbp2, tbw2, tbp3, tbw3)                              \
        (FIELD_PREP(GS_MIPTBP1_TBP1, (tbp1)) | FIELD_PREP(GS_MIPTBP1_TBW1, (tbw1)) |    \
            FIELD_PREP(GS_MIPTBP1_TBP2, (tbp2)) | FIELD_PREP(GS_MIPTBP1_TBW2, (tbw2)) | \
            FIELD_PREP(GS_MIPTBP1_TBP3, (tbp3)) | FIELD_PREP(GS_MIPTBP1_TBW3, (tbw3)))

#define GS_SET_MIPTBP2(tbp4, tbw4, tbp5, tbw5, tbp6, tbw6)                              \
        (FIELD_PREP(GS_MIPTBP2_TBP4, (tbp4)) | FIELD_PREP(GS_MIPTBP2_TBW4, (tbw4)) |    \
            FIELD_PREP(GS_MIPTBP2_TBP5, (tbp5)) | FIELD_PREP(GS_MIPTBP2_TBW5, (tbw5)) | \
            FIELD_PREP(GS_MIPTBP2_TBP6, (tbp6)) | FIELD_PREP(GS_MIPTBP2_TBW6, (tbw6)))

#define GS_SET_TEXA(ta0, aem, ta1)                                         \
        (FIELD_PREP(GS_TEXA_TA0, (ta0)) | FIELD_PREP(GS_TEXA_AEM, (aem)) | \
            FIELD_PREP(GS_TEXA_TA1, (ta1)))

#define GS_SET_FOGCOL(fcr, fcg, fcb)                                           \
        (FIELD_PREP(GS_FOGCOL_FCR, (fcr)) | FIELD_PREP(GS_FOGCOL_FCG, (fcg)) | \
            FIELD_PREP(GS_FOGCOL_FCB, (fcb)))

#endif // GS_H_
