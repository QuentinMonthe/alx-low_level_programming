#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - this function adds a new nodes at the end of a list
 * @head: pointeri to head of list
 * @n: value of new node
 *
 * Return: Address of the new nodes.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *tmp = *head;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head != NULL)
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = node;
	} else
		*head = node;

	return (node);
}
