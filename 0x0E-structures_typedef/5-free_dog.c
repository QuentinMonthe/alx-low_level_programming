#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - this function free a variable dog
 * @d: dog to print
 *
 * Return: Nothing.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
