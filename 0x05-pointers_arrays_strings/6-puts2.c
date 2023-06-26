#include "main.h"
#include <unistd.h>

/**
 * puts2 - This function prints a string.
 * @str: pointer to a char list (string)
 *
 * Return: Nothing
 */

void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);

		if (*(str + 1) == '\0')
		{
			str++;
		} else
			str += 2;
	}
	_putchar('\n');
}
