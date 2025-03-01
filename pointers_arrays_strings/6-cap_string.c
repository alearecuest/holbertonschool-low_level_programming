#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @str: the string to modify.
 *
 * Return: the modified string
 */
char *cap_string(char *str)
{
	int i = 0;
	int capit = 1;

	char separ[] = " \t\n,;.!?\"(){}";
	int j;

	while (str[i] != '\0')
	{
		if (capit && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 32;
		}
		capit = 0;

		for (j = 0; separ[j] != '\0'; j++)
		{
			if (str[i] == separ[j])
			{
				capit = 1;
				break;
			}
		}
		i++;
	}

	return (str);
}
