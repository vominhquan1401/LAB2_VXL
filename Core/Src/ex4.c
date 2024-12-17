/*
 * ex4.c
 *
 *  Created on: Oct 3, 2024
 *      Author: Admin
 */
#include "ex3.h"
#include "timer.h"
#include "main.h"

void excute_ex4(int index) {
	if (timer1_flag == 1) {
		HAL_GPIO_TogglePin(GPIOA, DOT_Pin);
		update7SEG(index);
		setTimer1(100);
	}
}
