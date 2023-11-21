#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes - this function prints opcodes of main function
 * @bytes: number bytes
 *
 * Return: Nothing
 */
void print_opcodes(int bytes, int (*f)(int, char **))
{
	int i;
	void *main_ptr = (void *)f;

	unsigned char *opcodes_ptr = (unsigned char *)main_ptr;

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < bytes; i++)
	{
		printf("%02x", opcodes_ptr[i]);
		if (i != bytes - 1)
		{
			printf(" ");
		} else 
			printf("\n");
	}
}

/**
 * main - this program prints opcodes of main function
 * @argc: number of argument
 * @argv: array of argument
 *
 * Return: Always 0 (Success), or 1 if not.
 */
int main(int argc, char *argv[])
{
	int bytes;

	if (argc != 2)
	{
		printf("Error\n");

		return (1);
	}

	bytes = atoi(argv[1]);

	print_opcodes(bytes, &main);

	return (0);
}
