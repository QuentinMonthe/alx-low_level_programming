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
	int i = 0, j = 0;
	char *lower = "aeotl";
	char *upper = "AEOTL";
	char *encode = "43071";

	while (str[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == lower[j] || str[i] == upper[j])
			{
				str[i] = encode[j];
				break;
			}
		}
		i++;
	}

	return (str);
}
