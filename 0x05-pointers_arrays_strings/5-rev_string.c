#include "main.h"

/**
 *rev_string- function to reverse a string
 *@s: input string
 *
 *Return: returns string in reverse order
 */
void rev_string(char *s)
{
	char str_rev = s[0];
	int count = 0;
	int x;

	while (s[count] != '\0')
	{
		count++;
	}
	for (x = 0; x < count; x++)
	{
		count--;
		str_rev = s[x];
		s[x] = s[count];
		s[count] = str_rev;
	}

}
