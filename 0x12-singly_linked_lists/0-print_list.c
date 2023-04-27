#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list.
 *
 * @h: list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int n = 0, len;
	char *str;
	const list_t *node = h;

	while (node != NULL)
	{
		str = node->str;
		len = node->len;
		if (str == NULL)
		{
			str = "(nil)";
			len = 0;
		}
		printf("[%d] %s\n", len, str);
		n++;
		node = node->next;
	}

	return (n);
}
