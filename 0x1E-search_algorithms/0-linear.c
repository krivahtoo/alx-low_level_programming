#include "search_algos.h"
#include <stdio.h>

/**
 * linear_search - Task 0. Linear search
 *
 * searches for a value in an array of integers using
 * the Linear search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	while (i < size)
	{
		if (array[i] == value)
			return (i);
		printf("Value checked array[%lu] = [%i]\n", i, array[i]);
		i++;
	}

	return (-1);
}
