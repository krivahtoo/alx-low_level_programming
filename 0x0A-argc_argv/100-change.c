#include <stdio.h>
#include <limits.h>
#include "main.h"

/**
 * get_coins - calculate number of coins required
 *
 * @coins: available coins array.
 * @n: number
 *
 * Return: coins count
 */
int get_coins(int *coins, int n)
{
	int m, i = 0, visited = 0;

	if (n == 0)
		return (0);
	m = INT_MAX;

	for (i = 0; i < 5; i++)
		if (coins[i] <= n && visited == 0)
		{
			int count = get_coins(coins, n - coins[i]);

			if (count != INT_MAX && count + 1 < m)
				m = count + 1;
			visited = 1;
		}

	return (m);
}

/**
 * main - prints all arguments it receives.
 *
 * @argc: argument count
 * @argv: argument array
 *
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int count = 0, n = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n =  _atoi(argv[1]);

	if (n > 0)
	{
		count = get_coins(coins, n);
	}

	printf("%d\n", count);
	return (0);
}

/**
 * _atoi - convert a string to an integer.
 *
 * @s: string to convert
 *
 * Return: integer from string
 */
int _atoi(char *s)
{
	int n = 0, sign = 1;

	while (*s != '\0')
	{
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
		{
			if (n == 0)
				n = *s - '0';
			else
			{
				n *= 10;
				n += *s - '0';
			}
		}
		else if (n > 0)
			break;
		s++;
	}

	return (n * sign);
}


