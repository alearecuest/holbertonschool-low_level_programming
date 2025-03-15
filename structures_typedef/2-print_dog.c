#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints a struct dog
 * @d: Pointer to the struct dog to print
 *
 * Description: This function prints the members of a struct dog.
 * If an element of d is NULL, it prints (nil) instead of this element.
 * If d is NULL, it prints nothing.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
	{
		printf("name: (nil)\n");
	}

	else
		printf("name: %s\n", d->name);

	printf("age: %1.f\n", d->age);

	if (d->owner == NULL)
	{
		printf("owner: (nil)\n");
	}

	else
		printf("owner: %s\n", d->owner);
}
