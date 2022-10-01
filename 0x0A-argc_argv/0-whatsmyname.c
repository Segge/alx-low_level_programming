#include <stdio.h>

/**
 *main - writes a program that prints its name.
 *@argc: arguments count
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
