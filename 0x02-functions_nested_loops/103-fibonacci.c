#include <stdio.h>
#include "main.h"

/**
 * main - This program prints the first 50 Fibonacci numbers
 *
 * Return: Alwals 0 (Success)
 */

int main(void)
{
	int i = 0;
	long sum = 0;
	long fib[50];

	fib[0] = 1;
	fib[1] = 2;
	while (fib[i] <= 4000000)
	{
		i++;
		if (i >= 2)
		{
			fib[i] = fib[i - 1] + fib[i - 2];
		}
		if (fib[i] % 2 == 0)
		{
			sum += fib[i];
		}
	}
	printf("%ld\n", sum);
	return (0);
}
