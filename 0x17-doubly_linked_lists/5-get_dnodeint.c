#include "lists.h"

/**
* get_dnodeint_at_index - returns a node at place @index.
* @head: first node.
* @index: index of a place to replace;
* Return: the node at that place;
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *helper;

	helper = head;
	while (i < index && helper != NULL)
	{
		i++;
		helper = helper->next;
	}
	if (i < index)
		return (NULL);

	return (helper);
}
