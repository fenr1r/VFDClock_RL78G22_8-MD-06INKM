/*
* Copyright (c) 2021 - 2025 Renesas Electronics Corporation and/or its affiliates
*
* SPDX-License-Identifier: BSD-3-Clause
*/

/***********************************************************************************************************************
* File Name        : r_cg_interrupt_handlers.h
* Version          : 1.0.100
* Device(s)        : R7F102G6CxSP
* Description      : None
***********************************************************************************************************************/

#ifndef INTERRUPT_HANDLER_H
#define INTERRUPT_HANDLER_H
/*
 * INT_WDTI (0x4)
 */
void INT_WDTI (void) __attribute__ ((interrupt));

/*
 * INT_LVI (0x6)
 */
void INT_LVI (void) __attribute__ ((interrupt));

/*
 * INT_P0 (0x8)
 */
void INT_P0 (void) __attribute__ ((interrupt));

/*
 * INT_P1 (0xA)
 */
void INT_P1 (void) __attribute__ ((interrupt));

/*
 * INT_P2 (0xC)
 */
void INT_P2 (void) __attribute__ ((interrupt));

/*
 * INT_P3 (0xE)
 */
void INT_P3 (void) __attribute__ ((interrupt));

/*
 * INT_P4 (0x10)
 */
void INT_P4 (void) __attribute__ ((interrupt));

/*
 * INT_P5 (0x12)
 */
void INT_P5 (void) __attribute__ ((interrupt));

/*
 * INT_CSI20/INT_IIC20/INT_ST2 (0x14)
 */
void INT_ST2 (void) __attribute__ ((interrupt));
//void INT_CSI20 (void) __attribute__ ((interrupt));
//void INT_IIC20 (void) __attribute__ ((interrupt));

/*
 * INT_CSI21/INT_IIC21/INT_SR2 (0x16)
 */
void INT_SR2 (void) __attribute__ ((interrupt));
//void INT_CSI21 (void) __attribute__ ((interrupt));
//void INT_IIC21 (void) __attribute__ ((interrupt));

/*
 * INT_SRE2 (0x18)
 */
void INT_SRE2 (void) __attribute__ ((interrupt));

/*
 * INT_SMSE (0x1C)
 */
void INT_SMSE (void) __attribute__ ((interrupt));

/*
 * INT_CSI00/INT_IIC00/INT_ST0 (0x1E)
 */
void INT_ST0 (void) __attribute__ ((interrupt));
//void INT_CSI00 (void) __attribute__ ((interrupt));
//void INT_IIC00 (void) __attribute__ ((interrupt));

/*
 * INT_TM00 (0x20)
 */
void INT_TM00 (void) __attribute__ ((interrupt));

/*
 * INT_SRE0/INT_TM01H (0x22)
 */
void INT_TM01H (void) __attribute__ ((interrupt));
//void INT_SRE0 (void) __attribute__ ((interrupt));

/*
 * INT_ST1 (0x24)
 */
void r_Config_UART1_interrupt_send (void) __attribute__ ((interrupt));

/*
 * INT_CSI11/INT_IIC11/INT_SR1 (0x26)
 */
void r_Config_UART1_interrupt_receive (void) __attribute__ ((interrupt));

/*
 * INT_SRE1/INT_TM03H (0x28)
 */
void r_Config_UART1_interrupt_error (void) __attribute__ ((interrupt));

/*
 * INT_IICA0 (0x2A)
 */
void INT_IICA0 (void) __attribute__ ((interrupt));

/*
 * INT_CSI01/INT_IIC01/INT_SR0 (0x2C)
 */
void INT_SR0 (void) __attribute__ ((interrupt));
//void INT_CSI01 (void) __attribute__ ((interrupt));
//void INT_IIC01 (void) __attribute__ ((interrupt));

/*
 * INT_TM01 (0x2E)
 */
void INT_TM01 (void) __attribute__ ((interrupt));

/*
 * INT_TM02 (0x30)
 */
void INT_TM02 (void) __attribute__ ((interrupt));

/*
 * INT_TM03 (0x32)
 */
void INT_TM03 (void) __attribute__ ((interrupt));

/*
 * INT_AD (0x34)
 */
void INT_AD (void) __attribute__ ((interrupt));

/*
 * INT_RTC (0x36)
 */
void r_Config_RTC_interrupt (void) __attribute__ ((interrupt));

/*
 * INT_ITL (0x38)
 */
void INT_ITL (void) __attribute__ ((interrupt));

/*
 * INT_KR (0x3A)
 */
void INT_KR (void) __attribute__ ((interrupt));

/*
 * INT_TM04 (0x42)
 */
void INT_TM04 (void) __attribute__ ((interrupt));

/*
 * INT_TM05 (0x44)
 */
void INT_TM05 (void) __attribute__ ((interrupt));

/*
 * INT_TM06 (0x46)
 */
void INT_TM06 (void) __attribute__ ((interrupt));

/*
 * INT_TM07 (0x48)
 */
void INT_TM07 (void) __attribute__ ((interrupt));

/*
 * INT_P6 (0x4A)
 */
void INT_P6 (void) __attribute__ ((interrupt));

/*
 * INT_P8 (0x4E)
 */
void INT_P8 (void) __attribute__ ((interrupt));

/*
 * INT_P9 (0x50)
 */
void INT_P9 (void) __attribute__ ((interrupt));

/*
 * INT_FL (0x52)
 */
void INT_FL (void) __attribute__ ((interrupt));

/*
 * INT_URE0 (0x58)
 */
void INT_URE0 (void) __attribute__ ((interrupt));

/*
 * INT_CTSUWR (0x60)
 */
void INT_CTSUWR (void) __attribute__ ((interrupt));

/*
 * INT_CTSURD (0x64)
 */
void INT_CTSURD (void) __attribute__ ((interrupt));

/*
 * INT_CTSUFN (0x66)
 */
void INT_CTSUFN (void) __attribute__ ((interrupt));

/*
 * INT_UT0 (0x6A)
 */
void INT_UT0 (void) __attribute__ ((interrupt));

/*
 * INT_UR0 (0x6C)
 */
void INT_UR0 (void) __attribute__ ((interrupt));

/*
 * INT_BRK_I (0x7E)
 */
void INT_BRK_I (void) __attribute__ ((interrupt));

//Hardware Vectors
//PowerON_Reset (0x0)
void PowerON_Reset (void) __attribute__ ((interrupt));

/*
 * INT_DUMMY for reserved interrupt source
 */
void INT_DUMMY (void) __attribute__ ((interrupt));

#endif