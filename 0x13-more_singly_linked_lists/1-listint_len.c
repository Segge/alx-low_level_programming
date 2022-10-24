#include "lists.h"

/**
 * listint_len - counts the number of nodes in a linked list
 * @h: head of the list
 *
 * Return: returns the number of elements
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *nodcount = h;
	size_t elenumb = 0;

	while (nodcount != NULL)
	{
		elenumb += 1;
		nodcount = nodcount->next;
	}
	return (elenumb);
}
