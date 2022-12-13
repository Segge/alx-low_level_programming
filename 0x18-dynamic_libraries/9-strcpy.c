#include "main.h"

/**
 **_strcpy - copies string pointed to by src
 *@dest: pointer to str of destination
 *@src: pointer to str origin
 *
 *Return: returns string
 */

char *_strcpy(char *dest, char *src)
{
	int y = 0;

	while (*(src + y) != '\0')
	{
		*(dest + y) = *(src + y);
		y++;
	}

	*(dest + y) = '\0';

	return (dest);
}
