#include "main.h"

/**
 * _atoi - convert a string to an integer.
 *
 * @s: string to convert
 *
 * Return: integer from string
 */
int _atoi(char *s)
{
	int n = 0, sign = 1, i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			if (n == 0)
				n = s[i] - '0';
			else
			{
				n *= 10;
				n += s[i] - '0';
			}
		}
		else if (n > 0)
			break;
		i++;
	}

	return (n * sign);
}
