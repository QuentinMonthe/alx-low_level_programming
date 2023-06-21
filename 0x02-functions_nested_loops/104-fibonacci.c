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
	unsigned long a = 1, b = 2, c;

	for (i = 0; i < 97; i++)
	{
		if (i == 0)
		{
			c = a;
		} else if (i == 1)
		{
			c = b;
		} else
		{
			c = a + b;
			a = b;
			b = c;
		}
		printf("%ld, ", c);
	}
	printf("%ld\n", a + b);
	return (0);
}
