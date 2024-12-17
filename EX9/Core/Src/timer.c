/*
 * timer.c
 *
 *  Created on: Oct 3, 2024
 *      Author: Admin
 */
#include "timer.h"

int timer1_counter = 0;
int timer1_flag = 0;

__weak void setTimer1(int duration) {
	timer1_counter = duration;
	timer1_flag = 0;
}

__weak void timerRun() {
	if (timer1_counter > 0) {
		timer1_counter--;

		if (timer1_counter <= 0) {
			timer1_flag = 1;
		}
	}
}
