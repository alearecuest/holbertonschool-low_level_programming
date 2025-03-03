#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring.
 * @haystack: the string to be searched.
 * @needle: the substring to be located.
 *
 * Return: a pointer to the biginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *h;
	char *n;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;

		while (*n != '\0' && *haystack == *n)
		{
			haystack++;
			n++;
		}

		if (*n == '\0')
		{
			return (h);
		}

		haystack = h + 1;
	}

	return (NULL);
}
