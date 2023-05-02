#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 *
 * @head: pointer to the first node of the list
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp = NULL;
	listint_t *h = NULL;

	if (head == NULL || *head == NULL)
		return (NULL);
	h = *head;
	if (h->next == NULL)
		return (h);
	*head = h->next;
	tmp = reverse_listint(head);

	h->next->next = h;
	h->next = NULL;

	return (tmp);
}
