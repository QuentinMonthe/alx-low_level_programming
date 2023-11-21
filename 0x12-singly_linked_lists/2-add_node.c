#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - this function adds a new nodes of a list
 * @head: pointeri to head of list
 * @str: string of new node
 *
 * Return: Address of the new nodes.
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int i = 0, size = 0;
	list_t *node;
	char *s = NULL;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	if (str != NULL)
	{
		while (str[size] != '\0')
			size++;

		s = malloc(sizeof(char) * (size + 1));
		if (s == NULL)
		{
			free(node);
			return (NULL);
		}

		while (str[i] != '\0')
		{
			*(s + i) = str[i];
			i++;
		}

		*(s + i) = '\0';
	}

	node->str = s;
	node->len = size;
	node->next = *head;

	*head = node;

	return (node);
}
