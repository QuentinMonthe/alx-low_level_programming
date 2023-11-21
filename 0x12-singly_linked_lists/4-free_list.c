#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - this function frees a list
 *
 * Return: Nothing.
 */
void free_list(list_t *head)
{
	list_t *node;

	while (head != NULL)
	{
		node = head;
		head = head->next;

		free(node->str);
		free(node);
	}
}
