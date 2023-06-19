#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry part of the program
 *
 * Description: This program print the alphabet
 *
 * Return: Always return 0
 */

int main(void)
{
	char letters[] = "abcdfghijklmnoprstuvwxyz";
	int n = 0;

	while (letters[n] != '\0')
	{
		putchar(letters[n]);
		n++;
	}
	putchar('\n');
	return (0);
}
