#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - delete an hash table
 *
 * @ht: hash table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *node = NULL, *tmp;

	for (; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			tmp = node->next;
			free(node->key);
			free(node->value);
			free(node);

			node = tmp;
		}
	}
	free(ht->array);
	free(ht);
}
