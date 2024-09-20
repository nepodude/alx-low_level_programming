#include "lists.h"

/**
* delete_dnodeint_at_index - deletes a node somewhere.
* @head: first node.
* @index: an index where to delete node.
* Return: -1 on failure and 1 otherwise.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *helper, *node_to_delete;

	if (head == NULL || *head == NULL)
		return (-1);

	helper = *head;
	if (index == 0)
	{
		node_to_delete = *head;
		*head = node_to_delete->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(node_to_delete);
		return (1);
	}
	while (i < index - 1 && helper != NULL)
	{
		i++;
		helper = helper->next;
	}
	if (helper == NULL || helper->next == NULL)
		return (-1);
	node_to_delete = helper->next;
	helper->next = node_to_delete->next;
	if (node_to_delete->next != NULL)
	{
		node_to_delete->next->prev = helper;
	}
	free(node_to_delete);
	return (1);
}
