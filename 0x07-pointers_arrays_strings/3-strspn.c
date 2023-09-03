#include "main.h"
#include <unistd.h>
#include <stdlib.h>

/**
 * _strspn - This function gets the length of a prefix substring.
 * @s: pointer to string
 * @accept: aphabet segment string
 *
 * Return: number bytes of segment s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j = 0, start = 0, res = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) != ' ' && *(s + i) != '\n' && *(s + i) != '\t'
				&& *(s + i) != ',' && *(s + i) != ';' && *(s + i) != '!'
				&& *(s + i) != '?' && *(s + i) != '"' && *(s + i) != '('
				&& *(s + i) != ')' && *(s + i) != '{' && *(s + i) != '}'
				&& *(s + i) != '.')
		{
			j = 0;
			while (*(accept + j) != '\0')
			{
				if (*(accept + j) == *(s + i))
				{
					res++;
					break;
				}
				j++;
			}
		} else
		{
			if (i == start)
			{
				start = i;
				res = 0;
			} else if (res == (i - start))
			{
				return (res);
			} else
				res = 0;
		}
		i++;
	}

	return (0);
}
