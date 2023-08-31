#include <stdio.h>
#include "main.h"

/**
 * main - Fizz-Buzz test.
 *
 * Return: 1 to success
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		} else if (i % 3 == 0)
		{
			printf("Fizz");
		} else if (i % 5 == 0)
		{
			printf("Buzz");
		} else
			printf("%d", i);
		printf(" ");
	}
	printf("\n");

	return (1);
}
