/*
 * VFD.cpp
 *
 *  Created on: 2026/05/02
 *      Author: fenrir_
 */


#include "r_smc_entry.h"
#include "Pin.h"
#include "VFD.h"



// HAL
static void CS_Low(){
    PIN_WRITE(VFD_nCS) = 0;	// CS
}

static void CS_High(){

    PIN_WRITE(VFD_nCS) = 1;	// CS
}

static void VFD_Reset(){
	PIN_WRITE(VFD_RESET) = 0;
	R_BSP_SoftwareDelay(5, BSP_DELAY_MILLISECS);
    PIN_WRITE(VFD_RESET) = 1;
}

static void VFD_SendCommands(uint8_t* cmds, uint8_t cmdlen){
	PIN_WRITE(VFD_MOSI) = 0;
	PIN_WRITE(VFD_SCK) = 1;

	CS_Low();

	for (uint8_t i = 0; i < cmdlen; i++){
		uint8_t dataByte = cmds[i];

		// software SPI
		for (uint8_t bit = 0; bit < 8; bit++){

			PIN_WRITE(VFD_SCK) = 0;

			// データセット
			if (((dataByte >> bit) & 0x01) == 0x01){
				PIN_WRITE(VFD_MOSI) = 1;
			} else {
				PIN_WRITE(VFD_MOSI) = 0;
			}

			// 1us待つ
			R_BSP_SoftwareDelay(1, BSP_DELAY_MICROSECS);

			// SCKあげる（ここでラッチ）
			PIN_WRITE(VFD_SCK) = 1;

			// 少し待つ
			R_BSP_SoftwareDelay(1, BSP_DELAY_MICROSECS);
		}
		R_BSP_SoftwareDelay(5, BSP_DELAY_MICROSECS);

	}

    CS_High();

	// 終わり
	PIN_WRITE(VFD_MOSI) = 0;

    return;
}

void VFD_Init(){
	// ポート初期設定
    PIN_WRITE(VFD_RESET) = 1;
    PIN_WRITE(VFD_nCS) = 1;	// CS
	PIN_WRITE(VFD_MOSI) = 0;
	PIN_WRITE(VFD_SCK) = 1;

	// 5ms リセット
	VFD_Reset();

    // Set numbers of characters (8 char.s - 1)
    uint8_t initcmd1[] = {0xE0, 0x07};
    VFD_SendCommands(initcmd1, 2);

	// Set brightness (0xFF = max)
	uint8_t initcmd2[] = {0xE4, 0xFF};
	VFD_SendCommands(initcmd2, 2);

    return ;

}

void VFD_Display8Characters(uint8_t* chars){

    // Set numbers of characters (8 char.s - 1)
    uint8_t packets[9] = {0x20, chars[0], chars[1], chars[2], chars[3], chars[4], chars[5], chars[6], chars[7]};

    // VFD_SendCmdWithoutCS(packets, 9);
    VFD_SendCommands(packets, 9);		// 割り込みからこれを呼ぶとうまく動かない

	// Set brightness (0xFF = max)
	uint8_t initcmd2[] = {0xE8};
	VFD_SendCommands(initcmd2, 1);

    return ;
}
