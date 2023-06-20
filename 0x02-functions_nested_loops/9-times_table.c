#include "main.h"

/**
 * times_table - This program prints the 9 times table
 *
 * Return: Nothing
 */

void times_table(void)
{
	int i, j, val, c;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j == 0)
			{
				_putchar(48);
			} else
			{
				val = i * j;
				c = val < 10 ? -16 : val / 10;
				_putchar(44);
				_putchar(32);
				_putchar(c + 48);
				_putchar((val % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
