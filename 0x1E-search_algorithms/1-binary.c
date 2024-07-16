#include "search_algos.h"
#include <stdio.h>

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
 * binary_search - Task 1. Binary search
 *
 * Searches for a value in a sorted array of integers using the
 * Binary search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t mid, l = 0;
	size_t r = size - 1;

	if (array == NULL)
		return (-1);

	while (l <= r)
	{
		mid = l + (r - l) / 2;
		print_array(array + l, r - l + 1);
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			l = mid + 1;
		else
			r = mid - 1;
	}
	return (-1);
}
