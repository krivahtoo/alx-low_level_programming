#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_get - retrieves a value associated with a key.
 *
 * @ht: the hash table
 * @key: key of the value to retrieve
 *
 * Return: pointer to string or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node = NULL;
	unsigned long int i;

	if (ht == NULL || key == NULL)
		return (NULL);
	i = key_index((unsigned char *)key, ht->size);
	node = ht->array[i];
	while (node)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}

	return (NULL);
}
