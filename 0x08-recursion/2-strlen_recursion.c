#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - the function returns the length of a string
 * @s: string to calculate length
 *
 * Return: length of a string.
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	} else
		return (0);
}
