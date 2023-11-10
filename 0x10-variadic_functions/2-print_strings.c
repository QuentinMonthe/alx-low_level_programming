#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - this funtion prints numbers in parameters
 * @separator: string to be printed between numbers
 * @n: number of integers passed
 *
 * Return: Nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list argp;
	unsigned int i;
	char *str, *nil = "(nil)";

	va_start(argp, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(argp, char*);
		if (str == NULL)
			str = nil;

		printf("%s", str);
		if (i < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(argp);
}
