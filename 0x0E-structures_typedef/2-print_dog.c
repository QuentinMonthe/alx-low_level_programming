#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - this function initialize a variable dog
 * @d: dog to print
 *
 * Return: Nothing.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
		{
			printf("Name: %s\n", d->name);
		} else
			printf("Name: (nil)\n");

		printf("Age: %f\n", d->age);

		if (d->owner != 0)
		{
			printf("Owner: %s\n", d->owner);
		} else
			printf("Owner: (nil)\n");
	}
}
