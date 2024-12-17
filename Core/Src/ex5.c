/*
 * ex5.c
 *
 *  Created on: Oct 3, 2024
 *      Author: Admin
 */
#include "main.h"
#include "ex3.h"
#include "timer.h"

int hour = 15, minute = 8, second = 50;


void updateClockBuffer() {
	static int state = 0;
	led_buffer[0] = hour / 10;
	led_buffer[1] = hour % 10;
	led_buffer[2] = minute / 10;
	led_buffer[3] = minute % 10;

		update7SEG(state);
		state++;
		if (state >= 4) {
			state = 0;
		}
}
void excute_ex5() {
	second++;
	if (second >= 60) {
		second = 0;
		minute++;
	}
	if (minute >= 60) {
		minute = 0;
		hour++;
	}
	if (hour >= 24) {
		hour = 0;
	}
}

