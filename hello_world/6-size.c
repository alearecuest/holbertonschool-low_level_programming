#include <stdio.h>

#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the sizes of various data types on the computer
 * it is compiled and run on.
 *
 * Return: 0 if the program executes successfully.
 */
int main(void)
{
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}
