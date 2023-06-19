#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry part of the program
 *
 * Description: This program print the alphabet in reverse
 *
 * Return: Always return 0
 */

int main(void)
{
	char n = 'z';

	while (n >= 'a')
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
