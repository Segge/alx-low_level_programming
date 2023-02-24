#include "main.h"

/**
 *_strlen - returns the length of a strings
 *@s: string
 *
 *Return: length of a string
*/

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
