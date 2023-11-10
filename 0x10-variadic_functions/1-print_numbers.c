#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - this funtion prints numbers in parameters
 * @separator: string to be printed between numbers
 * @n: number of integers passed
 *
 * Return: Nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list argp;
	unsigned int i;
	int num;

	va_start(argp, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(argp, int);
		printf("%d", num);

		if (separator != NULL && i < (n - 1))
		{
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(argp);
}
