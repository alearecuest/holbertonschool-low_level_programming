#include "main.h"
#include <stdio.h>

/**
 * rev_string - inverse a string of characters.
 * @s: string of characters.
 *
 * Return: void
 */
void rev_string(char *s)
{
	int leng = 0;
	int i;
	char temp;

	while (s[leng] != ('\0'))
	{
		leng++;
	}
	for (i = 0; i < leng / 2; i++)
	{
		temp = s[i];
		s[i] = s[leng - 1 - i];
		s[leng - 1 - i] = temp;
	}
}
