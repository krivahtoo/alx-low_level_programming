#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Task 1. The last digit
 *
 * This program will assign a random number to the variable n
 * each time it is executed and print the last digit of the
 * number stored in the variable n.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n,last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;

	printf("Last digit of %d is %d ", n, last_digit);
	if (last_digit > 5)
	{
		printf("and is greater than 5");
	} else if (last_digit == 0)
	{
		printf("and is zero");
	} else
	{
		printf("and is less than 6 and not 0");
	}
	printf("\n");
	return (0);
}
