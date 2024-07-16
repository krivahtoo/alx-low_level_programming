#include "search_algos.h"
#include <stdio.h>
#include <math.h>

/**
 * jump_search - Task 1. Jump search
 *
 * Searches for a value in a sorted array of integers using the
 * Jump search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located or -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, step = sqrt(size);
	size_t prev = 0;
	size_t next = step;

	if (array == NULL || size == 0)
		return (-1);

	printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
	while (next < size && array[next] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", next, array[next]);
		prev = next;
		next += step;
	}

	if (next >= size)
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);

	printf(
		"Value found between indexes [%lu] and [%lu]\n",
		prev, next < size ? next : size
	);

	for (i = prev; i < size && i <= next; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
