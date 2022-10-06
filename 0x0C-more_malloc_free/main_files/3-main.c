#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *simple_print_buffer - prints buffer in hexa
 *@buffer: the address of memory to print
 *@size: the size of the memory to print
 *
 *Return: Nothing.
 */

void simple_print_buffer(int *buffer, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		if (i % 10)
		{
			printf(" ");
		}
			if (!(i % 10) && i)
			{
				printf("\n");
			}
				printf("0x%02x", buffer[i]);
				i++;
	}
	printf("\n");
}

/**
 *main - check the code
 *
 *Return: Always 0.
 */

int main(void)
{
	int *a;

	a = array_range(0, 10);
	simple_print_buffer(a, 11);
	free(a);
	return (0);
}
/**
*julien@ubuntu:~/0x0b. more malloc, free$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-array_range.c -o 3-array_range
*julien@ubuntu:~/0x0b. more malloc, free$ ./3-array_range
*0x00 0x01 0x02 0x03 0x04 0x05 0x06 0x07 0x08 0x09
*0x0a
*/
