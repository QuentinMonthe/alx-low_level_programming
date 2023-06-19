#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry part of the program
 *
 * Description: This program print the digit of hedecimal
 *
 * Return: Always return 0
 */

int main(void)
{
	char n = '0';

	while (n <= 'f')
	{
		putchar(n);
		if (n == '9')
		{
			n = 'a';
		} else
			n++;
	}
	putchar('\n');
	return (0);
}
