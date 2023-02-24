#include "main.h"

/**
*puts_half - function that print second half of the string
*
*@str: input string
*Return:returns half of the string
*/
void puts_half(char *str)
{
	int x, y;
	int lent = 0;

	while (str[lent] != '\0')
	{
		lent++;
	}
	if (lent % 2 == 0)
	{
		for (y = lent / 2; str[y] != '\0'; y++)
		{
			_putchar(str[y]);
		}
	}
	else if (lent % 2)
	{
		for (x = (lent - 1) / 2; x < lent - 1; x++)
		{
			_putchar(str[x + 1]);
		}

	}
	_putchar('\n');
}
