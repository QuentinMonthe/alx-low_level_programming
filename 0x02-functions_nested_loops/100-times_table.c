#include "main.h"

/**
 * print_times_table - This program prints the times table
 * @n: The value of times
 *
 * Return: Nothing
 */

void print_times_table(int n)
{
	int i, j, val, c, d, tmp;

	if (n < 15 && n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if (j == 0)
				{
					_putchar(48);
				} else
				{
					val = i * j;
					tmp = val % 100;
					c = val < 100 ? -16 : val / 100;
					d = val < 10 ? -16 : tmp < 10 ? 0 : tmp / 10;
					_putchar(44);
					_putchar(32);
					_putchar(c + 48);
					_putchar(d + 48);
					_putchar((val % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
