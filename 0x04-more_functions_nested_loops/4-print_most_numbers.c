#include "main.h"

/**
 * print_most_numbers - This program prints the numbers from 0 to 9.
 *
 * Return: Nothing
 */

void print_most_numbers(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar('0' + i);
		}
	}
	_putchar('\n');
}
