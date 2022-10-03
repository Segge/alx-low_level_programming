#include <stdlib.h>

/**
 * create_array - Creates an array and initializes it with
 * a specific character @c
 * @size: Size of array of characters to be created
 *
 * @c: Character value to be used to initialize array.
 *
 * Return: returns a pointer to the array created OR NULL if @size = 0 OR
 * the creation of the array fails.
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return ('\0');
	}
	else
	{
		array = malloc(size);
	}
		if (array == NULL)
		{
			return ('\0');
		}
		else
		{
			for (i = 0; i < size; i++)
			{
				array[i] = c;
			}
		array[size] = '\0';
		}
	return (array);
}
