#include "main.h"

/**
 * _strncat - concatenates two strings.
 *
 * @dest: destination string.
 * @src: source string.
 * @n: bytes to concatinate.
 *
 * Return: dest string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (src[j] != '\0')
	{
		if ((j > 0 && j < n) || dest[i] == '\0')
		{
			dest[i] = src[j];
			j++;
		}
		if (j == n)
			break;
		i++;
	}
	return (dest);
}
