/*
 * display7SEG.c
 *
 *  Created on: Oct 3, 2024
 *      Author: Admin
 */
#include "main.h"
void display7SEG(int num) {
	HAL_GPIO_WritePin(GPIOB,
			SEG_0_Pin | SEG_1_Pin | SEG_2_Pin | SEG_3_Pin | SEG_4_Pin
					| SEG_5_Pin | SEG_6_Pin, GPIO_PIN_SET);
	switch (num) {
	case 0:
		HAL_GPIO_WritePin(GPIOB,
				SEG_0_Pin | SEG_1_Pin | SEG_2_Pin | SEG_3_Pin | SEG_4_Pin
						| SEG_5_Pin, GPIO_PIN_RESET);
		break;
	case 1:
		HAL_GPIO_WritePin(GPIOB, SEG_1_Pin | SEG_2_Pin, GPIO_PIN_RESET);
		break;
	case 2:
		HAL_GPIO_WritePin(GPIOB,
				SEG_0_Pin | SEG_1_Pin | SEG_3_Pin | SEG_4_Pin | SEG_6_Pin,
				GPIO_PIN_RESET);
		break;
	case 3:
		HAL_GPIO_WritePin(GPIOB,
				SEG_0_Pin | SEG_1_Pin | SEG_2_Pin | SEG_3_Pin | SEG_6_Pin,
				GPIO_PIN_RESET);
		break;
	case 4:
		HAL_GPIO_WritePin(GPIOB, SEG_1_Pin | SEG_2_Pin | SEG_5_Pin | SEG_6_Pin,
				GPIO_PIN_RESET);
		break;
	case 5:
		HAL_GPIO_WritePin(GPIOB,
				SEG_0_Pin | SEG_2_Pin | SEG_3_Pin | SEG_5_Pin | SEG_6_Pin,
				GPIO_PIN_RESET);
		break;
	case 6:
		HAL_GPIO_WritePin(GPIOB,
				SEG_0_Pin | SEG_2_Pin | SEG_3_Pin | SEG_4_Pin | SEG_5_Pin
						| SEG_6_Pin, GPIO_PIN_RESET);
		break;
	case 7:
		HAL_GPIO_WritePin(GPIOB, SEG_0_Pin | SEG_1_Pin | SEG_2_Pin,
				GPIO_PIN_RESET);
		break;
	case 8:
		HAL_GPIO_WritePin(GPIOB,
				SEG_0_Pin | SEG_1_Pin | SEG_2_Pin | SEG_3_Pin | SEG_4_Pin
						| SEG_5_Pin | SEG_6_Pin, GPIO_PIN_RESET);
		break;
	case 9:
		HAL_GPIO_WritePin(GPIOB,
				SEG_0_Pin | SEG_1_Pin | SEG_2_Pin | SEG_3_Pin | SEG_5_Pin
						| SEG_6_Pin, GPIO_PIN_RESET);
		break;
	default:
		//HAL_GPIO_WritePin(SEG_PORT, SEG_A_Pin | SEG_B_Pin | SEG_C_Pin | SEG_D_Pin |SEG_E_Pin | SEG_F_Pin | SEG_G_Pin, GPIO_PIN_RESET);
		break;
	}
}

