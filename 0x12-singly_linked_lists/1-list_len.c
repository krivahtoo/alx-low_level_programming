#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 *
 * @h: first node
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;
	const list_t *node = h;

	while (node != NULL)
	{
		n++;
		node = node->next;
	}

	return (n);
}
