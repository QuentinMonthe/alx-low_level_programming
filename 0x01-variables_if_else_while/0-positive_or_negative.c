/*
 * File: 0-positive_or_negative.c
 * Auth: Quentin Monthe
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * main: This program print if the number is postive, zero, or negative.
 * Description: using the main function for return the sign of a random number
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
