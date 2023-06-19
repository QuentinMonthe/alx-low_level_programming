/*
 * File: 0-positive_or_negative.c
 * Auth: Quentin Monthe
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * main - This program generate a random number and print it sign.
 * Return: Always 0 (Success).
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
	{
		printf("%d is zero\n", n);
	} else
		if (n > 0)
		{
			printf("%d is positive\n", n);
		} else
			printf("%d is negative\n", n);
	return (0);
}
