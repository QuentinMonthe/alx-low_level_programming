#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - this function adds a new nodes of a list
 * @head: pointeri to head of list
 * @n: value of new node
 *
 * Return: Address of the new nodes.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = *head;

	*head = node;

	return (node);
}
