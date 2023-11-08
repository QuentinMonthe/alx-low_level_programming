#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _str_dup - this function copy the string
 * @s: string to copy
 *
 * Return: string (Success), NULL if not.
 */
char *_str_dup(char *s)
{
	int i = 0, len = 0;
	char *str;

	if (s == NULL)
		return (NULL);

	while (s[len] != '\0')
	{
		len++;
	}
	len++;

	str = malloc(sizeof(char) * len);
	if (str == NULL)
		return (NULL);

	while (i < len)
	{
		*(str + i) = *(s + i);
		i++;
	}

	return (str);
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
	struct dog *ddog;

	ddog = malloc(sizeof(struct dog));
	if (ddog == NULL)
		return (NULL);

	if (name != NULL)
	{
		ddog->name = _str_dup(name);
		if (ddog->name == NULL)
		{
			free(ddog);
			return (NULL);
		}
	}

	ddog->age = age;

	if (owner != NULL)
	{
		ddog->owner = _str_dup(owner);
		if (ddog->owner == NULL)
		{
			free(ddog->name);
			free(ddog);
			return (NULL);
		}
	}

	return (ddog);
}
