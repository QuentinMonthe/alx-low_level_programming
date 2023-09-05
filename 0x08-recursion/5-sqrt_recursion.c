#include <stdio.h>
#include "main.h"

/**
 * calculate_sqrt - the function check the square root value
 * @n: number value to check
 * @sqrt: potential square root of the number
 *
 * Return: square root number or -1
 */

int calculate_sqrt(int n, int sqrt)
{
	if (sqrt * sqrt == n)
	{
		return (sqrt);
	}

	if (sqrt * sqrt > n)
	{
		return (-1);
	}

	return (calculate_sqrt(n, sqrt + 1));
}

/**
 * _sqrt_recursion - the function return the natural square root of a number.
 * @n: value
 *
 * Return: value of square root.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0 || n == 1)
	{
		return (n);
	}

	return (calculate_sqrt(n, 2));
}

