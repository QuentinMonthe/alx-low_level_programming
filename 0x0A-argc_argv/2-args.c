#include <stdio.h>
#include <stdlib.h>

/**
 * main - the program prints all arguments it receives
 * @argc: number argument
 * @argv: array of argument
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}

	return (0);
}
