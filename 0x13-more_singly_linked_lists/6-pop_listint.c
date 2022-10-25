#include "lists.h"


/**
 * pop_listint - deletes the head node
 * @head : pointer to the head of the linked list
 * Return: returns the data (n) of the head node
 * otherwise returns 0 - if the linked list is empty
 */


int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;


	temp = *head;

	if (temp == NULL)
	return (0);

	*head = temp->next;
	n = temp->n;
	free(temp);
	return (n);
}
