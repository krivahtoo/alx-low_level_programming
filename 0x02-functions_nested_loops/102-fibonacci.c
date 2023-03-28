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

	printf("%ld, %ld, ", a, b);
	for (i = 3; i <= 50; i++)
	{
		c = b;
		b = a + b;
		a = c;
		printf("%ld", b);
		if (i != 50)
			printf(", ");
	}
	printf("\n");
	return (0);
}

