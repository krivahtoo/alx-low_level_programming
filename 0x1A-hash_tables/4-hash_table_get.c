#include "hash_tables.h"
#include <stdlib.h>

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
	char *val = NULL;
	hash_node_t *node = NULL;
	unsigned long int i = hash_djb2((unsigned char *)key) % ht->size;

	node = ht->array[i];
	if (node)
		val = node->value;

	return (val);
}
