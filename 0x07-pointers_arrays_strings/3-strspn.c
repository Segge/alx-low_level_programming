#include "main.h"

/**
 *_strspn - gets the length of a prefix substring
 *@s:string to check
 *@accept: string to check agsinst
 *
 * Return: returns number of bytes of c in accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b;

	for (a = 0; s[a]; a++)
	{
		for (b = 0; accept[b]; b++)
		{
			if (s[a] == accept[b])
				break;
		}
		if (!accept[b])
			break;
	}
	return (a);
}
