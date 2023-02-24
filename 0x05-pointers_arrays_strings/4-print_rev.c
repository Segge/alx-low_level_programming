#include "main.h"

/**
 *print_rev - prints strings in reverse order
 *@s:strings to print
 */

void print_rev(char *s)
{

	int a;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}
		for (a = a - 1; a >= 0; a--)
		{

		_putchar(s[a]);
		}
	_putchar('\n');
}
