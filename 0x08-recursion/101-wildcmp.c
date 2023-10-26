#include <stdio.h>
#include "main.h"

/**
 * wildcmp - the function compare two string
 * @s1: string one
 * @s2: srting two
 *
 * Return: 1 for success or 0 if not.
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && (*s2 == '\0' || (*s2 == '*' && *(s2 + 1) == '\0')))
	{
		return (1);
	}

	if (*s2 == '*')
	{
		return (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)));
	}

	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}

	return (0);
}

