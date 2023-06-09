#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - creates a hash table.
 *
 * @size: the size of the array
 *
 * Return: a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *ht = NULL;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);
	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);

	for (i = 0; i < ht->size; i++)
		ht->array[i] = NULL;

	return (ht);
}
