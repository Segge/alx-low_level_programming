#include "main.h"
/**
 *cap_string - capitalizes all words of a string
 *
 *@str: string to capitalized
 *Return: a pointer
 */
char *cap_string(char *str)
{
	int sdex = 0;


	while (str[sdex])
	{
		while (!(str[sdex] >= 'a' && str[sdex] <= 'z'))
		sdex++;

		if (str[sdex - 1] == ' ' ||
		str[sdex - 1] == '\t' ||
		str[sdex - 1] == '\n' ||
		str[sdex - 1] == ',' ||
		str[sdex - 1] == ';' ||
		str[sdex - 1] == '.' ||
		str[sdex - 1] == '!' ||
		str[sdex - 1] == '?' ||
		str[sdex - 1] == '"' ||
		str[sdex - 1] == '(' ||
		str[sdex - 1] == ')' ||
		str[sdex - 1] == '{' ||
		str[sdex - 1] == '}' ||
		sdex == 0)
		str[sdex] -= 32;
		sdex++;

	}
	return (str);
}
