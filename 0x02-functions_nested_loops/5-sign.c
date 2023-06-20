#include "main.h"

/**
 * print_sign - This function print the sign of the number get in param
 *@n: Variable to check and print the sign
 *
 * Return: 1 for the positive value, 0 for zero and
 * -1 for another values
 */

int print_sign(int n)
{
	if (n > 1)
	{
		_putchar(43);
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar(45);
	return (-1);
}
