///*
// * ex9.c
// *
// *  Created on: Oct 4, 2024
// *      Author: Admin
// */
//#include "main.h"
//
//const int MAX_LED_MATRIX = 8;
//int index_led_matrix = 0;
//uint8_t matrix_buffer[8] = { 0x18, 0x24, 0x42, 0x7E, 0x42, 0x42, 0x42, 0x42 };
//uint16_t ROW_PINS[8] = { ROW0_Pin, ROW1_Pin, ROW2_Pin, ROW3_Pin, ROW4_Pin,
//ROW5_Pin, ROW6_Pin, ROW7_Pin };
//
//void updateLEDMatrix(int index) {
//	//tắt hết
//	HAL_GPIO_WritePin(GPIOA, ENM0_Pin, GPIO_PIN_SET);
//	HAL_GPIO_WritePin(GPIOA, ENM1_Pin, GPIO_PIN_SET);
//	HAL_GPIO_WritePin(GPIOA, ENM2_Pin, GPIO_PIN_SET);
//	HAL_GPIO_WritePin(GPIOA, ENM3_Pin, GPIO_PIN_SET);
//	HAL_GPIO_WritePin(GPIOA, ENM4_Pin, GPIO_PIN_SET);
//	HAL_GPIO_WritePin(GPIOA, ENM5_Pin, GPIO_PIN_SET);
//	HAL_GPIO_WritePin(GPIOA, ENM6_Pin, GPIO_PIN_SET);
//	HAL_GPIO_WritePin(GPIOA, ENM7_Pin, GPIO_PIN_SET);
//
////	HAL_GPIO_WritePin(GPIOB,
////			ROW2_Pin | ROW3_Pin | ROW4_Pin | ROW5_Pin | ROW6_Pin | ROW7_Pin
////					| ROW0_Pin | ROW1_Pin, GPIO_PIN_RESET);
//	switch (index) {
//	case 0:
//		HAL_GPIO_WritePin(GPIOA, ENM0_Pin, GPIO_PIN_RESET);
//		break;
//	case 1:
//		HAL_GPIO_WritePin(GPIOA, ENM1_Pin, GPIO_PIN_RESET);
//		break;
//	case 2:
//		HAL_GPIO_WritePin(GPIOA, ENM2_Pin, GPIO_PIN_RESET);
//		break;
//	case 3:
//		HAL_GPIO_WritePin(GPIOA, ENM3_Pin, GPIO_PIN_RESET);
//		break;
//	case 4:
//		HAL_GPIO_WritePin(GPIOA, ENM4_Pin, GPIO_PIN_RESET);
//		break;
//	case 5:
//		HAL_GPIO_WritePin(GPIOA, ENM5_Pin, GPIO_PIN_RESET);
//		break;
//	case 6:
//		HAL_GPIO_WritePin(GPIOA, ENM6_Pin, GPIO_PIN_RESET);
//		break;
//	case 7:
//		HAL_GPIO_WritePin(GPIOA, ENM7_Pin, GPIO_PIN_RESET);
//		break;
//	default:
//		break;
//	}
//
//	for (int i = 0; i < 8; i++) {
//		int check = (matrix_buffer[index] >> i) & 0x01;
//		HAL_GPIO_WritePin(GPIOB, ROW_PINS[i],
//				check ? GPIO_PIN_RESET : GPIO_PIN_SET);
//	}
//}
