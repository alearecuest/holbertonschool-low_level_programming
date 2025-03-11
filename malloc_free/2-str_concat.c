#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to a newly allocated space in memory which contains
 *         the contents of s1, followed by the contents of s2,
 *         and null terminated.
 *         If NULL is passed, treat it as an empty string.
 *         The function returns NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, leng1, leng2;
	char *conca;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		leng1++;
	}
	for  (j = 0; s2[j] != '\0'; j++)
	{
		leng2++;
	}

	conca = malloc((leng1 + leng2 + 1) * sizeof(char));
	if (conca == NULL)
		return (NULL);

	for (i = 0; i < leng1; i++)
		conca[i] = s1[i];

	for (j = 0; j < leng2; j++)
		conca[leng1 + i] = s2[i];
	conca[leng1 + leng2] = '\0';

	return (conca);
}
