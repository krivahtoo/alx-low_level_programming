#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 *
 * @head: pointer to head node in the list to free
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head != NULL)
	{
		while (*head != NULL)
		{
			tmp = *head;
			*head = (*head)->next;
			free(tmp);
		}
		*head = NULL;
	}
}
