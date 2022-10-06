#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - check the code
 *
 *Return: Always 0.
 */

int main(void)
{
	    char *concat;

	        concat = string_nconcat("Best ", "School !!!", 6);
		    printf("%s\n", concat);
		        free(concat);
			    return (0);
}
/**
*julien@ubuntu:~/0x0b. more malloc, free$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-string_nconcat.c -o 1-string_nconcat
*julien@ubuntu:~/0x0b. more malloc, free$ ./1-string_nconcat
*Best School
*/
