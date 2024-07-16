#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * interpolation_search - Task 1. Interpolation search
 *
 * Searches for a value in a sorted array of integers using the
 * Interpolation search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located or -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low = 0;
	size_t high = size - 1;

	if (array == NULL || size == 0)
		return (-1);

	while (low <= high)
	{
		if (low == high)
		{
			if (array[low] == value)
				return (low);
			return (-1);
		}

		pos = low
			+ (((double)(high - low) / (array[high] - array[low]))
			* (value - array[low]));

		if (pos >= size)
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			return (-1);
		}

		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);

		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}

	return (-1);
}
