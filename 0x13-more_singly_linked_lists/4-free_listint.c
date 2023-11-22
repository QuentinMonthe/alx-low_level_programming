#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - this function frees a list
 * @head: head of list
 *
 * Return: Nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head != NULL)
	{
		node = head;
		head = head->next;

		free(node);
	}
}
