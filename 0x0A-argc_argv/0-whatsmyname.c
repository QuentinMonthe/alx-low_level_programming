#include <stdio.h>
#include <stdlib.h>

/**
 * main - the program prints its name
 * @argc: number argument
 * @argv: array of argument
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
