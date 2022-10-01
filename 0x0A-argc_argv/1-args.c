#include <stdio.h>

/**
 * main - Prints the name of arguments passed into it.
 * @args: argument count
 * @argv: argument vector
 *
 * Return: returns 0
 */
int main(int args, char *argv[])
{
	printf("%d\n", args - 1);
	(void)argv;

	return (0);
}
