#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 *
 * @head: pointer to the head of the list.
 * @n: value to be added.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *node;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL || head == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	node = *head;
	if (node == NULL)
		*head = new;
	else
	{
		while (node)
		{
			new->prev = node;
			node = node->next;
		}
		new->prev->next = new;
	}

	return (new);
}
