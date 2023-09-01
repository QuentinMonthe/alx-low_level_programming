#include "main.h"
#include <unistd.h>
#include <stdlib.h>

/**
 * _strcmp - This function compares two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: Nothing
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}

	return (s1[i] - s2[i]);
}
