#include "main.h"

/**
 *array_range - create an array of integer
 *@min: first integer number
 *@max: last integer number
 *
 *Return: pointer to the new allocated memory or if fails NULL
 */
int *array_range(int min, int max)
{
	int i, l;
	int *b;


	if (min > max)
		return (NULL);
	l = max - min + 1;
	b = malloc(sizeof(int) * l);
	if (b == NULL)
		return (NULL);
	for (i = 0; i < l; i++, min++)
	{
		b[i] = min;
	}
	return (b);
}
