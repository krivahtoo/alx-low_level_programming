#include "main.h"
#include <stddef.h>

/**
 * _strcmp - compares two strings.
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: 0 = equal, -ve s1 greater, +ve s2 greater
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s2[i] != '\0')
	{
		if (s1[i] == '\0' || s1[i] != s2[i])
			return (1);
		i++;
	}
	return (0);
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
	while (*haystack != '\0')
	{
		if ((*haystack == *needle) && _strcmp(haystack, needle) == 0)
			return haystack;
		haystack++;
	}

	return (NULL);
}
