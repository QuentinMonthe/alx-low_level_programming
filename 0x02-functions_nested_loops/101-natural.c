#include <stdio.h>

/**
 * main - This program that prints the sum of all
 * the multiples of 3 or 5 below 1024
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int sum3 = 0;
	int sum5 = 0;

	for (i = 2; i < 1024; i++)
	{
		if (i % 3 == 0)
		{
			sum3 += i;
		}
		if (i % 3 != 0 && i % 5 == 0)
		{
			sum5 += i;
		}
	}
	printf("%d\n", sum3 + sum5);
	return (0);
}
