#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes the node at index index of
 * a dlistint_t linked list.
 *
 * @head: pointer to the head of the list.
 * @index: index of the node to delete.
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *h = *head;

	/* get the real head node */
	while (h->prev)
		h = h->prev;

	while (h != NULL && index != i)
	{
		i++;
		h = h->next;
	}
	if (h == NULL)
		return (-1);
	if (h->prev != NULL)
	{
		h->prev->next = h->next;
	}
	else if (index == 0)
		*head = h->next;
	if (h->next != NULL)
		h->next->prev = h->prev;
	free(h);

	return (1);
}
