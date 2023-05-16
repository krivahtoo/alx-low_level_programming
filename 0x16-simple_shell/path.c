#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern char **environ;

typedef struct node
{
	char *name;
	char *value;
	struct node *next;
} node_t;

/**
 * print_list - prints all the elements of a list_t list.
 *
 * @h: list
 *
 * Return: the number of nodes
 */
size_t print_list(node_t *h)
{
	int n = 0;
	node_t *node = h;

	while (node != NULL)
	{
		printf("%s=%s\n", node->name, node->value);
		n++;
		node = node->next;
	}

	return (n);
}

/**
 * add_node_end - adds a new node at the end of a node_t list.
 *
 * @head: start of the list
 * @str: string to add
 *
 * Return: the address of the new element,
 * or NULL if it failed
 */
void add_node_end(node_t **head, const char *name, const char *value)
{
	node_t *new;
	node_t *node;

	new = malloc(sizeof(node_t));
	if (new == NULL)
		return;

	new->name = strdup((char *)name);
	new->value = strdup((char *)value);
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
}

/**
 */
int main(void)
{
	char **env = environ;
	char *name = NULL;
	char *value = NULL;
	node_t *head = NULL;

	while (*env)
	{
		name = strtok(*env, "=");
		if (name == NULL)
			break;
		value = strtok(NULL, "=");

		add_node_end(&head, name, value);
		env++;
	}
	print_list(head);
	return (0);
}
