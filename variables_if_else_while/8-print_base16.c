#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Program that prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	char hex;

	for (num = 0; num < 10; num++)
		putchar(num + '0');
	for (hex = 'a'; hex <= 'f'; hex++)
		putchar(hex);
	putchar('\n');

	return (0);
}
