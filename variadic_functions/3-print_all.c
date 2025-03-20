#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - Prints anything based on the format provided.
 * @format: A list of types of arguments passed to the function.
 *
 * Description: This function prints various types of arguments
 * (char, integer, float, and string) based on the format specified.
 * If the string argument is NULL, it prints (nil) instead.
 * Any other character in the format string is ignored.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, printed = 0;
	char *str;

	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				if (printed)
					printf(", ");
				printf("%c", va_arg(args, int));
				printed = 1;
				break;
			case 'i':
				if (printed)
					printf(", ");
				printf("%d", va_arg(args, int));
				printed = 1;
				break;
			case 'f':
				if (printed)
					printf(", ");
				printf("%f", (float)va_arg(args, double));
				printed = 1;
				break;
			case 's':
				if (printed)
					printf(", ");
				str = va_arg(args, char *);
				if (!str)
					str = "(nil)";
				printf("%s", str);
				printed = 1;
				break;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
