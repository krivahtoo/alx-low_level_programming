#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 *
 * @ptr: pointer to memory previously allocated with
 * a call to malloc
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 *
 * Return: pointer to reallocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p = NULL;
	unsigned int i = 0;

	if (old_size == new_size)
		return (ptr);

	p = malloc(new_size);
	if (ptr != NULL)
	{
		for (i = 0; i < old_size; i++)
			*((char *)p + i) = *((char *)ptr + i);
		free(ptr);
	}
	return (p);
}
