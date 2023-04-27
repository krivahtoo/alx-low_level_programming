#include "lists.h"

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
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: string pointer to duplicate
 *
 * Return: new str pointer
 */
char *_strdup(char *str)
{
	char *s = NULL;
	int i = 0, len = 0;

	if (str != NULL)
	{
		while (str[i++] != '\0')
			len++;

		s = malloc(len + 1);
		i = 0;
		if (s != NULL)
			while (i <= len)
			{
				s[i] = str[i];
				i++;
			}
	}

	return (s);
}

/**
 * add_node - adds a new node at the beginning of a list_t list.
 *
 * @head: pointer to the head pointer
 * @str: string to add
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->len = _strlen((char *)str);
	new->str = _strdup((char *)str);
	new->next = *head;

	*head = new;

	return (new);
}
