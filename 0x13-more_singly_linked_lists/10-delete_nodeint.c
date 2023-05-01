#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index
 * of a listint_t linked list.
 *
 * @head: the start of the list
 * @index: the index to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp;
	listint_t *old = NULL;

	tmp = *head;
	while (tmp != NULL && i < index)
	{
		old = tmp;
		tmp = tmp->next;
		i++;
	}
	if (i < index || tmp == NULL)
		return (-1);
	if (old != NULL)
		old->next = tmp->next;
	else
		*head = tmp->next;
	free(tmp);
	return (1);
}
