#include "main.h"

/**
 * puts_half - prints the second half of a string.
 * @str: chain of characters.
 *
 * Return: void
 */
void puts_half(char *str)
{
	int length = 0;
	int i, n;

	while (str[length] != ('\0'))
	{
		length++;
	}
	if (length % 2 == 0)
	{
		n = length / 2;
	}
	else
	{
		n = (length + 1) / 2;
	}

	for (i = n; str[i] != ('\0'); i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
