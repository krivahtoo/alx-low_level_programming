#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_array - Prints an array
 *
 * @array: array to be printed
 * @size: the number of elements in array
 */
void print_array(int *array, size_t size)
{
	size_t i = 0;

	printf("Searching in array: ");
	for (; i < size; i++)
	{
		printf("%d", array[i]);
		if (i < size - 1)
			printf(", ");
	}
	printf("\n");
}

/**
 * bin_search - Searches for a value in a sorted array of
 * integers using binary search.
 *
 * @array: pointer to the first element of the array to search in.
 * @l: the starting index of the subarray to search in.
 * @h: the ending index of the subarray to search in.
 * @value: the value to search for.
 *
 * Return: the first index where value is located or -1.
 */
int bin_search(int *array, size_t l, size_t h, int value)
{
	size_t mid;

	while (l <= h)
	{
		mid = l + (h - l) / 2;
		print_array(array + l, h - l + 1);
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			l = mid + 1;
		else
			h = mid - 1;
	}
	return (-1);
}

/**
 * exponential_search - Task 10. Exponential search
 *
 * Searches for a value in a sorted array of integers using
 * the Exponential search algorithm.
 *
 * @array: pointer to the first element of the array to search in.
 * @size: the number of elements in array.
 * @value: the value to search for.
 *
 * Return: the first index where value is located or -1.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t low, high, bound;

	if (array == NULL || size == 0)
		return (-1);

	if (array[0] == value)
		return (0);

	bound = 1;
	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	low = bound / 2;
	high = (bound < size) ? bound : size - 1;
	printf("Value found between indexes [%lu] and [%lu]\n", low, high);

	return (bin_search(array, low, high, value));
}
