#include "lists.h"

/**
* delete_dnodeint_at_index - inserts a node somewhere.
* @head: first node.
* @index: an index where to delete node.
* Return: -1 on failure and 1 otherwise.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *helper, *nodehelper;

	if (head == NULL)
		return (-1);

	helper = *head;
	while (i < index - 1 && helper != NULL)
	{
		i++;
		helper = helper->next;
	}
	if (helper == NULL && i < index -1)
		return (-1);
	nodehelper = helper->next;
	helper->next->next->prev = helper;
	helper = helper->next->next;
	free(nodehelper);
	return (1);
}
