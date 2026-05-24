/*
* Copyright (c) 2021 - 2025 Renesas Electronics Corporation and/or its affiliates
*
* SPDX-License-Identifier: BSD-3-Clause
*/

/***********************************************************************************************************************
* File Name        : Config_RTC.h
* Component Version: 1.8.1
* Device(s)        : R7F102G6CxSP
* Description      : This file implements device driver for Config_RTC.
***********************************************************************************************************************/


/***********************************************************************************************************************
Includes
***********************************************************************************************************************/
#include "r_cg_rtc.h"

#ifndef CFG_Config_RTC_H
#define CFG_Config_RTC_H

/***********************************************************************************************************************
Macro definitions (Register bit)
***********************************************************************************************************************/

/***********************************************************************************************************************
Macro definitions
***********************************************************************************************************************/
#define _00_RTC_COUNTER_SEC                  (0x00U)
#define _00_RTC_COUNTER_MIN                  (0x00U)
#define _12_RTC_COUNTER_HOUR                 (0x12U)
#define _06_RTC_COUNTER_WEEK                 (0x06U)
#define _01_RTC_COUNTER_DAY                  (0x01U)
#define _01_RTC_COUNTER_MONTH                (0x01U)
#define _00_RTC_COUNTER_YEAR                 (0x00U)
#define RTC_WAITTIME_2CYCLE                  (41666U)    /* wait for 2 cycles of the operating clock */

/***********************************************************************************************************************
Typedef definitions
***********************************************************************************************************************/
typedef struct
{
    uint8_t sec;
    uint8_t min;
    uint8_t hour;
    uint8_t day;
    uint8_t week;
    uint8_t month;
    uint8_t year;
} st_rtc_counter_value_t;
typedef struct
{
    uint8_t alarmwm;
    uint8_t alarmwh;
    uint8_t alarmww;
} st_rtc_alarm_value_t;
typedef enum
{
    HOUR12,
    HOUR24
} e_rtc_hour_system_t;
typedef enum
{
    HALFSEC = 1U,
    ONESEC,
    ONEMIN,
    ONEHOUR,
    ONEDAY,
    ONEMONTH
} e_rtc_int_period_t;

/***********************************************************************************************************************
Global functions
***********************************************************************************************************************/
void R_Config_RTC_Create (void);
void R_Config_RTC_Start (void);
void R_Config_RTC_Stop (void);
MD_STATUS R_Config_RTC_Set_HourSystem (e_rtc_hour_system_t hour_system);
MD_STATUS R_Config_RTC_Get_CounterValue (st_rtc_counter_value_t * const counter_read_val);
MD_STATUS R_Config_RTC_Set_CounterValue (st_rtc_counter_value_t counter_write_val);
MD_STATUS R_Config_RTC_Set_ConstPeriodInterruptOn (e_rtc_int_period_t period);
void R_Config_RTC_Set_ConstPeriodInterruptOff (void);
void R_Config_RTC_Set_RTC1HZOn (void);
void R_Config_RTC_Set_RTC1HZOff (void);
void R_Config_RTC_Create_UserInit (void);
/* Start user code for function. Do not edit comment generated here */
#include <time.h>
extern volatile uint8_t g_rtc_interrupt_flag;
extern volatile uint8_t timeout_cnt;

MD_STATUS R_Config_RTC_Set_CounterValue_TM(struct tm);
/* End user code. Do not edit comment generated here */
#endif
