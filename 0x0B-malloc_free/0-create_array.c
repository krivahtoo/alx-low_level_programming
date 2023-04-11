#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and
 * initializes it with a specific char.
 *
 * @size: size of the array
 * @c: char to initialize with
 *
 * Return: poiter to an array of chars
 */
char *create_array(unsigned int size, char c)
{
	char *arr = NULL;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	arr = malloc(size);
	if (arr == NULL)
		return (NULL);
	while (i < size)
	{
		arr[i] = c;
		i++;
	}

	return (arr);
}
