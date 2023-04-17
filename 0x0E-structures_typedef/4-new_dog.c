#include "dog.h"

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
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 *
 * @dest: target output pointer
 * @src: source pointer.
 *
 * Return: pointer to @dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog struct.
 *
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: new dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int l1, l2;
	dog_t *d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);

	l1 = _strlen(name);
	l2 = _strlen(owner);

	d->name = malloc(l1 * sizeof(char) + 1);
	d->owner = malloc(l2 * sizeof(char) + 1);

	_strcpy(d->name, name);
	d->age = age;
	_strcpy(d->owner, owner);

	return (d);
}
