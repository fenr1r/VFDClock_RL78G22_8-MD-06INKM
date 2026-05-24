/*
* Copyright (c) 2021 - 2025 Renesas Electronics Corporation and/or its affiliates
*
* SPDX-License-Identifier: BSD-3-Clause
*/

/***********************************************************************************************************************
* File Name        : Config_RTC_user.c
* Component Version: 1.8.1
* Device(s)        : R7F102G6CxSP
* Description      : This file implements device driver for Config_RTC.
***********************************************************************************************************************/

/***********************************************************************************************************************
Pragma directive
***********************************************************************************************************************/
/* Start user code for pragma. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */

/***********************************************************************************************************************
Includes
***********************************************************************************************************************/
#include "r_cg_macrodriver.h"
#include "r_cg_userdefine.h"
#include "Config_RTC.h"
/* Start user code for include. Do not edit comment generated here */
#include <time.h>
#include "Pin.h"
#include "Config_UART1.h"
// #include "Config_UARTA1.h"


#include "../../VFD.h"
// #define _USE_PC_PRINT 1
#undef _USE_PC_PRINT

void ProcessPerOneSecond_OnInterruptVec();
/* End user code. Do not edit comment generated here */

/***********************************************************************************************************************
Global variables and functions
***********************************************************************************************************************/
extern volatile uint8_t g_rtc_interrupt_flag;
/* Start user code for global. Do not edit comment generated here */
volatile uint8_t timeout_cnt;
/* End user code. Do not edit comment generated here */

/***********************************************************************************************************************
* Function Name: R_Config_RTC_Create_UserInit
* Description  : This function adds user code after initializing the real-time clock.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_Config_RTC_Create_UserInit(void)
{
    /* Start user code for user init. Do not edit comment generated here */
	timeout_cnt = 0;
    /* End user code. Do not edit comment generated here */
}

/***********************************************************************************************************************
* Function Name: r_Config_RTC_callback_constperiod
* Description  : This function is real-time clock constant-period interrupt service handler.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
static void r_Config_RTC_callback_constperiod(void)
{
    /* Start user code for r_Config_RTC_callback_constperiod. Do not edit comment generated here */
	ProcessPerOneSecond_OnInterruptVec();
    /* End user code. Do not edit comment generated here */
}

/***********************************************************************************************************************
* Function Name: r_Config_RTC_interrupt
* Description  : This function is INTRTC interrupt service routine.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void r_Config_RTC_interrupt(void)
{
    g_rtc_interrupt_flag = 1U;
    if (1U == RIFG)
    {
        /* clear RIFG */
        RIFG = 0U;    /* constant-period interrupt is not generated */
        r_Config_RTC_callback_constperiod();
    }
}

/* Start user code for adding. Do not edit comment generated here */

MD_STATUS R_Config_RTC_Set_CounterValue_TM(struct tm nowtm){
	// struct tmの月は、0-11なので、1-12に直す
	nowtm.tm_mon += 1;

	// 年は下2桁のみにする
	nowtm.tm_year = 0 + (nowtm.tm_year % 100);

	const uint8_t rtc_sec 	= (uint8_t)((nowtm.tm_sec / 10) << 4) 	+ ((uint8_t)(nowtm.tm_sec % 10));
	const uint8_t rtc_min 	= (uint8_t)((nowtm.tm_min / 10) << 4) 	+ ((uint8_t)(nowtm.tm_min % 10));
	const uint8_t rtc_hour 	= (uint8_t)((nowtm.tm_hour / 10) << 4) 	+ ((uint8_t)(nowtm.tm_hour % 10));
	const uint8_t rtc_day 	= (uint8_t)((nowtm.tm_mday / 10) << 4) 	+ ((uint8_t)(nowtm.tm_mday % 10));
	const uint8_t rtc_month = (uint8_t)((nowtm.tm_mon / 10) << 4) 	+ ((uint8_t)(nowtm.tm_mon % 10));
	const uint8_t rtc_year 	= (uint8_t)((nowtm.tm_year / 10) << 4) 	+ ((uint8_t)(nowtm.tm_year % 10));

	st_rtc_counter_value_t sntp_val = {
			.sec = rtc_sec,
			.min = rtc_min,
			.hour = rtc_hour,
			.day = rtc_day,
			.week = (uint8_t)nowtm.tm_wday,
			.month = rtc_month,
			.year = rtc_year
	};

	return R_Config_RTC_Set_CounterValue(sntp_val);
}

void ProcessPerOneSecond_OnInterruptVec(){
	timeout_cnt++;

	// とりあえずLEDをトグル
    // PIN_WRITE(LED1) ^= 1;

	// RTCの値を読み取る
	st_rtc_counter_value_t counter_val;

	R_Config_RTC_Get_CounterValue(&counter_val);

	// もしスイッチが押されていたら、カレンダーを表示
	// そうでない限り、時間を表示
	uint8_t spitest[9];

	if (PIN_READ(SW_CALENDAR) == 0) {
		// ASCII文字列に変換

		spitest[0] = (uint8_t)(((counter_val.year >> 4) & 0x0F) + '0');
		spitest[1] = (uint8_t)(((counter_val.year) & 0x0F)		+ '0');
		spitest[2] = ' ';
		spitest[3] = (uint8_t)(((counter_val.month >> 4) & 0x01) + '0');
		spitest[4] = (uint8_t)(((counter_val.month) & 0x0F) 		+ '0');
		spitest[5] = '/';
		spitest[6] = (uint8_t)(((counter_val.day >> 4) & 0x03) + '0');
		spitest[7] = (uint8_t)(((counter_val.day) & 0x0F)		+ '0');
		spitest[8] = '\0';
	} else {
		// ASCII文字列に変換
		spitest[0] = (uint8_t)(((counter_val.hour >> 4) & 0x0F) + '0');
		spitest[1] = (uint8_t)(((counter_val.hour) & 0x0F)		+ '0');
		spitest[2] = ':';
		spitest[3] = (uint8_t)(((counter_val.min >> 4) & 0x0F) + '0');
		spitest[4] = (uint8_t)(((counter_val.min) & 0x0F) 		+ '0');
		spitest[5] = ':';
		spitest[6] = (uint8_t)(((counter_val.sec >> 4) & 0x0F) + '0');
		spitest[7] = (uint8_t)(((counter_val.sec) & 0x0F)		+ '0');
		spitest[8] = '\0';
	}

	// VFDに表示
	VFD_Display8Characters(spitest);

	// PCに送信
#ifdef _USE_PC_PRINT
	UARTA1SendLine(spitest);
#endif
}
/* End user code. Do not edit comment generated here */
