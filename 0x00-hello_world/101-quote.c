/*
 * File: 101-quote.c
 * Auth: Qunetin Monthe
 */

#include <stdio.h>

/**
 * main - This program print text with not using the function printf or puts.
 * Return: Always 1 (Success).
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19"));
	return (1);
}
