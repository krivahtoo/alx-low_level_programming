#include "lists.h"

/**
 * sum_listint - calculate the sum of all the data (n)
 * of a listint_t linked list.
 *
 * @head: the start of the linked list
 *
 * Return: the sum, 0 on empty
 */
int sum_listint(listint_t *head)
{
	int n = 0;

	while (head != NULL)
	{
		n += head->n;
		head = head->next;
	}

	return (n);
}
