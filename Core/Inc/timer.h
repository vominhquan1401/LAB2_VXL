/*
 * timer.h
 *
 *  Created on: Oct 3, 2024
 *      Author: Admin
 */

#ifndef INC_TIMER_H_
#define INC_TIMER_H_

#include "main.h"

extern int timer1_flag;
extern int timer1_counter;

void setTimer1(int duration);
void timerRun();

#endif /* INC_TIMER_H_ */
