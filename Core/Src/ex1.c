/*
 * ex1.c
 *
 *  Created on: Oct 3, 2024
 *      Author: Admin
 */
#include "ex1.h"
#include "display7SEG.h"
//void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim) {
//	timerRun();
//}

void exercise1() {
	static int displayState;
	if (displayState == 0) {
		HAL_GPIO_WritePin(GPIOA, EN1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, EN0_Pin, GPIO_PIN_RESET);
		display7SEG(1);
		displayState = 1;
	} else {
		HAL_GPIO_WritePin(GPIOA, EN0_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, EN1_Pin, GPIO_PIN_RESET);
		display7SEG(2);
		displayState = 0;
	}
	setTimer1(50);
}
