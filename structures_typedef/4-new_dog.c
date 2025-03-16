#include <stdlib.h>
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
	dog_t *dog;
	int name_length = 0, owner_length = 0;
	int i;

	if (name == NULL || owner == NULL)
		return (NULL);

	while (name[name_length])
		name_length++;
	while (owner[name_length])
		owner_length++;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(name_length + 1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i <= name_length; i++)
		dog->name[i] = name[i];

	dog->owner = malloc(owner_length + 1);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	for (i = 0; i <= owner_length; i++)
		dog->owner[i] = owner[i];

	dog->age = age;

	return (dog);
}
