#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: pointer to the memory area to be filled.
 * @b: the byte to fill the memory with.
 * @n: number of bytes to be filled.
 *
 * Return: a pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
