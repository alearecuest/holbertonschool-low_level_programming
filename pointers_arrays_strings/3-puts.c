#include "main.h"

/**
 * _puts - prints a strring follow by a new line.
 * @str: string of characters.
 *
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
