#include "main.h"
#include <string.h>

/**
 *_strcat -A function strcat that concatenates strings
 *@dest:string to append
 *@src: string to concatenate
 *Return:return pointer to @dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int lent = 0;

	while (dest[lent])
	lent++;

	for (i = 0; src[i] != 0; i++)
	{
		dest[lent] = src[i];
		lent = lent + 1;
	}
	dest[lent] = '\0';
	return (dest);
}
