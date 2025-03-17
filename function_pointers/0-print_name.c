#include <stdio.h>
#include "main.h"

/**
 * print_name - Prints a name using a given function
 * @name: The name to be printed
 * @f: A pointer to a function that takes a char pointer as an argument
 *
 * Description: This function takes a name and a function pointer as arguments.
 * It calls the function pointed to by `f`, passing the name as an argument.
 * If either `name` or `f` is NULL, the function does nothing.
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}

	f(name);
}
