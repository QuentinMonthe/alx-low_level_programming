#include "main.h"

/**
 * print_last_digit - This function print the last digit
 *@n: The number that it print last digit
 *
 * Return: The last digit of the input value
 */

int print_last_digit(int n)
{
	int c = n % 10;

	if (c < 0)
	{
		c = -c;
	}
	_putchar(c + 48);
	return (c);
}
