/*
* Copyright (c) 2021 - 2025 Renesas Electronics Corporation and/or its affiliates
*
* SPDX-License-Identifier: BSD-3-Clause
*/

/***********************************************************************************************************************
* File Name        : r_cg_vect_table.c
* Version          : 1.0.100
* Device(s)        : R7F102G6CxSP
* Description      : None
***********************************************************************************************************************/

#include "r_cg_macrodriver.h"
#include "r_cg_userdefine.h"

extern void PowerON_Reset (void);

const unsigned char Option_Bytes[]  __attribute__ ((section (".option_bytes"))) = {
    0xEFU, 0x3AU, 0xE8U, 0x84U
};

const unsigned char Security_Id[]  __attribute__ ((section (".security_id"))) = {
    0x00U,0x00U,0x00U,0x00U,0x00U,0x00U,0x00U,0x00U,0x00U,0x00U
};

#define VEC          __attribute__ ((section (".vec")))
const void __near *HardwareVectors[] VEC = {
    // Address 0x0
    PowerON_Reset,
    // Secure for Debugging
    (void*)0xFFFF
};

#define VECT_SECT          __attribute__ ((section (".vects")))
const void __near *Vectors[] VECT_SECT = {
/*
 * INT_WDTI (0x4)
 */
INT_WDTI,

/*
 * INT_LVI (0x6)
 */
    INT_LVI,

/*
 * INT_P0 (0x8)
 */
    INT_P0,

/*
 * INT_P1 (0xA)
 */
    INT_P1,

/*
 * INT_P2 (0xC)
 */
    INT_P2,

/*
 * INT_P3 (0xE)
 */
    INT_P3,

/*
 * INT_P4 (0x10)
 */
    INT_P4,

/*
 * INT_P5 (0x12)
 */
    INT_P5,

/*
 * INT_CSI20/INT_IIC20/INT_ST2 (0x14)
 */
    INT_ST2,
//    INT_CSI20,
//    INT_IIC20,

/*
 * INT_CSI21/INT_IIC21/INT_SR2 (0x16)
 */
    INT_SR2,
//    INT_CSI21,
//    INT_IIC21,

/*
 * INT_SRE2(0x18)
 */
    INT_SRE2,

/*
 * Padding for reserved interrupt source (0x1A)
 */
    INT_DUMMY,

/*
 * INT_SMSE (0x1C)
 */
    INT_SMSE,

/*
 * INT_CSI00/INT_IIC00/INT_ST0 (0x1E)
 */
    INT_ST0,
//    INT_CSI00,
//    INT_IIC00,

/*
 * INT_TM00 (0x20)
 */
    INT_TM00,

/*
 * INT_SRE0/INT_TM01H (0x22)
 */
    INT_TM01H,
//    INT_SRE0,

/*
 * INT_ST1 (0x24)
 */
    r_Config_UART1_interrupt_send,

/*
 * INT_CSI11/INT_IIC11/INT_SR1 (0x26)
 */
    r_Config_UART1_interrupt_receive,

/*
 * INT_SRE1/INT_TM03H (0x28)
 */
    r_Config_UART1_interrupt_error,

/*
 * INT_IICA0 (0x2A)
 */
    INT_IICA0,

/*
 * INT_CSI01/INT_IIC01/INT_SR0 (0x2C)
 */
    INT_SR0,
//    INT_CSI01,
//    INT_IIC01,

/*
 * INT_TM01 (0x2E)
 */
    INT_TM01,

/*
 * INT_TM02 (0x30)
 */
    INT_TM02,

/*
 * INT_TM03 (0x32)
 */
    INT_TM03,

/*
 * INT_AD (0x34)
 */
    INT_AD,

/*
 * INT_RTC (0x36)
 */
    r_Config_RTC_interrupt,

/*
 * INT_ITL (0x38)
 */
    INT_ITL,

/*
 * INT_KR (0x3A)
 */
    INT_KR,

/*
 * Padding for reserved interrupt source (0x3C)
 */
    INT_DUMMY,

/*
 * Padding for reserved interrupt source (0x3E)
 */
    INT_DUMMY,

/*
 * Padding for reserved interrupt source (0x40)
 */
    INT_DUMMY,

/*
 * INT_TM04 (0x42)
 */
    INT_TM04,

/*
 * INT_TM05 (0x44)
 */
    INT_TM05,

/*
 * INT_TM06 (0x46)
 */
    INT_TM06,

/*
 * INT_TM07 (0x48)
 */
    INT_TM07,

/*
 * INT_P6 (0x4A)
 */
    INT_P6,

/*
 * Padding for reserved interrupt source (0x4C)
 */
    INT_DUMMY,

/*
 * INT_P8 (0x4E)
 */
    INT_P8,

/*
 * INT_P9 (0x50)
 */
    INT_P9,

/*
 * INT_FL (0x52)
 */
    INT_FL,

/*
 * Padding for reserved interrupt source (0x54)
 */
    INT_DUMMY,

/*
 * Padding for reserved interrupt source (0x56)
 */
    INT_DUMMY,

/*
 * INT_URE0 (0x58)
 */
    INT_URE0,

/*
 * Padding for reserved interrupt source (0x5A)
 */
    INT_DUMMY,

/*
 * Padding for reserved interrupt source (0x5C)
 */
    INT_DUMMY,

/*
 * Padding for reserved interrupt source (0x5E)
 */
    INT_DUMMY,

/*
 * INT_CTSUWR (0x60)
 */
    INT_CTSUWR,

/*
 * Padding for reserved interrupt source (0x62)
 */
    INT_DUMMY,

/*
 * INT_CTSURD (0x64)
 */
    INT_CTSURD,

/*
 * INT_CTSUFN (0x66)
 */
    INT_CTSUFN,

/*
 * Padding for reserved interrupt source (0x68)
 */
    INT_DUMMY,

/*
 * INT_UT0 (0x6A)
 */
    INT_UT0,

/*
 * INT_UR0 (0x6C)
 */
    INT_UR0,

/*
 * Padding for reserved interrupt source (0x6E)
 */
    INT_DUMMY,

/*
 * Padding for reserved interrupt source (0x70)
 */
    INT_DUMMY,

/*
 * Padding for reserved interrupt source (0x72)
 */
    INT_DUMMY,

/*
 * Padding for reserved interrupt source (0x74)
 */
    INT_DUMMY,

/*
 * Padding for reserved interrupt source (0x76)
 */
    INT_DUMMY,

/*
 * Padding for reserved interrupt source (0x78)
 */
    INT_DUMMY,

/*
 * Padding for reserved interrupt source (0x7A)
 */
    INT_DUMMY,

/*
 * Padding for reserved interrupt source (0x7C)
 */
    INT_DUMMY,

/*
 * INT_BRK_I (0x7E)
 */
    INT_BRK_I,
};