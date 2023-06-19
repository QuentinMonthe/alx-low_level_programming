/*
 * File: 0-positive_or_negative.c
 * Auth: Quentin Monthe
 */ 

#include <stdlib.h>
#include <time.h>

/*
 * main - This program generate a random number and print it sign.
 * Return: Always 0 (Success).
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n == 0) {
		print("%d is zero\n", n);
	} else {
		if (n > 0) {
			print("%d is positive\n", n);
		} else {
			print("%d is negative\n", n);
		}
	}
	return (0);
}
