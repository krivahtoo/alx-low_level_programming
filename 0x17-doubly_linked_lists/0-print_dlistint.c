#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to the head of the list
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t len = 0;
	const dlistint_t *prev = NULL, *next = NULL;

	if (h == NULL)
		return (0);
	prev = h->prev;
	next = h;
	while (prev)
	{
		printf("%d\n", prev->n);
		prev = prev->prev;
		len++;
	}
	while (next)
	{
		printf("%d\n", next->n);
		next = next->next;
		len++;
	}

	return (len);
}
