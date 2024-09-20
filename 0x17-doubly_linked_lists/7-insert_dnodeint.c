#include "lists.h"

/**
* insert_dnodeint_at_index - inserts a node somewhere.
* @h: first node.
* @idx: an index where to insert.
* @n: an integer to insert;
* Return: the new node inserted.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *helper, *new_node;
	int i = 0;

	helper = *h;
	while (helper != NULL)
	{
		helper = helper->next;
		i++;
	}
	if (idx == 0)
		add_dnodeint(h, n);
	else if (idx == i)
		add_dnodeint_end(h, n);
	else if (idx > i)
		return (NULL);
	helper = *h;
	i = 0;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	while (i < idx - 1)
	{
		helper = helper->next;
		i++;
	}

	new_node->prev = helper;
	new_node->next = helper->next;
	helper->next = new_node;

	return (new_node);
}
