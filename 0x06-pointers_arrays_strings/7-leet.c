#include "main.h"
#include <unistd.h>
#include <stdlib.h>

/**
 * leet - This function encodes a string into 1337
 * @str: string to encode
 *
 * Return: String encoded
 */

char *leet(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] == 'a' || str[i] == 'A')
		{
			str[i] = '4';
			i++;
		} else if (str[i] == 'e' || str[i] == 'E')
                {
                        str[i] = '3';
                        i++;
                } else if (str[i] == 'o' || str[i] == 'O')
                {
                        str[i] = '0';
                        i++;
                } else if (str[i] == 't' || str[i] == 'T')
                {
                        str[i] = '7';
                        i++;
                } else if (str[i] == 'l' || str[i] == 'L')
                {
                        str[i] = '1';
                        i++;
                } else
			i++;
	}

	return (str);
}
