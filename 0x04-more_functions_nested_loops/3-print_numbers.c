#include "main.h"

/**
 * print_numbers - This program prints the numbers from 0 to 9.
 *
 * Return: Nothing
 */

void print_numbers(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		_putchar('0' + i);
	}
	_putchar('\n');
}
