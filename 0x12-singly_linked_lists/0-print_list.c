#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - this function prints all element of a list_t
 * @h: pointer to nodes of list
 *
 * Return: Number of nodes (Success) or NULL if not.
 */
size_t print_list(const list_t *h)
{
	unsigned int i = 0;
	const list_t *node = h;

	while (node != NULL)
	{
		if (node->str == NULL)
		{
			printf("[0] (nil)\n");
		} else
			printf("[%u] %s\n", node->len, node->str);

		node = node->next;
		i++;
	}

	return (i);
}

