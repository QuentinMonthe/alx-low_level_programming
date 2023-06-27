#include "main.h"
#include <unistd.h>

/**
 * puts_half - This function prints second half of a string.
 * @str: pointer to a char list (string)
 *
 * Return: Nothing
 */

void puts_half(char *str)
{
	int n, length_of_the_string = 0;
	char c;

	while (*(str + length_of_the_string) != '\0')
	{
		length_of_the_string++;
	}

	if (length_of_the_string % 2 == 0)
	{
		n = length_of_the_string / 2;
	} else
		n = (length_of_the_string - 1) / 2;

	while (*(str + n) != '\0')
	{
		c = *(str + n);
		_putchar(c);
		n++;
	}
	_putchar('\n');
}
