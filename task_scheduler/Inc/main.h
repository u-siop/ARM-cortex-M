/*
 * main.h
 *
 *  Created on: Aug 10, 2025
 *      Author: usiop
 */

#ifndef MAIN_H_
#define MAIN_H_

#define MAX_TASKS	4

/* some stack memory calculations */
#define SIZE_TASK_STACK				1024U
#define SIZE_SCHE_STACK				1024U

#define SRAM_START					0x20000000U
#define SIZE_SRAM					( (128) * (1024) )
#define SRAM_END					((SRAM_START) + (SIZE_SRAM))

#define T1_STACK_START				SRAM_END
#define T2_STACK_START				((SRAM_END) - (1 * SIZE_TASK_STACK))
#define T3_STACK_START				((SRAM_END) - (2 * SIZE_TASK_STACK))
#define T4_STACK_START				((SRAM_END) - (3 * SIZE_TASK_STACK))
#define SCHE_STACK_START			((SRAM_END) - (4 * SIZE_TASK_STACK))

#define TICK_HZ 1000U

#define HSI_CLOCK					16000000U
#define SYSTICK_TIM_CLK				HSI_CLOCK

#define DUMMY_XPSR 0x01000000U

#endif /* MAIN_H_ */
