#include "lists.h"
#include <string.h>

/**
 * _strlen - returns the length of a string.
 *
 * @s: string to get length
 *
 * Return: length
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(++s));
}

/**
 * add_node_end - adds a new node at the end of a list_t list.
 *
 * @head: start of the list
 * @str: string to add
 *
 * Return: the address of the new element,
 * or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *node;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->len = _strlen((char *)str);
	new->str = strdup((char *)str);
	new->next = NULL;

	node = *head;
	if (node != NULL)
	{
		while (node->next != NULL)
			node = node->next;

		node->next = new;
	}
	else
		*head = new;

	return (new);
}
