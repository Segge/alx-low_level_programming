#include "main.h"

/**
 *factorial - returns factorial of a given number
 *@n: number to work on
 *Return: if n > 0 returns factorial of n
 *	if n < 0 returns error
 */

int factorial(int n)
{
	int result = n;

	if (n >= 0 && n <= 1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	result *= factorial(n - 1);

	return (result);
}
