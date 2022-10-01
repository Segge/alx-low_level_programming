#include <stdio.h>

/**
 *main - writes the program that prints its name.
 *@argc:argument count
 *@argv: argument vector
 *
 *Return: always 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;

	return (0);
}
