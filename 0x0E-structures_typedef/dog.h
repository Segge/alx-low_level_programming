#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
 *struct dog - Struct dog
 *@name: name of dog
 *@age: age of dog
 *@owner: owner of dog
 *Description: The struct belongs to dog.
 *
 */
struct dog
{
	char *namne;
	float age;
	char *owner;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
