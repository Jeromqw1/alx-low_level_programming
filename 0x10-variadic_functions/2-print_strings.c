#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - Prints strings
 * @separator: The string to be printed
 * @n: The number of strings to the funtion
 * @...: Variable number of strings
 * Description: Separator is NULL, does not print
 *	When one of the strings is NULL, (nil) is printed rather
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int z;

	va_start(strings, n);
	for (z = 0; z < n; z++)
	{
		str = va_arg(strings, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (z != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
