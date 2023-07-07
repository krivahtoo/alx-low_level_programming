#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * hash_table_print - prints a hash table.
 *
 * @ht: the hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	int count = 0;
	hash_node_t *node = NULL;

	if (ht == NULL)
		return;
	printf("{");
	for (; i < ht->size; i++)
	{
		node = ht->array[i];
		if (node)
		{
			if (count > 0)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			count++;
		}
	}
	printf("}\n");
}
