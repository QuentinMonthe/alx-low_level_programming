#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry part of the program
 *
 * Description: This program print the combo of 2 digits
 *
 * Return: Always return 0
 */

int main(void)
{
	int n = 0;
	int k = 1;

	while (n < 9)
	{
		k = n + 1;
		while (k <= 9)
		{
			putchar(n + '0');
			putchar(k + '0');
			if (n < 8)
			{
				putchar(',');
				putchar(' ');
			}
			k++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
