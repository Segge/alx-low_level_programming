#include "main.h"

/**
 *_pow_recursion - Returns the value of x raised to power of y.
 *@x: number to be raised
 *@y: the power
 *
 *Return: value of x raised to power of y.
 *
 */

int _pow_recursion(int x, int y)
{
	int ans = x;

	if (y < 0)

		return (-1);

	else if (y == 0)

		return (1);

	ans *= _pow_recursion(x, y - 1);

	return (ans);
}
