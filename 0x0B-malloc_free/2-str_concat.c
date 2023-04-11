#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: new string pointer
 */
char *str_concat(char *s1, char *s2)
{
	int l1 = 0, l2 = 0, i = 0, len = 0;
	char *s = NULL;

	if (s1 != NULL)
		while (s1[i++] != '\0')
			l1++;
	i = 0;
	if (s2 != NULL)
		while (s2[i++] != '\0')
			l2++;

	s = malloc(l1 + l2 + 1);
	if (s != NULL)
	{
		i = 0;
		if (s1 != NULL)
			while (s1[i] != '\0')
				s[len++] = s1[i++];
		i = 0;
		if (s2 != NULL)
			while (s2[i] != '\0')
				s[len++] = s2[i++];
		s[len] = '\0';
	}

	return (s);
}
