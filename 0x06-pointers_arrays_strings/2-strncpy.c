#include "main.h"

/**
 * _strncpy - copies a string.
 *
 * @dest: destination location
 * @src: string to copy.
 * @n: count the bytes of src.
 *
 * Return: dest pointer.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (i < n)
	{
		if (j == i)
			dest[i] = src[i];
		else
			dest[i] = '\0';
		if (src[i] != '\0')
			j++;
		i++;
	}
	return (dest);
}
