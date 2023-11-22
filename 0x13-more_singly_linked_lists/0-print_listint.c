#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - this function prints all element of a list_t
 * @h: pointer to nodes of list
 *
 * Return: Number of nodes (Success) or NULL if not.
 */
size_t print_listint(const listint_t *h)
{
	unsigned int size = 0;
	const listint_t *node = h;

	while (node != NULL)
	{
		printf("%d\n", node->n);

		node = node->next;
		size++;
	}

	return (size);
}

