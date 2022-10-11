#include "dog.h"
#include <stdlib.h>


int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 *_strlen - To find the length of a string
 *@str: string to check
 *Return: length of the string
 */
int _strlen(char *str)
{
	int length = 0;

	while (*str++)
		length++;

	return (length);
}

/**
 *_strcopy - function to copy string pointed to by src and
 *to include null terminator, also the buffer pointed to by dest.
 *@dest: buffer storing the string copy
 *@src: pointer
 *Return: returns the pointer to dest.
 */

char *_strcopy(char *dest, char *src)
{
	int i = 0; /* index number */

	for (i = 0; src[i]; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}

/**
 *new_dog - to create a new dog
 *@name: name of dog
 *@age: age of dog
 *@owner: owner of dog
 *Return: new struct dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogAlloc;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	dogAlloc = malloc(sizeof(dog_t));
	if (dogAlloc == NULL)
		return (NULL);

	dogAlloc->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dogAlloc->name == NULL)
	{
		free(dogAlloc);
		return (NULL);
	}

	dogAlloc->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dogAlloc->owner == NULL)
	{
		free(dogAlloc->name);
		free(dogAlloc);
		return (NULL);
	}

	dogAlloc->name = _strcopy(dogAlloc->name, name);
	dogAlloc->age = age;
	dogAlloc->owner = _strcopy(dogAlloc->owner, owner);

	return (dogAlloc);

}
