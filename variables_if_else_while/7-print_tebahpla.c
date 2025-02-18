#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Program taht prints the lowercase alphabet in reverse, followed
 * by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 122; ch >= 97; ch--)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
