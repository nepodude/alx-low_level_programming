#include "lists.h"

/**
* print_dlistint - prints all nodes.
* @h: head pointer of the list.
* Return: The number of nodes there is.
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *my_list;
	int n_nodes = 0;

	if (h == NULL)
		return (0);
	while (my_list != NULL)
	{
		printf("%d\n", my_list->n);
		n_nodes++;
		my_list = my_list->next;
	}

	return (n_nodes);
}
