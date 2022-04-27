#include "lists.h"

/**
 * reverse_listint - reverses a linked list.
 * @head: head of a list.
 *
 * Return: pointer to the first node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *c;
	listint_t *d;

	c = NULL;
	d = NULL;

	while (*head != NULL)
	{
		d = (*head)->next;
		(*head)->next = c;
		c = *head;
		*head = d;
	}

	*head = c;
	return (*head);
}
