#include <stdio.h>
#include "main.h"

/**
 * _isnumber - checks a value contain digits only.
 *
 * @ptr: pointer to value to check.
 *
 * Return: 1 if c is a digit, 0 otherwise.
 */
int _isnumber(char *ptr)
{
	while (*ptr != '\0')
	{
		if (*ptr < '0' || *ptr > '9')
			return (0);
		ptr++;
	}
	return (1);
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
	int i, sum = 0, n = 0;

	for (i = 1; i < argc; i++)
	{
		if (_isnumber(argv[i]) == 1)
		{
			n = _atoi(argv[i]);
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
