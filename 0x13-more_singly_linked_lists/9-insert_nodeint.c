#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - delete the hell out of it hahahaht.
 * @head: input list to play with.
 * @idx: a place to put the node haha haha.
 * @n: an integer to assign.
 * Return: returns the node at index indicated.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp;
	unsigned int counter = 0;

	if ((*head) == NULL || (*head) == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	while ((*head) != NULL)
	{
		if (counter + 1 == idx)
		{
			temp = (*head);
			(*head) = new_node;
			new_node = temp->next;
			return (new_node);
		}
		(*head) = (*head)->next;
		counter++;
	}
	return (NULL);
}
