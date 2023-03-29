#include "main.h"

/**
 * _strcat - concatenates two strings.
 *
 * @dest: destination string.
 * @src: source string.
 *
 * Return: dest string.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (src[j] != '\0')
	{
		if (j > 0 || dest[i] == '\0')
		{
			dest[i] = src[j];
			j++;
		}
		i++;
	}
	return (dest);
}
