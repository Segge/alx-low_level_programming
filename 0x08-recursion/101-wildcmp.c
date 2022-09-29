#include "main.h"

int strlen_no_wilds(char *str);
void iterate_wild(char **wildstr);
char *postfix_match(char *str, char *postfix);
int wildcmp(char *s1, char *s2);

/**
 *strlen_no_wilds - Returns length of a string, while
 *ignoring wildcard characters.
 *@str: String to be checked.
 *
 *Return: returns the length
 *
 */

int strlen_no_wilds(char *str)
{
	int len = 0, index = 0;

	if (*(str + index))
	{
		if (*str != '*')
		{
			len++;
		}
	index++;
	len += strlen_no_wilds(str + index);
	}

	return (len);
}

/**
 *iterate_wild - Iterates through a string situated at a wildcard until
 *it points to a non-wildcard character.
 *
 *@wildstr: String to be iterated
 */

void iterate_wild(char **wildstr)
{

	if (**wildstr == '*')
	{
		(*wildstr)++;

		iterate_wild(wildstr);
	}
}

/**
 *postfix_match - Checks if str, string matches the postfix of another
 *string containing wildcards.
 *
 *@str: String to be be checked for matching
 *
 *@postfix: the postfix
 *
 *Return: returns a pointer to the null byte situated at the end of postfix
 *if str and postfix are identical else, it returns a
 *pointer to the first unmatched character in postfix.
 */

char *postfix_match(char *str, char *postfix)
{
	int str_len = strlen_no_wilds(str) - 1;

	int postfix_len = strlen_no_wilds(postfix) - 1;


	if (*postfix == '*')
	{
		iterate_wild(&postfix);
	}

	if (*(str + str_len - postfix_len) == *postfix && *postfix != '\0')
	{
		postfix++;
	return (postfix_match(str, postfix));
	}
	return (postfix);
}

/**
 *wildcmp - Compares two strings, while considering wildcards
 *@s1: 1st string to be checked
 *
 *@s2: 2nd string to be checked which may contain wildcards
 *
 *Return: returns 1, if the strings is identical
 *returns 0, if strings not identical
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		iterate_wild(&s2);
		s2 = postfix_match(s1, s2);
	}

	if (*s2 == '\0')
	{
		return (1);
	}

		if (*s1 != *s2)
		{
			return (0);
		}
		return (wildcmp(++s1, ++s2));
}
