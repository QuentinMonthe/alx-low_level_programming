/*
 * File: 101-quote.c
 * Auth: Qunetin Monthe
 */

#include <stdio.h>
#include <unistd.h>

/**
 * main - This program print text with not using the function printf or puts.
 * Return: Always 1 (Success).
 */
int main(void)
{
	char text[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	char size[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	write(2, text, sizeof(size));
	return (1);
}
