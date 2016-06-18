/*
 * swap.c
 *
 *  Created on: Jun 18, 2016
 *      Author: spike2
 */

#include "swap.h"

// swap 2 chars
void SWAP_char(char *a, char *b)
{
	char temp = *a;
	*a = *b;
	*b = temp;
}

// swap 2 shorts
void SWAP_short(short *a, short *b)
{
	short temp = *a;
	*a = *b;
	*b = temp;
}

// swap 2 ints
void SWAP_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}


