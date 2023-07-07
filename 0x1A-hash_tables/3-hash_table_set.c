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
	hash_node_t *new, *node = NULL;
	int i = 0;
	unsigned long int index = hash_djb2((unsigned char *)key) % ht->size;

	node = ht->array[index];
	if (node == NULL)
	{
		new = new_node(key, value);
		ht->array[index] = new;
		return (1);
	}
	return (i);
}
