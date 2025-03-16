#include <stdlib.h>
#include "dog.h"

/**
 * _strcpy - Copies a string into a new memory space
 * @dest: Pointer to the destination
 * @src: Source string
 * Return: Pointer to the copied string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * _strlen - Calculates the length of a string
 * @s: String of characters
 * Return: Length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;
	return (length);
}


/**
 * new_dog - Creates a new dog with dynamically allocated memory
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 * Return: Pointer to the new dog_t structure, or NULL
 * if allocation fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	if (!name || !owner)
		return (NULL);

	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);

	d->name = malloc(_strlen(name) + 1);
	if (!d->name)
	{
		free(d);
		return (NULL);
	}

	d->owner = malloc(_strlen(owner) + 1);
	if (!d->owner)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	_strcpy(d->name, name);
	_strcpy(d->owner, owner);
	d->age = age;

	return (d);
}
