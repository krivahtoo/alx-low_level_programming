#include "search_algos.h"
#include <stdio.h>

/**
 * binary_search - searches for a value in a sorted array of integers using
 * the Binary search algorithm
 *
 * @array: pointer to the first element of the array to search in.
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index of val, otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
	int l = 0, r = size - 1;

	while (l <= r)
	{
		int i, m = (l + r) / 2;

		printf("Searching in array: ");
		for (i = l; i <= r; i++)
		{
			printf("%d", array[i]);
			if (i != r)
				printf(", ");
		}
		printf("\n");

		if (array[m] < value)
			l = m + 1;
		else if (array[m] > value)
			r = m - 1;
		else
			return (m);
	}

	return (-1);
}
