#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a
 * dlistint_t linked list.
 *
 * @head: node in the list
 *
 * Return: sum of all data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *prev, *next;

	if (head == NULL)
		return (0);
	prev = head->prev;
	next = head;

	/* calculate previous node sum */
	while (prev)
	{
		sum += prev->n;
		prev = prev->prev;
	}

	/* calculate next node sum */
	while (next)
	{
		sum += next->n;
		next = next->next;
	}

	return (sum);
}
