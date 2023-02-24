#include <stdio.h>
#include "main.h"

/**
 *print_square-prints square
 *@size:parameter
 *Return: returns nothing
 */

void print_square(int size)
{
	int side1, side2;

	if (size > 0)
	{
		for (side1 = 0; side1 < size; side1++)
		{
			for (side2 = 0; side2 < (size - 1); side2++)
			{
			putchar('#');
			}
		putchar('#');
		putchar('\n');
		}
	}
	else
	{
		 putchar('\n');
	}
}
