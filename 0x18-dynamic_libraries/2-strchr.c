#include "main.h"

/**
 * _strchr - locate occurence of a character in a string
 * @s:string to check
 * @c:character to locate
 *
 * Return: pointer to spot in string, s with character, c or NULL
 */
char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; *(s + a); a++)
	{
		if (*(s + a) == c)
			return (s + a);
	}
	if (*(s + a) == c)
		return (s + a);
	return (0);
}
