#include "main.h"

int is_divisible(int num, int div);
int is_prime_number(int n);

/**
 *is_divisible - checks if a number is divisible.
 *
 *@num: number to be checked.
 *
 *@div: the divisor
 *
 *Return: returns 1 if the number is divisible
  *returns 0 if the neumber is not divisible
 */

int is_divisible(int num, int div)
{
	if (num % div == 0)
	{
		return (0);
	}
	else if (div == num / 2)
	{
		return (1);
	}
		return (is_divisible(num, div + 1));
}

/**
 *is_prime_number - checks for prime number
 *
 *@n: number to be checked
 *
 *Return: returns 1 if the number is a prime number
 *returns 0 if the neumber is not a prime number
 */

int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
	{
		return (0);
	}
	else if (n >= 2 && n <= 3)
	{
		return (1);
	}
	return (is_divisible(n, div));
}
