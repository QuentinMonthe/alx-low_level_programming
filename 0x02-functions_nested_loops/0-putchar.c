#include"main.h"

/**
 * main - Entry part of the program
 *
 * Description: This program print the _putchar
 *
 * Return: Always return 0
 */

int main(void)
{
	char letters[] = "_putchar";
	int n = 0;

	while (letters[n] != '\0')
	{
		_putchar(letters[n]);
		n++;
	}
	_putchar('\n');
	return (0);
}
