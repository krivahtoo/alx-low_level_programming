#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 *
 * @h: head of the list
 * @idx: index of the list
 * @n: new node data
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *node = *h;
	dlistint_t *old = NULL, *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	if (node == NULL)
	{
		*h = new;
		return (new);
	}
	/* get the real head node */
	while (node->prev)
		node = node->prev;

	while (node != NULL && idx != i)
	{
		i++;
		old = node;
		node = node->next;
	}
	if (old)
	{
		new->prev = old;
		old->next = new;
	}
	if (node)
	{
		new->next = node;
		node->prev = new;
	}

	return (new);
}
