#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry part of the program
 *
 * Description: This program print all possible combinations of
 * two two-digit numbers.
 *
 * Return: Always return 0
 */

int main(void)
{
	int i;
	int i;

	for (i = 0; i < 100; i++)
	{
		for (j = 0; j < 100; j++)
		{
			if (i < j)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(' ');
				putchar((j / 10) + 48);
				putchar((j % 10) + 48);
				if (i != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
