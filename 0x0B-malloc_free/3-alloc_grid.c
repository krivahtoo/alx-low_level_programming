#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 *
 * @width: array width
 * @height: array height
 *
 * Return: pointer to 2d array
 */
int **alloc_grid(int width, int height)
{
	int **arr = NULL;
	int i = 0, j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = (int **)malloc(height * sizeof(int *));
	for (i = 0; i < height; i++)
		arr[i] = (int *)malloc(width * sizeof(int));

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			arr[i][j] = 0;

	return (arr);
}
