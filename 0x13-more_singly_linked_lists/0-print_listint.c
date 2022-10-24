#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: head of the list
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *elements = h;
	size_t nodeNumb = 0;

	while (cursor != NULL)
	{
		printf("%d\n", elements->n);
		nodeNumb += 1;
		elements = elements->next;
	}
	return (nodeNumb);
}
