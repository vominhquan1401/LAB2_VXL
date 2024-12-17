/*
 * ex2.c
 *
 *  Created on: Oct 3, 2024
 *      Author: Admin
 */
#include "main.h"
#include "timer.h"
#include "display7SEG.h"

int SEG_flag = 0;

//void timerRun() {
//	if (timer1_counter > 0) {
//		timer1_counter--;
//		if (timer1_counter <= 0) {
//			timer1_flag = 1;
//		}
//		if (timer1_counter % 500 == 0) {
//			SEG_flag = 1;
//		}
//	}
//}
//void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim) {
//	timerRun();
//}
void ex2() {
	if (SEG_flag == 1) {
		static int displayState;
		if (displayState == 0) {
			HAL_GPIO_WritePin(GPIOA, EN0_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA, EN1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOA, EN2_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOA, EN3_Pin, GPIO_PIN_SET);
			display7SEG(1);
			displayState = 1;
		} else if (displayState == 1) {
			HAL_GPIO_WritePin(GPIOA, EN0_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOA, EN1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA, EN2_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOA, EN3_Pin, GPIO_PIN_SET);
			display7SEG(2);
			displayState = 2;
		} else if (displayState == 2) {
			HAL_GPIO_WritePin(GPIOA, EN0_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOA, EN1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOA, EN2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA, EN3_Pin, GPIO_PIN_SET);
			display7SEG(3);
			displayState = 3;
		} else if (displayState == 3) {
			HAL_GPIO_WritePin(GPIOA, EN0_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOA, EN1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOA, EN2_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOA, EN3_Pin, GPIO_PIN_RESET);
			display7SEG(0);
			displayState = 0;
		}
		SEG_flag = 0;
	}
	if (timer1_flag == 1) {
		HAL_GPIO_TogglePin(GPIOA, DOT_Pin);
		setTimer1(1000);
	}
}
void excute_ex2() {
	if (timer1_counter == 500 || timer1_flag == 1) {
		ex2();
	}
}

