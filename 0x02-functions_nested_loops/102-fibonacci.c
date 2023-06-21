#include <stdio.h>
#include "main.h"

/**
 * main - This program prints the first 50 Fibonacci numbers
 *
 * Return: Alwals 0 (Success)
 */

int main(void)
{
	int i;
	long long fib[50];

	fib[0] = 1;
	fib[1] = 2;
	for (i = 0; i < 49; i++)
	{
		if (i >= 2)
		{
			fib[i] = fib[i - 1] + fib[i - 2];
		}
		printf("%lld, ", fib[i]);
	}
	printf("%lld\n", fib[47] + fib[48]);
	return (0);
}
