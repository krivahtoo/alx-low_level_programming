#include "main.h"
#include <stddef.h>

/**
 * _strncmp - compares two strings.
 *
 * @s1: string 1
 * @s2: string 2
 * @n: s2 lenght
 *
 * Return: 0 = equal, -ve s1 greater, +ve s2 greater
 */
int _strncmp(char *s1, char *s2, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
		if (s1[i] != s2[i] || s1[i] == '\0')
			return (1);
	return (0);
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

	while (*s++ != '\0')
		n++;
	return (n);
}

/**
 * _strstr - searches a string for any of a set of bytes.
 *
 * @haystack: string to search in.
 * @needle: string to search for.
 *
 * Return: pointer to start of match
 */
char *_strstr(char *haystack, char *needle)
{
	int n = _strlen(needle);

	while (*haystack != '\0')
	{
		if ((*haystack == *needle || *needle == '\0')
			&& _strncmp(haystack, needle, n) == 0)
			return (haystack);
		haystack++;
	}

	return (NULL);
}
