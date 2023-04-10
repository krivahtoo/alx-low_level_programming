#include <stdio.h>
#include "main.h"

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
	int i, sum = 0, n = 0;

	for (i = 1; i < argc; i++)
	{
		if ((n = _atoi(argv[i])) > 0)
		{
			sum += n;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
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
