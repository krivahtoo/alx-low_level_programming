#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to
 * get from one number to another.
 *
 * @n: first number
 * @m: second number
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int len = 0;
	unsigned long int i = 0;

	while (i < sizeof(unsigned long int) * 4)
	{
		len += ((n & (1 << i)) ^ (m & (1 << i))) != 0;
		i++;
	}
	return (len);
}
