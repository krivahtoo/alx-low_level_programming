#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list, and
 * returns the head node’s data (n).
 *
 * @head: pointer to head node.
 *
 * Return: the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *old;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	old = *head;
	*head = old->next;
	n = old->n;
	free(old);

	return (n);
}
