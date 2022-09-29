#include "main.h"

int find_sqrt(int num, int root);
int _sqrt_recursion(int n);

/**
 *find_sqrt - Finds the natural square root of a given number
 *
 *@num: number whose square root is to be found
 *
 *@root: root to be checked
 *
 *Return: returns 1 if n has natural square root
 *returns -1 if n does not have a natural square root
 *
 */

int find_sqrt(int num, int root)
{
	if (num == (root * root))
		return (root);

	if (root == num / 2)
		return (-1);

	return (find_sqrt(num, root + 1));
}

/**
 *_sqrt_recursion: returns the natural square root of a number
 *
 *@n: the number to get the square root of
 *
 *Return: returns 1 if n has natural square root
 *returns -1 if n does not have a natural square root.
 */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

		if (n == 1)
			return (1);

			return (find_sqrt(n, root));
}
