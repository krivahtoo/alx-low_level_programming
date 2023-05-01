#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list.
 *
 * @h: list to print
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int len = 0;
	const listint_t *node = h;

	while (node != NULL)
	{
		printf("%d\n", node->n);
		len++;
		node = node->next;
	}

	return (len);
}
