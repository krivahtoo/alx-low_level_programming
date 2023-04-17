#include "dog.h"

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
	dog_t *d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);

	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
}
