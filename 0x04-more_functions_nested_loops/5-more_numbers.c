#include "main.h"
#include <stdio.h>

/**
 *more_numbers-prints numbers 0 to 14 ten times
 *Return:returns nothing
 */

void more_numbers(void)
{
	int n0, n1;

	for (n0 = 0; n0 < 10; n0++)
	{
		for (n1 = 0; n1 <= 14; n1++)
		{
			if (n1 > 9)
			{
				putchar((n1 / 10) + '0');
			}
			putchar((n1 % 10) + '0');
		}

		putchar(10);
	}
}
