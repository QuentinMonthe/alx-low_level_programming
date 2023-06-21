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

	for (i = 3; i < 1024; i++)
	{
		if (i % 3 == 0)
		{
			sum3 += sum3;
		}
		if (i % 5 == 0)
		{
			sum5 += sum5;
		}
	}
	printf("%d\n", sum3 + sum5);
	return (0);
}
