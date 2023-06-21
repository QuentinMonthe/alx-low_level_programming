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
	unsigned long a = 1, b = 2, c, a1, a2, b1, b2;
	unsigned long limit = 1000000000;

	printf("%ld", a);
	for (i = 1; i < 80; i++)
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

	b1 = b / limit;
	b2 = b % limit;
	a1 = a / limit;
	a2 = a % limit;

	for (i = 80; i < 97; ++i)
	{
		printf(", %ld%ld", b1, b2);
		c = b2 + a2;
		b1 = b1 + a1 + c / limit;
		b2 = c % limit;
		a1 = b1 - a1 - c / limit;
		a2 = c - a2;
	}

	printf("\n");

	return (0);
}
