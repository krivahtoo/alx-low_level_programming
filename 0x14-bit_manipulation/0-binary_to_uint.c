#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 *
 * @b: string pointer
 *
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int val = 0;

	if (b == NULL)
		return (0);
	while (*b)
	{
		if (*b == '0' || *b == '1')
		{
			val = (val << 1) | (*b - '0');
		}
		else
			return (0);
		b++;
	}
	return (val);
}
