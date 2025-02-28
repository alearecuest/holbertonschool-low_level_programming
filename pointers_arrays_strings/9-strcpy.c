#include "main.h"

/**
 * _strcpy - copy the chain pointed by src to the buffer
 * pointed by dest.
 * @dest: destiny of the copy.
 * @src: source of the chain to copy.
 *
 * Return: the point to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != ('\0'); i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
