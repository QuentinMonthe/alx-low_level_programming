#include <stdio.h>
#include "main.h"

/**
 * puts_recursion - the function prints a string
 *
 * Return: Nothing.
 */

void _puts_recursion(char *s)
{
	_putchar(*s);

	if (*(s + 1) != '\0')
	{
		_puts_recursion(s + 1);
	} else
		_putchar('\n');
}
