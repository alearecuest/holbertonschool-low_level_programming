#include "main.h"

/**
 * print_rev - print a string in reverse, follow by a next new line.
 * @s: string of characters.
 *
 * Return: void
 */
void print_rev(char *s)
{
	int leng = 0;
	int i;

	while (s[leng] != ('\0'))
	{
		leng++;
	}
	for (i = leng - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
