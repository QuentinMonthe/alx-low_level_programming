#include "main.h"
#include <unistd.h>

/**
 * _puts - This function prints a string.
 * @str: pointer to a char list (string)
 *
 * Return: Nothing
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
