/*
* Copyright (c) 2021 - 2025 Renesas Electronics Corporation and/or its affiliates
*
* SPDX-License-Identifier: BSD-3-Clause
*/

/***********************************************************************************************************************
* File Name        : Config_PORT.c
* Component Version: 1.8.1
* Device(s)        : R7F102G6CxSP
* Description      : This file implements device driver for Config_PORT.
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
#include "Config_PORT.h"
/* Start user code for include. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */

/***********************************************************************************************************************
Global variables and functions
***********************************************************************************************************************/
/* Start user code for global. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */

/***********************************************************************************************************************
* Function Name: R_Config_PORT_Create
* Description  : This function initializes the port I/O.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_Config_PORT_Create(void)
{
    /* Set PORT1 registers */
    P1 = _00_Pn7_OUTPUT_0 | _00_Pn6_OUTPUT_0 | _00_Pn2_OUTPUT_0 | _00_Pn1_OUTPUT_0 | _00_Pn0_OUTPUT_0;
    PU1 = _00_PUn7_PULLUP_OFF | _40_PUn6_PULLUP_ON | _00_PUn2_PULLUP_OFF | _00_PUn1_PULLUP_OFF | _00_PUn0_PULLUP_OFF;
    PIM1 = _00_PIMn7_TTL_OFF | _00_PIMn6_TTL_OFF | _00_PIMn1_TTL_OFF | _00_PIMn0_TTL_OFF;
    PDIDIS1 = _00_PDIDISn7_INPUT_BUFFER_ON | _00_PDIDISn2_INPUT_BUFFER_ON | _00_PDIDISn1_INPUT_BUFFER_ON | 
              _00_PDIDISn0_INPUT_BUFFER_ON;
    POM1 = _00_POMn7_NCH_OFF | _00_POMn2_NCH_OFF | _00_POMn1_NCH_OFF | _01_POMn0_NCH_ON;
    PMCT1 = _00_PMCTn7_DIGITAL_ON | _00_PMCTn6_DIGITAL_ON | _00_PMCTn2_NOT_USE | _00_PMCTn1_NOT_USE | 
            _00_PMCTn0_DIGITAL_ON;
    PM1 = _38_PM1_DEFAULT | _00_PMn7_MODE_OUTPUT | _40_PMn6_MODE_INPUT | _04_PMn2_NOT_USE | _02_PMn1_NOT_USE | 
          _00_PMn0_MODE_OUTPUT;
    /* Set PORT2 registers */
    P2 = _00_Pn2_OUTPUT_0 | _02_Pn1_OUTPUT_1 | _01_Pn0_OUTPUT_1;
/* test*/
    PMCA2 = _F8_PMCA2_DEFAULT | _00_PMCAn2_DIGITAL_ON | _00_PMCAn1_DIGITAL_ON | _00_PMCAn0_DIGITAL_ON;
    PMCT2 = _00_PMCTn2_DIGITAL_ON;
    PM2 = _F8_PM2_DEFAULT | _00_PMn2_MODE_OUTPUT | _00_PMn1_MODE_OUTPUT | _00_PMn0_MODE_OUTPUT;
    /* Set PORT14 registers */
    P14 = _00_Pn7_OUTPUT_0;
/* test*/
    PMCA14 = _7F_PMCA14_DEFAULT | _00_PMCAn7_DIGITAL_ON;
    PMCT14 = _00_PMCTn7_DIGITAL_ON;
    PM14 = _7F_PM14_DEFAULT | _00_PMn7_MODE_OUTPUT;

    R_Config_PORT_Create_UserInit();
}

/***********************************************************************************************************************
* Function Name: R_Config_PORT_ReadPmnValues
* Description  : This function specifies the value in the output latch for a port is read when the pin is in output
                 mode.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_Config_PORT_ReadPmnValues(void)
{
    PMS = _00_PMN_VALUES;
}

/* Start user code for adding. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */

