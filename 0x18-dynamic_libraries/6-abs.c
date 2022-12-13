#include "main.h"
#include <stdio.h>

/**
 *_abs(int)-function that computes absolute value of an integer
 *@c:integer used for the argument of the function
 *Return: 0
 *
 */
int _abs(int c)
{
	if (c > 0 || c == 0)
	{
	return (c);
	}
	else
	{
	return (c * -1);
	}
}
