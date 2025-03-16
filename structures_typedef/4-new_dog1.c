#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int i, name_length = 0, owner_length = 0;

	if (name == NULL || owner == NULL)
		return (NULL);

	while (name[name_length] != '\0')
		name_length++;
	while (owner[owner_length] != '\0')
		owner_length++;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_dog->name = malloc(name_length + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	for (i = 0; i <= name_length; i++)
		new_dog->name[i] = name[i];

	new_dog->owner = malloc(owner_length + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	for (i = 0; i <= owner_length; i++)
		new_dog->owner[i] = owner[i];

	new_dog->age = age;

	return (new_dog);
}
