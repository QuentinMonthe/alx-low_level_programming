#include "main.h"

/**
 * _isdigit - This program checks for a digit (0 through 9).
 * @c: ascii value of the character
 *
 * Return: 1 if character is a digit and 0 else
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	} else
		return (0);
}
