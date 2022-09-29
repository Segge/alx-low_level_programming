#include "main.h"

int find_strlen(char *s);
int check_palindrome(char *s, int len, int index);
int is_palindrome(char *s);

/**
 *find_strlen - returns the length of a string.
 *
 *@s: the string to be checked
 *
 *Return: returns the length of the string.
 *
 */


int find_strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += find_strlen(s +  len);
	}

	return (len);
}


/**
 *check_palindrome - checks if a string is a palindrome.
 *
 *@s: the string to be checked
 *@len: length of s
 *@index: index of string to be checked
 *
 *Return: returns 1 if string is palindrome
 *return 0 if string is not palindrome
 */

int check_palindrome(char *s, int len, int index)
{
	if (s[index] == s[len / 2])
	{
		return (1);
	}
	else if (s[index] == s[len - index - 1])
	{
		return (check_palindrome(s, len, index + 1));
	}
		return (0);
}

/**
*is_palindrome - checks if a string is a palindrome.
*
*@s: string to be checked
*
*Return: returns 1 if string is palindrome
*return 0 if string is not palindrome
*/

int is_palindrome(char *s)
{
	int index = 0;

	int len = find_strlen(s);

	if (!(*s))
	{
		return (1);
	}
	return (check_palindrome(s, len, index));
}
