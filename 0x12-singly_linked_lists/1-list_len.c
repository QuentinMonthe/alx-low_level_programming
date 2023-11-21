#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - this function returns the number of nodes of a list
 * @h: pointer to nodes of list
 *
 * Return: Number of nodes.
 */
size_t list_len(const list_t *h)
{
	unsigned int i = 0;
	const list_t *node = h;

	while (node != NULL)
	{
		node = node->next;
		i++;
	}

	return (i);
}

