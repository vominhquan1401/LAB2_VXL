/*
 * ex3.c
 *
 *  Created on: Oct 3, 2024
 *      Author: Admin
 */
#include "main.h"
#include "display7SEG.h"
#include "ex3.h"

const int MAX_LED = 4;
int index_led = 0;
int led_buffer[4] = { 1, 1, 1, 1 };

void update7SEG(int index) {
	HAL_GPIO_WritePin(GPIOA, EN0_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, EN1_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, EN2_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, EN3_Pin, GPIO_PIN_SET);

	switch (index) {
	case 0:
		HAL_GPIO_WritePin(GPIOA, EN0_Pin, GPIO_PIN_RESET);
		display7SEG(led_buffer[0]);
		break;
	case 1:
		HAL_GPIO_WritePin(GPIOA, EN1_Pin, GPIO_PIN_RESET);
		display7SEG(led_buffer[1]);
		break;
	case 2:
		HAL_GPIO_WritePin(GPIOA, EN2_Pin, GPIO_PIN_RESET);
		display7SEG(led_buffer[2]);
		break;
	case 3:
		HAL_GPIO_WritePin(GPIOA, EN3_Pin, GPIO_PIN_RESET);
		display7SEG(led_buffer[3]);
		break;
	default:
		break;
	}
}
