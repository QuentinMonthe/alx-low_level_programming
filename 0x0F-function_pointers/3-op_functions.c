#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - this funtion calculate the sum
 * @a: first value
 * @b: second value
 *
 * Return: result of operation.
 */
int op_add(int a, int b)
{
	int result = a + b;

	return (result);
}

/**
 * op_sub - this funtion calculate the difference
 * @a: first value
 * @b: second value
 *
 * Return: result of operation.
 */
int op_sub(int a, int b)
{
	int result = a - b;

	return (result);
}

/**
 * op_mul - this funtion calculate product
 * @a: first value
 * @b: second value
 *
 * Return: result of operation.
 */
int op_mul(int a, int b)
{
	int result = a * b;

	return (result);
}

/**
 * op_div - this funtion calculate division
 * @a: first value
 * @b: second value
 *
 * Return: result of operation.
 */
int op_div(int a, int b)
{
	int result = a / b;

	return (result);
}

/**
 * op_mod - this funtion calculate remainder division
 * @a: first value
 * @b: second value
 *
 * Return: result of operation.
 */
int op_mod(int a, int b)
{
	int result = a % b;

	return (result);
}
