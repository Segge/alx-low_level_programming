#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *print_dog - function that print a struct dog
 *@d: struct to print
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %d\n", d->name);

		if (d->age < 0)
			printf("Age: (nil)\n");
		else
			printf("Age: %d\n", d->age);

		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %d\n", d->owner);
}
