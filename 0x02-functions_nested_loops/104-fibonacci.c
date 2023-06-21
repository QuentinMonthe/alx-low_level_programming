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
			a = b;
			b = c;
			c = a + b;
		}
		printf("%ld, ", c);
	}
	printf("%ld\n", b + c);
	return (0);
}
