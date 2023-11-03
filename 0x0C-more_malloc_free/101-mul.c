#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two positive numbers
 * @argc: number of parameter argument
 * @argv: array of argument
 *
 * Return: terminate by 0 (Success) and 98 if not.
 */

int main(int argc, char *argv[])
{
	int i = 0, j = 0, num;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 1; i <= 2; i++)
	{
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] < 48 || argv[i][j] > 57)
			{
				printf("Error\n");
				exit(98);
			}
			j++;
		}
	}

	num = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", num);

	return (0);
}
