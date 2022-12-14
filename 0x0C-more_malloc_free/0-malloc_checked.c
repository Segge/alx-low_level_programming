#include "main.h"

/**
 *malloc_checked - function that allocates memory using malloc
 *
 *@b: memory to allocate
 *
 *Return:pointer to allocated memory or if error perform normal termination
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
