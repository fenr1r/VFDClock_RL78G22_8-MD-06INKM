/*
* Copyright (c) 2021 - 2025 Renesas Electronics Corporation and/or its affiliates
*
* SPDX-License-Identifier: BSD-3-Clause
*/

/***********************************************************************************************************************
* File Name        : Config_UART1.h
* Component Version: 1.10.1
* Device(s)        : R7F102G6CxSP
* Description      : This file implements device driver for Config_UART1.
***********************************************************************************************************************/


/***********************************************************************************************************************
Includes
***********************************************************************************************************************/
#include "r_cg_sau.h"

#ifndef CFG_Config_UART1_H
#define CFG_Config_UART1_H

/***********************************************************************************************************************
Macro definitions (Register bit)
***********************************************************************************************************************/

/***********************************************************************************************************************
Macro definitions
***********************************************************************************************************************/
#define _6600_SAU0_CH2_TRANSMIT_DIVISOR    (0x6600U)
#define _6600_SAU0_CH3_RECEIVE_DIVISOR     (0x6600U)

/***********************************************************************************************************************
Typedef definitions
***********************************************************************************************************************/

/***********************************************************************************************************************
Global functions
***********************************************************************************************************************/
void R_Config_UART1_Create (void);
void R_Config_UART1_Start (void);
void R_Config_UART1_Stop (void);
MD_STATUS R_Config_UART1_Send (uint8_t * const tx_buf, uint16_t tx_num);
MD_STATUS R_Config_UART1_Receive (uint8_t * const rx_buf, uint16_t rx_num);
void R_Config_UART1_Loopback_Enable (void);
void R_Config_UART1_Loopback_Disable (void);
void R_Config_UART1_Create_UserInit (void);
/* Start user code for function. Do not edit comment generated here */
#define UART1_RX_BUF_LEN 128

extern uint8_t UART1_rx_buf[UART1_RX_BUF_LEN];
extern uint8_t UART1_rx_buf_cnt;

bool isUART1ReceivedLine();
void UART1_ClearReceiveBuffer();

void UART1_SendLine(uint8_t* const str);
bool isUART1SendFinished();
/* End user code. Do not edit comment generated here */
#endif
