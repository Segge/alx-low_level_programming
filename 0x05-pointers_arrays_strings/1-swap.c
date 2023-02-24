#include "main.h"

/**
 *swap_int - swaps the values of two integers
 *@a: parameter 1
 *@b: parameter 2
 *
 */

void swap_int(int *a, int *b)
{
	int data;

	data = *a;
	*a = *b;
	*b = data;
}
