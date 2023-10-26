#include <stdio.h>
#include "main.h"

/**
 * _str_length - the function calculate the length of string
 * @s: string to calculate
 *
 * Return: length of string.
 */

int _str_length(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _str_length(s + 1));
}

/**
 * _check_palindrome - the function check the palindrome
 * @s: string to check
 * @n: last position of the string
 *
 * Return: 1 for success or 0 if not.
 */

int _check_palindrome(char *s, int n)
{
	if (n <= 0 || (n == 1 && *s == *(s + n)))
	{
		return (1);
	}

	if (*s != *(s + n))
	{
		return (0);
	}

	return (_check_palindrome(s + 1, n - 2));
}


/**
 * is_palindrome - the function check the palindrome
 * @s: string to check
 *
 * Return: 1 for success or 0 if not.
 */

int is_palindrome(char *s)
{
	int len = _str_length(s);

	return (_check_palindrome(s, len - 1));
}
