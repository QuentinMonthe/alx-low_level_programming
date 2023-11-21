#include <stdio.h>
#include <stdlib.h>

/**
 * main - the program prints the minimum number of coins to make change
 * @argc: number argument
 * @argv: array of argument
 *
 * Return: Always 0 (Success), or 1 if not.
 */

int main(int argc, char *argv[])
{
	int i, value, num = 0;
	int cents[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");

		return (1);
	}

	value = atoi(argv[1]);

	if (value > 0)
	{
		for (i = 0; i < 5; i++)
		{
			num += value / cents[i];
			value = value % cents[i];

			if (value == 0)
				break;
		}
	}

	printf("%d\n", num);

	return (0);
}
