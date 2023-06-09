#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: string pointer to duplicate
 *
 * Return: new str pointer
 */
char *_strdup(char *str)
{
	char *s = NULL;
	int i = 0, len = 0;

	if (str != NULL)
	{
		while (str[i++] != '\0')
			len++;

		s = malloc(len + 1);
		i = 0;
		if (s != NULL)
			while (i <= len)
			{
				s[i] = str[i];
				i++;
			}
	}

	return (s);
}
