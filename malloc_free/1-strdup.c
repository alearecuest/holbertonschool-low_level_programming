#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter.
 * @str: The string to duplicate.
 *
 * Return: A pointer to the duplicated string, or NULL if str is NULL
 *         or if insufficient memory was available.
 */
char *_strdup(char *str)
{
	int i = 0;
	int j = 0;
	char *dupl;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
	}

	dupl = malloc((i + 1) * sizeof(char));

	if (dupl == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		dupl[j] = str[j];

	return (dupl);
}
