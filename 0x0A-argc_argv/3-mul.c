#include <stdio.h>
#include <stdlib.h>

/**
 * main - the program multiplies two numbers
 * @argc: number argument
 * @argv: array of argument
 *
 * Return: Always 0 (Success) or 1 if not.
 */

int main(int argc, char *argv[])
{
	int mul;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", mul);

		return (0);
	}

	printf("Error\n");

	return (1);
}
