#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2,
 * followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int a = 1, b = 2, c = 0;
	int i;
	long int sum = 2;

	for (i = 3; b < 4000000; i++)
	{
		c = b;
		b = a + b;
		a = c;
		if (b % 2 == 0)
			sum += b;
	}
	printf("%ld\n", sum);
	return (0);
}

