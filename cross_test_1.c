/*
 ============================================================================
 Name        : cross_test_1.c
 Author      : none
 Version     :
 Copyright   : free for all
 Description : random linux testing, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

#include "swap.h"
#include "common.h"
#include "./fakeLib/fakeApi.h"

#define REG_KILL_SIG(handler)	signal(SIGINT, handler)
void sigHandler(int signal)
{
	printf("\n>> Kill signal detected, exiting program.\n\n");
	FAPI_function0();

	exit(0);
}

int main(void)
{
	int counter = 0;
	//unsigned short a = 0xAAAA;
	//unsigned short b = 0xBBBB;

	gCommonVar0 = 0xAA11AA11;
	gCommonVar1 = 0xBB11BB11;

	// register the signal handler
	REG_KILL_SIG(sigHandler);

	printf("!!!Hello for test_1!!!"); /* prints !!!Hello World!!! */

	while(1)
	{
		printf(" >> (()) Ticking %d inside test_1.\n", ++counter);
		printf(" >> Cur varA=%x varB=%x\n", gCommonVar0, gCommonVar1);
		SWAP_int(&gCommonVar0, &gCommonVar1);
		printf(" >> Swapped varA=%x varB=%x\n\n", gCommonVar0, gCommonVar1);

		usleep(1500000);
	}

	return EXIT_SUCCESS;
}
