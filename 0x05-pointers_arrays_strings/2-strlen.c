#include "main.h"

/**
 * _strlen - This function returns the length of a string.
 * @s: pointer to a char list (string)
 *
 * Return: The length of string params
 */

int _strlen(char *s)
{
	int n = 0;

	while (*(s + n) != '\0')
	{
		n++;
	}

	return (n);
}
