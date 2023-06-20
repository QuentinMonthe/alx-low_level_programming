#include "main.h"

/**
 * _isalpha - This function checks for alphabetic character
 *@c: It is the ASCII value of char variable
 *
 * Return: 1 if the input value is a letter and 0 for another values
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
