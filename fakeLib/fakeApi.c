/*
 * fakeApi.c
 *
 *  Created on: Jun 18, 2016
 *      Author: spike2
 */

#include <stdlib.h>
#include <stdio.h>

#include "fakeApi.h"

#define TAG	">> [FAPI] "

void FAPI_function0(void)
{
	printf(TAG "calling a sample fake API 0 call.\n");
}

void FAPI_function1(void)
{
	printf(TAG "calling another fake API 1 call.\n");
}


