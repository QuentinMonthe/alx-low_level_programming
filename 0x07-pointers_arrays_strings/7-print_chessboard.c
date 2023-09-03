#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_chessboard - This function prints the chessboard.
 * @a: pointer to array of character
 *
 * Return: Nothing
 */

void print_chessboard(char (*a)[8])
{
	long int rows = sizeof(a), i = 0, j = 0;

	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (a[i][j] != ' ')
			{
				_putchar(a[i][j]);
			}
		}
		_putchar('\n');
	}
}
