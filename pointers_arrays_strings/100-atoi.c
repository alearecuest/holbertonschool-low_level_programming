#include "main.h"
#include <limits.h>

/**
 * _atoi - transforms a strings in an integer number with
 * drive of signs and errors.
 * @s: La cadena de entrada.
 *
 * Return: integer number transforms, if no numbers be 0
 */
int _atoi(char *s)
{
	int sign = 1, num_started = 0;
	int result = 0;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;
		else if (*s == '+')
			sign *= 1;

		else if (*s >= '0' && *s <= '9')
		{
			num_started = 1;
			if (result > (INT_MAX / 10) || (result == (INT_MAX / 10) && (*s - '0') > (INT_MAX % 10)))
				return (sign == 1 ? INT_MAX : INT_MIN);

			result = result * 10 + (*s - '0');
		}
		else if (num_started)
			break;

		s++;
	}
	return (num_started ? result * sign : 0);
}
