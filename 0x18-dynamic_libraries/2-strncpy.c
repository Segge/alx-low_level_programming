#include "main.h"
/**
 *_strncpy-function that copy string
 *@dest:parameter 1
 *@src:parameter 2
 *@n:parameter 3
 *Return:return dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
		return (dest);
}
