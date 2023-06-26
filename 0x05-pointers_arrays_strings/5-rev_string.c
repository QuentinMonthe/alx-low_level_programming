#include "main.h"

/**
 * rev_string - This function reverses a string.
 * @s: pointer to a char list (string)
 *
 * Return: Nothing
 */

void rev_string(char *s)
{
	int i, n = 0;
	char c, *tmp1, *tmp2;

	while (*(s + n) != '\0')
	{
		n++;
	}

	n--;
	tmp1 = s;
	tmp2 = s + n;

	for (i = 0; i <= (n / 2); i++)
	{
		c = *tmp1;
		*tmp1 = *tmp2;
		*tmp2 = c;

		tmp1++;
		tmp2--;
	}
}
