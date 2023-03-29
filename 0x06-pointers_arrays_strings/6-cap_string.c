#include "main.h"

/**
 * in_array - check a character is in a string
 *
 * @s: string to check
 * @c: char to check
 *
 * Return: 1 true, 0 false
 */
int in_array(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

/**
 * cap_string - capitalizes all words of a string.
 *
 * @str: string to capitalize words
 *
 * Return: pointer co capitalized string
 */
char *cap_string(char *str)
{
	char c = ' ';
	char ch[] = {
		' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'
	};
	int i = 0;

	while (str[i] != '\0')
	{
		if (in_array(ch, c) && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] = (str[i] - 'a') + 'A';
		c = str[i];
		i++;
	}
	return (str);
}
