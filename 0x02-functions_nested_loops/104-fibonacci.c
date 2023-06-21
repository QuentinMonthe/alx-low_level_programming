#include <stdio.h>
#include "main.h"

/**
 * main - This program prints the first 98 Fibonacci numbers
 *
 * Return: Alwals 0 (Success)
 */

int main(void)
{
	int i;
	unsigned long a = 1, b = 2, c, j1, j2, k1, k2;

	printf("%ld", a);
	for (i = 1; i < 91; i++)
	{
		if (i == 1)
		{
			c = b;
		} else
		{
			c = a + b;
			a = b;
			b = c;
		}
		printf(", %ld", c);
	}

	j1 = b / 1000000000;
	j2 = b % 1000000000;
	k1 = a / 1000000000;
	k2 = a % 1000000000;

	for (i = 91; i < 97; ++i)
	{
		printf(", %ld", k1 + (k2 / 1000000000));
		printf("%ld", k2 % 1000000000);
		k1 = k1 + j1;
		j1 = k1 - j1;
		k2 = k2 + j2;
		j2 = k2 - j2;
	}

	printf("\n");

	return (0);
}
