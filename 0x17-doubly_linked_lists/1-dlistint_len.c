#include "lists.h"
#include <stddef.h>

/**
 * dlistint_len - returns the number of elements in a list.
 *
 * @h: pointer to the head of the list
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;
	const dlistint_t *prev = NULL, *next = NULL;

	if (h == NULL)
		return (0);
	prev = h->prev;
	next = h;
	while (prev)
	{
		prev = prev->prev;
		len++;
	}
	while (next)
	{
		next = next->next;
		len++;
	}

	return (len);
}
