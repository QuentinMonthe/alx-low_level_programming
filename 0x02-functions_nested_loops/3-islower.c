#include "main.h"

/**
 * _islower - This function checks for lowercase character
 *@c: It is the ASCII value of char variable
 *
 * Return: 1 if the input value is lowercase and 0 for another values
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
