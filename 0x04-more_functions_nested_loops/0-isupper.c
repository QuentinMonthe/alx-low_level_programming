#include "main.h"

/**
 * _isupper - This program checks for uppercase character
 * @c: ascii value of the character
 *
 * Return: 1 if character is uppercase and 0 else
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	} else
		return (0);
}
