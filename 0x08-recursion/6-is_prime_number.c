#include <stdio.h>
#include "main.h"

/**
 * check_prime - the function check the prime number
 * @n: number value to check
 * @num: potential divider
 *
 * Return: 1 for success or 0 else.
 */

int check_prime(int n, int num)
{
	if (num <= n / 2 && n % num == 0)
	{
		return (0);
	}

	if (num > n / 2)
	{
		return (1);
	}

	return (check_prime(n, num + 1));
}

/**
 * is_prime_number - the function check the prime number.
 * @n: value
 *
 * Return: 1 for success or 0 else.
 */

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}

	return (check_prime(n, 2));
}

