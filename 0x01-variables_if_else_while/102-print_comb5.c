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
	int n = 0;
	int k = 0;
	int p = 0;
	int a = 1

	while (n <= 9)
	{
		k = n + 1;
		while (k <= 9)
		{
			p = k + 1;
			while (p <= 9)
			{
				a = p + 1;
				while (a <= 9)
				{
					putchar(n + '0');
					putchar(k + '0');
					putchar(' ');
					putchar(p + '0');
					putchar(a + '0');
					if (n <= 9 && k <= 8)
					{
						putchar(',');
						putchar(' ');
					}
					a++;
				}
				p++;
			}
			k++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
