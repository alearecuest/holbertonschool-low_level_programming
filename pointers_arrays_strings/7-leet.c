#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @str: the string to encode.
 *
 * Return: the modified string
 */
char *leet(char *str)
{
	int i;
	int j;
	char letters[] = "aAeEoOtTlL";
	char leet_num[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = leet_num[j];
				break;
			}
		}
	}

	return (str);
}
