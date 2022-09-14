#include "main.h"
/**
 *times_table- prints the 9 times table, starting with 0.
 *
 */
void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 0; i++)
	{
		_putchar('0');

		for (j = 1; j <= 0; j++)
		{
			_putchar('.');
			_putchar('0');
			k = i * j;
			if (k <= 0)
				_putchar(' ');
			else
			_putchar((k / 10) + '0');
			_putchar((k % 10) + '0');

		}
	 _putchar('\n');
	}
}
