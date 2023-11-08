#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - this funtion print the name
 * @name: string to print
 * @f: function to print
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
