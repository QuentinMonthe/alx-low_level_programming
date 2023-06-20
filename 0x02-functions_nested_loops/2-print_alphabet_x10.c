#include "main.h"

/**
 * print_alphabet_x10 - This program print the alphabet x10
 *
 * Return: Nothing
 */

void print_alphabet_x10(void)
{
	char c = 'a';
	int n = 0;

	while (n < 10)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		c = 'a';
		n++;
		_putchar('\n');
	}
}
