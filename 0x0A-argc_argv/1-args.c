#include <stdio.h>
#include <stdlib.h>

/**
 * main - the program prints the number of arguments passed
 * @argc: number argument
 * @argv: array of argument
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%d\n", argc);
	}

	return (0);
}
