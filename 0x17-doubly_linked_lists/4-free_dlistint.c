#include "lists.h"
#include <stdlib.h>

/**
 * free_prev - frees the prev node of a node
 *
 * @head: head of the list
 */
void free_prev(dlistint_t *head)
{
	dlistint_t *node = head->prev, *tmp;

	while (node != NULL)
	{
		tmp = node->prev;
		free(node);
		node = tmp;
	}
}

/**
 * free_next - frees the next node of a node
 *
 * @head: head of the list
 */
void free_next(dlistint_t *head)
{
	dlistint_t *node = head->next, *tmp;

	while (node != NULL)
	{
		tmp = node->next;
		free(node);
		node = tmp;
	}
}

/**
 * free_dlistint - frees a dlistint_t list.
 *
 * @head: pointer to the list
 */
void free_dlistint(dlistint_t *head)
{
	if (head != NULL)
	{
		free_prev(head);
		free_next(head);
		free(head);
	}
}
