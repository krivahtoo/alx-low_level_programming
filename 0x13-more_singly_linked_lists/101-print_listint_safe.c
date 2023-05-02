#include "lists.h"
#include <stdio.h>
#include <stdint.h>

/**
 * print_listint_safe - prints a listint_t linked list.
 *
 * @head: first node of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t n = 0;
	listint_t *node = (listint_t *)head;
	const listint_t *tmp = head;

	while (node)
	{
		printf("[%#08lx] %d\n", (uintptr_t)node, node->n);
		n++;
		node = node->next;
		if (tmp && tmp->next)
		{
			tmp = tmp->next->next;
			if (node == tmp)
				node->next->next = NULL;
		}
	}

	return (n);
}
