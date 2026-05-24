/*
* Copyright (c) 2021 - 2025 Renesas Electronics Corporation and/or its affiliates
*
* SPDX-License-Identifier: BSD-3-Clause
*/

/***********************************************************************************************************************
* File Name        : Pin.c
* Version          : 1.0.0
* Device(s)        : R7F102G6CxSP
* Description      : This file implements SMC pin code generation.
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
/* Start user code for include. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */

/***********************************************************************************************************************
Global variables and functions
***********************************************************************************************************************/
/* Start user code for global. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */

/***********************************************************************************************************************
* Function Name: R_Pins_Create
* Description  : This function initializes Smart Configurator pins
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_Pins_Create(void)
{
    /* Set RTC1HZ pin */
    PMCT3 &= 0xFEU;
    P3 &= 0xFEU;
    PM3 &= 0xFEU;

    /* Set RxD1 pin */
    PMCA0 &= 0xFDU;
    PMCT0 &= 0xFDU;
    PM0 |= 0x02U;

    /* Set TxD1 pin */
    PMCA0 &= 0xFEU;
    PMCT0 &= 0xFEU;
    P0 |= 0x01U;
    PM0 &= 0xFEU;

    /* Set XT1 pin */
    PM12 |= 0x02U;

    /* Set XT2 pin */
    PM12 |= 0x04U;

}

