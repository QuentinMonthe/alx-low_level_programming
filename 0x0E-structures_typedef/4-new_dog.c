#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _str_cpy - this function copy the string
 * @str1: string location copy
 * @str2: string to copy
 *
 * Return: string (Success), NULL if not.
 */
char *_str_cpy(char *str1, char *str2)
{
	int i = 0;

	if (str2 == NULL)
	{
		str1 = NULL;
		return (str1);
	}

	str1 = malloc(sizeof(str2));

	if (str1 == NULL)
		return (NULL);

	while (*(str2 + i) != '\0')
	{
		*(str1 + i) = *(str2 + i);
			i++;
	}
	*(str1 + i) = '\0';

	return (str1);
}


/**
 * new_dog - this function create a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: Nothing.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
		
	d = (dog_t *) malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);
	
	d->name = _str_cpy(d->name, name);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->owner = _str_cpy(d->owner, owner);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	d->age = age;

	return (d);
}
