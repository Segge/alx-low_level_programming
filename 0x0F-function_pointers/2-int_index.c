#include "function_pointers.h"

/**
 *int_index - Searches for an integer in an array of integers.
 *@array: The array of integers.
 *@size: size of the array.
 *@cmp: pointer to the function to be used tio compare values.
 *
 *Return: If no matches or size <= 0 returns  -1.
 *Otherwise - the index of the first element for
 *the cmp function does not return 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i; /* index */


	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		return (i);
	}

	return (-1);
}
