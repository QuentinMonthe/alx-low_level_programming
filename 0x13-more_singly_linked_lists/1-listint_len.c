#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - this function returns the number of nodes of a list
 * @h: pointer to nodes of list
 *
 * Return: Number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	unsigned int size = 0;
	const listint_t *node = h;

	while (node != NULL)
	{
		node = node->next;
		size++;
	}

	return (size);
}

