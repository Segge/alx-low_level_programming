#include "main.h"

/**
 * _memcpy - copies a memory area
 * @dest: memory area to be copied into
 * @src: memory area to be copied from
 * @n: number of bytes to be copied
 * Return: returns pointer to the copied memory block
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
