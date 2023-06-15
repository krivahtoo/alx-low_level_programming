#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 *
 * @head: pointer to the head of the list
 * @n: data to be added
 *
 * Return: address of the new element or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->prev = NULL;
	new->next = NULL;
	new->n = n;
	if (head && *head)
		new->next = *head;
	*head = new;

	return (new);
}
