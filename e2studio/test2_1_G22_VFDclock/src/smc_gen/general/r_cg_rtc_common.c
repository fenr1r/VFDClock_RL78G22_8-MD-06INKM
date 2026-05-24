/*
* Copyright (c) 2021 - 2025 Renesas Electronics Corporation and/or its affiliates
*
* SPDX-License-Identifier: BSD-3-Clause
*/

/***********************************************************************************************************************
* File Name        : r_cg_rtc_common.c
* Version          : 1.0.100
* Device(s)        : R7F102G6CxSP
* Description      : None
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
#include "r_cg_rtc_common.h"
/* Start user code for include. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */

/***********************************************************************************************************************
Global variables and functions
***********************************************************************************************************************/
/* Start user code for global. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */

/***********************************************************************************************************************
* Function Name: R_RTC_Set_PowerOn
* Description  : This function starts the clock supply for RTC.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_RTC_Set_PowerOn(void)
{
    RTCWEN = 1U;    /* supplies input clock */
}

/***********************************************************************************************************************
* Function Name: R_RTC_Set_PowerOff
* Description  : This function stops the clock supply for RTC.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_RTC_Set_PowerOff(void)
{
    RTCWEN = 0U;    /* stops supply of input clock */
}

/* Start user code for adding. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */
