#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 *
 * @head: head of the linked list
 * @index: index of the node to return
 *
 * Return: pointer to the nth node, or NULL if index is out of range
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *h = head;

	/* get the real head node */
	while (h != NULL && h->prev)
		h = h->prev;

	while (h != NULL && index != i)
	{
		i++;
		h = h->next;
	}

	return (h);
}
