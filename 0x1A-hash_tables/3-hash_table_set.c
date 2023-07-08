#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_node - create new hash table element
 *
 * @key: element key
 * @value: associated value
 *
 * Return: pointer to hash table node
 */
hash_node_t *new_node(const char *key, const char *value)
{
	hash_node_t *new = NULL;

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (NULL);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;

	return (new);
}

/**
 * hash_table_set - adds an element to the hash table.
 *
 * @ht: hash table
 * @key: key to insert or update
 * @value: the value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new, *node = NULL, *tmp;
	unsigned long int idx;

	if (ht == NULL)
		return (0);
	idx = key_index((unsigned char *)key, ht->size);
	node = ht->array[idx];
	tmp = node;
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (1);
		}
		tmp = tmp->next;
	}
	new = new_node(key, value);
	if (new == NULL)
		return (0);
	if (node)
		new->next = node;
	ht->array[idx] = new;
	return (1);
}
