#include "main.h"
#include <stdio.h>

/**
 *print_diagonal-prints diagonal line
 *@n: parameter
 *Return:returns nothing
 */

void print_diagonal(int n)
{
	int lenght, space;

	if (n > 0)
	{
		for (lenght = 0; lenght < n; lenght++)
		{
			for (space = 0; space < lenght; space++)
			{
			putchar(' ');
			}
			putchar('\\');
			if (lenght == (n - 1))
			{
			continue;
			}
		putchar('\n');
		}
	}
	putchar('\n');
}
