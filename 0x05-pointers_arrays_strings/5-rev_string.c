#include "main.h"

/**
 * _strcp - copy one string pointer to another
 *
 * @source: source string.
 * @dest: copy destination
 */
void _strcp(char *source, char *dest)
{
	int i = 0;

	while (source[i] != '\0')
	{
		dest[i] = source[i];
		i++;
	}
	dest[i] = '\0';
}

/**
 * rev_string - reverses a string.
 *
 * @s: string to reverse
 */
void rev_string(char *s)
{
	char str[255];
	int i = 0, n = 0;

	_strcp(s, str);
	n = _strlen(s);
	while (--n >= 0)
		s[i++] = str[n];
}

/**
 * _strlen - calculates the length of a string.
 *
 * @s: string to get length.
 *
 * Return: the length of a string.
 */
int _strlen(char *s)
{
	int n = 0;

	while (s[n] != '\0')
		n++;
	return (n);
}

