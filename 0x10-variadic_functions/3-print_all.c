#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * get_int - this function print integer argument of va_list
 * @argp: va_list
 * @separator: separator
 *
 * Return: Nothing.
 */
void get_int(va_list argp, char *separator)
{
	printf("%s%d", separator, va_arg(argp, int));
}

/**
 * get_char - this function print char argument of va_list
 * @argp: va_list
 * @separator: separator
 *
 * Return: Nothing.
 */
void get_char(va_list argp, char *separator)
{
	printf("%s%c", separator, va_arg(argp, int));
}

/**
 * get_float - this function print float argument of va_list
 * @argp: va_list
 * @separator: separator
 *
 * Return: Nothing.
 */
void get_float(va_list argp, char *separator)
{
	printf("%s%f", separator, va_arg(argp, double));
}

/**
 * get_str - this function print string argument of va_list
 * @argp: va_list
 * @separator: separator
 *
 * Return: Nothing.
 */
void get_str(va_list argp, char *separator)
{
	char *str = va_arg(argp, char *);

	if (str == NULL)
		str = "(nil)";

	printf("%s%s", separator, str);
}

/**
 * print_all - this funtion prints numbers in parameters
 * @format: list of type of arguments
 *
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
	va_list argp;
	int i = 0, j = 0;
	char array[] = {'c', 'i', 'f', 's'};
	char *separator = "";

	void (*f[])(va_list, char *) = {get_char, get_int, get_float, get_str};

	va_start(argp, format);
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (array[j] == format[i])
			{
				f[j](argp, separator);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}

	printf("\n");
	va_end(argp);
}
