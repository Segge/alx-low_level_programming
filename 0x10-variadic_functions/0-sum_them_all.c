#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: number of paramters passed to the function as arguments to add
 * Return: returns sum, otherwise returns 0, if n == 0.
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;


	va_list ptr;


	if (n == 0)
	return (0);
	va_start(ptr, n);


	for (i = 0; i < n; i++)
	sum += va_arg(ptr, int);
	va_end(ptr);


	return (sum);
}
