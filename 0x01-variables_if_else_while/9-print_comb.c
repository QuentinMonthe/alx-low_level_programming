#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry part of the program
 *
 * Description: This program print the single-digit numbers
 *
 * Return: Always return 0
 */

int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar(n + '0');
		if (n < 9)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
