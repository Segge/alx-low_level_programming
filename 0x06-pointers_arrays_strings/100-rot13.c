#include "main.h"
#include <stdio.h>

/**
 *rot13 - it encoder rot13
 *
 *@p:pointer to string
 *Return: *p
 */
char *rot13(char *p)
{
	int i, j;

	char parameter1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char parameter_rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; p[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (p[i] == parameter1[j])
			{
				p[i] = parameter_rot[j];
				break;
			}
		}
	}

	return (p);
}
