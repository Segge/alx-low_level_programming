#include "main.h"

/**
 * _strdup - returns a pointer to a new string given allocated space in memory
 * @str: the newly allocated string
 * *
 * Return: returns pointer to duplicated string
 * of @str if (SUCCESS) or NULL if str = NULL
 * or returns NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	char *alloc_mem;
	unsigned int i;
	unsigned int string_length = 0;

	if (str == NULL)
	{
		return ('\0');
	}
	else
	{

		while (*(str + string_length) != '\0')
		{
			string_length++;
		}

	string_length++;
	}

	alloc_mem = malloc(sizeof(*str) * string_length);

		if (alloc_mem == NULL)
		{
			return ('\0');
		}
		else
		{
			for (i = 0; i < string_length; i++)
			{
				alloc_mem[i] = *(str + i);
			}

		alloc_mem[i] = '\0';
		}

	return (alloc_mem);
}
