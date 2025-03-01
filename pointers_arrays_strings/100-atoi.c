#include "main.h"

/**
 * _atoi - converse a chain in a integer number.
 * @s: chain of characters.
 *
 * Return: the integer number converted in a chain
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	while (s[i] != ('\0') && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}

	while (s[i] != ('\0') && (s[i] >= '0' && s[i] <= '9'))
	{
		result = (result * 10) + (s[i] - '0');
		i++;
	}
	return (result * sign);
}
