#include "main.h"
#include <unistd.h>
#include <stdlib.h>

/**
 * _strstr - This function locates a substring.
 * @haystack: string
 * @needle: substring
 *
 * Return: pointer to the string or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0, start = 0;

	while (*(haystack + i) != '\0')
	{
		j = 0;
		start = i;
		while (*(needle + j) != '\0' && *(needle + j) == *(haystack + i))
		{
			j++;
			i++;
		}

		if (*(needle + j) == '\0')
		{
			return ((haystack + start));
		}

		if (i == start)
		{
			i++;
		}
	}

	return (NULL);
}
