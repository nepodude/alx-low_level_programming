#include "lists.h"

/**
* add_dnodeint_end - adds a node ath the end.
* @head: pointer to node.
* @n: content of node.
* Return: a new list.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	node = *head;
	while (node->next != NULL)
		node = node->next;
	node->next = new_node;
	new_node->prev = node;

	return (new_node);
}
