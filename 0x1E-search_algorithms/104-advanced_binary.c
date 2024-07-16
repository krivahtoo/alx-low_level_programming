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
 * advanced_binary_recursive - Recursively searches for a value in
 * a sorted array of integers.
 *
 * @array: pointer to the first element of the array to search in.
 * @low: the starting index of the current subarray.
 * @high: the ending index of the current subarray.
 * @value: the value to search for.
 *
 * Return: the index where value is located or -1 if not found.
 */
int advanced_binary_recursive(int *array, size_t low, size_t high, int value)
{
	size_t mid;

	if (low <= high)
	{
		mid = low + (high - low) / 2;

		print_array(array + low, high - low + 1);

		if (array[mid] == value)
		{
			if (mid == low || array[mid - 1] != value)
				return (mid);
			else
				return (advanced_binary_recursive(array, low, mid - 1, value));
		}
		else if (array[mid] < value)
			return (advanced_binary_recursive(array, mid + 1, high, value));
		else
			return (advanced_binary_recursive(array, low, mid - 1, value));
	}
	return (-1);
}

/**
 * advanced_binary - Task 11. Advanced binary search
 *
 * Searches for a value in a sorted array of integers
 * using advanced binary search.
 *
 * @array: pointer to the first element of the array to search in.
 * @size: the number of elements in array.
 * @value: the value to search for.
 *
 * Return: the index where value is located or -1 if not found.
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
