#include <stdio.h>
#include "main.h"

/**
 * main - Fizz-Buzz test.
 *
 * Return: 0 to success
 */

int main(void)
{
	int i;
	char c;

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

		c = i != 100 ? ' ' : '\n';
		printf("%c", c);
	}

	return (0);
}
