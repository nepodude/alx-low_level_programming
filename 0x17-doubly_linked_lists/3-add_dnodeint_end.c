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
   
	if (head == NULL)
	{
		new_node->next = NULl;
		new_node->n = n;
		return (new_node);
	}
	node = *head;
	while (node->next != NULL)
	{
		node ++;
		node = node->next;
	}
	new_node->n = n;
	new_node->prev = node;
	node->next = new_node
	new_node->next = NULL;

	return (*head);
}
