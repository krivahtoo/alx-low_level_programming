#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143,
 * followed by a new line.
 *
 * Return: 0 always
 */
int main(void)
{
	long int num = 612852475143;
	long int i, prime = 0;

	for (i = 2; i <= sqrt(num); i += 1)
	{
		while (num % i == 0)
		{
			prime = i;
			num = num / i;
		}
	}
	prime = num;

	printf("%ld\n", prime);
	return (0);
}
