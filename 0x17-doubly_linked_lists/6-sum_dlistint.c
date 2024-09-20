#include "lists.h"

/**
* sum_dlistint - returns sum of all n values of nodes.
* @head: first node.
* Return: the total of values of n.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *helper;

	helper = head;
	if (head == NULL)
	{
		return (0);
	}
	while (helper != NULL)
	{
		sum += helper->n;
		helper = helper->next;
	}
	return (sum);
}
