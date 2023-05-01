#include "lists.h"
#include <stddef.h>

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 *
 * @h: list
 *
 * Return: number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;
	const listint_t *node = h;

	while (node != NULL)
	{
		len++;
		node = node->next;
	}
	return (len);
}
