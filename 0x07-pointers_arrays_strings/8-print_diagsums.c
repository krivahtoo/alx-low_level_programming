#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a
 * square matrix of integers.
 *
 * @a: matrix
 * @size: matrix size
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int sum[2] = {0, 0};

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (j == i)
				sum[0] += a[i * size + j];
			if (i + j == size - 1)
				sum[1] += a[i * size + j];
		}
	}

	printf("%d, %d\n", sum[0], sum[1]);
}
