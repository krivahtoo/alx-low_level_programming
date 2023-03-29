#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 *
 * @a: array to reverse
 * @n: array length
 */
void reverse_array(int *a, int n)
{
	int i = 0, c = 0;

	while (i < n-- / 2)
	{
		c = a[i];
		a[i] = a[n];
		a[n] = c;
		i++;
	}

}
