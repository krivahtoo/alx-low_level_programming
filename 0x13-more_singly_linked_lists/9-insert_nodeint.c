#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 *
 * @head: the start of the list
 * @idx: index to insert at
 * @n: the value to insert
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new;
	listint_t *tmp;
	listint_t *old = NULL;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	tmp = *head;
	while (tmp != NULL && i < idx)
	{
		old = tmp;
		tmp = tmp->next;
		i++;
	}
	if (i < idx)
	{
		free(new);
		return (NULL);
	}
	if (old != NULL)
		old->next = new;
	new->next = tmp;

	return (new);
}
