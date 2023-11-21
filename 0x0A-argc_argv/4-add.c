#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * isInteger - the function check if the type of argument is integer
 * @value: argument to check
 *
 * Return: Always 1 (Success), or 0 if not.
 */
int isInteger(char *value)
{
	int i;

	if (value == NULL || *value == '\0')
		return (0);

	for (i = 0; value[i] != '\0'; i++)
	{
		if (!isdigit(value[i]))
			return (0);
	}

	return (1);
}

/**
 * main - the program adds positive numbers
 * @argc: number argument
 * @argv: array of argument
 *
 * Return: Always 0 (Success) or 1 if not.
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (!isInteger(argv[i]))
			{
				printf("Error\n");

				return (1);
			}

			sum += atoi(argv[i]);
		}
	}

	printf("%d\n", sum);

	return (0);
}
