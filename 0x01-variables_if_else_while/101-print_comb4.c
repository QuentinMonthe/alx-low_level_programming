#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry part of the program
 *
 * Description: This program print the combo of 3 digits
 *
 * Return: Always return 0
 */

int main(void)
{
	int n = 0;
	int k = 1;
	int p = 2;

	while (n <= 7)
	{
		k = n + 1;
		while (k <= 8)
		{
			p = k + 1;
			while (p <= 9)
			{
				putchar(n + '0');
				putchar(k + '0');
				putchar(p + '0');
				if (n < 7)
				{
					putchar(',');
					putchar(' ');
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
