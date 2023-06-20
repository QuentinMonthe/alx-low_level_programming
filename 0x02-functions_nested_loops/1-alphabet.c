#include "main.h"

/**
 * print_alphabet - This program print the alphabet
 *
 * Return: Nothing
 */

void print_alphabet(void)
{
	char n = 'a';

	while (n <= 'z')
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
