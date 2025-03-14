#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * array_range - Creates an array of integers.
 * @min: The minimum value (inclusive).
 * @max: The maximum value (inclusive).
 *
 * Return: Pointer to the newly created array, or NULL
 * if min > max or if malloc fails.
 */
int *array_range(int min, int max)
{
	int *array;
	int i;
	int size = max - min + 1;

	if (min > max)
	{
		return (NULL);
	}
	
	array = malloc(size * sizeof(int));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = min + i;
	}

	return (array);
}
