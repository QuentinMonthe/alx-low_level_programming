#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - this funtion find the function to execute
 * @s: character to operation
 *
 * Return: pointer to function to execute or NULL if not match.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	while (i <= 5)
	{
		if (*(ops[i].op) == *s)
			break;
		i++;
	}

	return (ops[i].f);
}
