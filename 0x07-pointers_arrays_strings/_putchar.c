#include <unistd.h>

/**
 * _putchar - This function write the character received as input
 *
 * Return: The value 1 (Success) or an other appropriate value of errno
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
