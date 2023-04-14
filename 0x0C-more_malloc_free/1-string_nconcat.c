#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 *
 * @s1: first string
 * @s2: second string
 * @n: length
 *
 * Return: new string pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str = NULL;
	unsigned int len = 0, i = 0;

	if (s1 != NULL)
		while (s1[i++] != '\0')
			len++;

	str = malloc(len + n + 1);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < len + n; i++)
		if (i < len)
			str[i] = s1[i];
		else
			if (s2 != NULL)
			{
				if (s2[i - len] == '\0')
					break;
				str[i] = s2[i - len];
			}
	str[i] = '\0';

	return (str);
}
