#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - appends a node at start of list.
 * @head: input list to manipulate
 * @n: input integer to add.
 * Return: the address of new inserted node.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	while (*head != NULL)
	{
		*head = (*head)->next;
	}
	new_node->n = n;
	*head = new_node;
	new_node->next = NULL;

	return (new_node);
}
