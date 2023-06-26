#include "main.h"
#include <unistd.h>

/**
 * print_rev - This function prints a string in reverse.
 * @s: pointer to a char list (string)
 *
 * Return: Nothing
 */

void print_rev(char *s)
{
	int n = 0;
	char c;

	while (*(s + n) != '\0')
	{
		n++;
	}

	n--;

	while (n >= 0)
	{
		c = *(s + n);
		_putchar(c);
		n--;
	}
	_putchar('\n');
}
