#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - this funtion returns sum of all parameters
 * @n: numbers of parameters
 *
 * Return: Sum of number.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list argp;
	unsigned int i;
	int sum = 0;

	va_start(argp, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(argp, int);
	}

	va_end(argp);

	return (sum);
}
