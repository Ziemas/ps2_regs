#ifndef TIMER_REGS_H_
#define TIMER_REGS_H_

#include "util.h"

#define TIMER0_BASE 0x10000000
#define TIMER1_BASE 0x10000010
#define TIMER2_BASE 0x10000020
#define TIMER3_BASE 0x10000030

#define TIMER_R_COUNT 0x0
#define TIMER_R_MODE  0x10
#define TIMER_R_COMP  0x20
#define TIMER_R_HOLD  0x30

/* CLKS Option */
#define TIMER_CLKS_BUSCLK     0
#define TIMER_CLKS_BUSCLKd16  1
#define TIMER_CLKS_BUSCLKd256 2
#define TIMER_CLKS_HBLANK     3

/* GATS Option */
#define TIMER_GATS_HBLNK 0
#define TIMER_GATS_VBLNK 1

/* GATM Option */
#define TIMER_GATM_LOW  0
#define TIMER_GATM_RISE 1
#define TIMER_GATM_FALL 2
#define TIMER_GATM_EDGE 3

/* TIMER_R_MODE Fields */
#define TIMER_MODE_OVFF BIT(11)
#define TIMER_MODE_EQUF BIT(10)
#define TIMER_MODE_OVFE BIT(9)
#define TIMER_MODE_CMPE BIT(8)
#define TIMER_MODE_CUE  BIT(7)
#define TIMER_MODE_ZRET BIT(6)
#define TIMER_MODE_GATM GENMASK(5, 4)
#define TIMER_MODE_GATS BIT(3)
#define TIMER_MODE_GATE BIT(2)
#define TIMER_MODE_CLKS GENMASK(1, 0)

/* TIMER_R_COUNT Fields */
#define TIMER_COUNT_VAL GENMASK(15, 0)

/* TIMER_R_COMP Fields */
#define TIMER_COMP_VAL GENMASK(15, 0)

/* TIMER_R_HOLD Fields */
#define TIMER_HOLD_VAL GENMASK(15, 0)

#endif // TIMER_REGS_H_
