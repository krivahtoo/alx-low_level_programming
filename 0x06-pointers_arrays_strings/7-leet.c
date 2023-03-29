#include "main.h"

/**
 * leet - encodes a string into 1337.
 *
 * @str: string to encode
 *
 * Return: encoded string
 */
char *leet(char *str)
{
	int i;
	int n[] = {4, 3, 0, 7, 1};
	char ch[] = {'a', 'e', 'o', 't', 'l'};
	char *ptr = str;

	while (*str)
	{
		for (i = 0; i < 5; i++)
			if (*str == ch[i] || *str == ch[i] - 32)
				*str = n[i] + '0';
		str++;
	}
	return (ptr);
}
