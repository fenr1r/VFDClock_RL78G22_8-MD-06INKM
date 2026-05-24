/*
* Copyright (c) 2021 - 2025 Renesas Electronics Corporation and/or its affiliates
*
* SPDX-License-Identifier: BSD-3-Clause
*/

/***********************************************************************************************************************
* File Name        : Config_UART1_user.c
* Component Version: 1.10.1
* Device(s)        : R7F102G6CxSP
* Description      : This file implements device driver for Config_UART1.
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
#include "Config_UART1.h"
/* Start user code for include. Do not edit comment generated here */
#include <string.h>
/* End user code. Do not edit comment generated here */

/***********************************************************************************************************************
Global variables and functions
***********************************************************************************************************************/
extern volatile uint8_t * gp_uart1_tx_address;    /* uart1 transmit buffer address */
extern volatile uint16_t g_uart1_tx_count;        /* uart1 transmit data number */
extern volatile uint8_t * gp_uart1_rx_address;    /* uart1 receive buffer address */
extern volatile uint16_t g_uart1_rx_count;        /* uart1 receive data number */
extern uint16_t g_uart1_rx_length;                /* uart1 receive data length */
/* Start user code for global. Do not edit comment generated here */

uint8_t UART1_rx_char;

bool UART1_rx_buf_is_full;

// extern
uint8_t UART1_rx_buf[UART1_RX_BUF_LEN];
uint8_t UART1_rx_buf_cnt;
bool UART1_rx_line_rcv_end;
/* End user code. Do not edit comment generated here */

/***********************************************************************************************************************
* Function Name: R_Config_UART1_Create_UserInit
* Description  : This function adds user code after initializing UART1.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_Config_UART1_Create_UserInit(void)
{
    /* Start user code for user init. Do not edit comment generated here */

	UART1_rx_char = '\0';
	R_Config_UART1_Receive(&UART1_rx_char, 1);

	memset(UART1_rx_buf, '\0', UART1_RX_BUF_LEN);
	UART1_rx_buf_cnt = 0;
	UART1_rx_line_rcv_end = false;
	UART1_rx_buf_is_full = false;
    /* End user code. Do not edit comment generated here */
}

/***********************************************************************************************************************
* Function Name: r_Config_UART1_callback_sendend
* Description  : This function is a callback function when UART1 finishes transmission.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
static void r_Config_UART1_callback_sendend(void)
{
    /* Start user code for r_Config_UART1_callback_sendend. Do not edit comment generated here */
    /* End user code. Do not edit comment generated here */
}

/***********************************************************************************************************************
* Function Name: r_Config_UART1_callback_receiveend
* Description  : This function is a callback function when UART1 finishes reception.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
static void r_Config_UART1_callback_receiveend(void)
{
    /* Start user code for r_Config_UART1_callback_receiveend. Do not edit comment generated here */

	// 1文字受信するごとに呼ばれるはずである

	// まず、PC側に文字を送信する
    uint8_t recv_data = UART1_rx_char;
    // R_Config_UART1_Send(&recv_data, 1);

    // 続いて、ユーザーの持っているバッファに1文字登録する
    // ただし、既にバッファが一杯なのであれば、もう登録しない。
    // 代わりにフラグを立てておく
	if (UART1_rx_buf_cnt == (UART1_RX_BUF_LEN - 2)){
		// オーバーランの場合もフラグを立てたい。
		UART1_rx_buf[UART1_rx_buf_cnt] = UART1_rx_char;
		UART1_rx_buf[UART1_rx_buf_cnt + 1] = '\0';
		UART1_rx_buf_is_full = true;
		UART1_rx_line_rcv_end = true;
	} else {
		UART1_rx_buf[UART1_rx_buf_cnt] = UART1_rx_char;

		UART1_rx_buf_cnt++;

		UART1_rx_buf_is_full = false;

		if (UART1_rx_buf_cnt > 2 && UART1_rx_buf[UART1_rx_buf_cnt - 2] == '\r' && UART1_rx_buf[UART1_rx_buf_cnt - 1] == '\n') {
			UART1_rx_buf[UART1_rx_buf_cnt] = '\0';	// 末端にNULL文字を追加し、受信完了フラグを立てる
			UART1_rx_line_rcv_end = true;
		}
	}

	// ESP8266側のUART受信を再開
	UART1_rx_char = '\0';
	R_Config_UART1_Receive(&UART1_rx_char, 1);
    /* End user code. Do not edit comment generated here */
}

/***********************************************************************************************************************
* Function Name: r_Config_UART1_callback_error
* Description  : This function is a callback function when UART1 reception error occurs.
* Arguments    : err_type -
*                    error type info
* Return Value : None
***********************************************************************************************************************/
static void r_Config_UART1_callback_error(uint8_t err_type)
{
    /* Start user code for r_Config_UART1_callback_error. Do not edit comment generated here */
    /* End user code. Do not edit comment generated here */
}

/***********************************************************************************************************************
* Function Name: r_Config_UART1_callback_softwareoverrun
* Description  : This function is a callback when UART1 receives an overflow data.
* Arguments    : rx_data -
*                    receive data
* Return Value : None
***********************************************************************************************************************/
static void r_Config_UART1_callback_softwareoverrun(uint16_t rx_data)
{
    /* Start user code for r_Config_UART1_callback_softwareoverrun. Do not edit comment generated here */
    /* End user code. Do not edit comment generated here */
}

/***********************************************************************************************************************
* Function Name: r_Config_UART1_interrupt_send
* Description  : This function is UART1 send interrupt service routine.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void r_Config_UART1_interrupt_send(void)
{
    if (g_uart1_tx_count > 0U)
    {
        TXD1 = *gp_uart1_tx_address;
        gp_uart1_tx_address++;
        g_uart1_tx_count--;
    }
    else
    {
        r_Config_UART1_callback_sendend();
    }
}

/***********************************************************************************************************************
* Function Name: r_Config_UART1_interrupt_receive
* Description  : This function is UART1 receive interrupt service routine.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void r_Config_UART1_interrupt_receive(void)
{
    uint8_t rx_data;

    rx_data = RXD1;

    if (g_uart1_rx_length > g_uart1_rx_count)
    {
        *gp_uart1_rx_address = rx_data;
        gp_uart1_rx_address++;
        g_uart1_rx_count++;

        if (g_uart1_rx_length == g_uart1_rx_count)
        {
            r_Config_UART1_callback_receiveend();
        }
    }
    else
    {
        r_Config_UART1_callback_softwareoverrun(rx_data);
    }
}

/***********************************************************************************************************************
* Function Name: r_Config_UART1_interrupt_error
* Description  : This function is UART1 error interrupt service routine.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void r_Config_UART1_interrupt_error(void)
{
    uint8_t err_type;

    *gp_uart1_rx_address = RXD1;
    err_type = (uint8_t)(SSR03 & 0x0007U);
    SIR03L = err_type;
    r_Config_UART1_callback_error(err_type);
}

/* Start user code for adding. Do not edit comment generated here */
bool isUART1ReceivedLine(){
	return UART1_rx_line_rcv_end;
}

void UART1_ClearReceiveBuffer(){
	// 初期化処理
	memset(UART1_rx_buf, '\0', UART1_RX_BUF_LEN);
	UART1_rx_buf_cnt = 0;
	UART1_rx_line_rcv_end = false;
	UART1_rx_buf_is_full = false;
}

void UART1_SendLine(uint8_t* const str){
	// 送信完了待ち
	while(isUART1SendFinished() != true){
	}

	const uint8_t len = (uint8_t)strlen((char*)str);
	R_Config_UART1_Send(str, len);
}

bool isUART1SendFinished(){
	return (g_uart1_tx_count > 0U) ? false : true;
}
/* End user code. Do not edit comment generated here */
