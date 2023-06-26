#include "main.h"
#include <unistd.h>

/**
 * _puts - This function prints a string.
 * @str: pointer to a char list (string)
 *
 * Return: Nothing
 */

void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
