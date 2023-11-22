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
	listint_t *new_node, *temp, *prev;
	unsigned int i;

	if (*head == NULL || (*head) == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	prev = NULL;
	temp = *head;
	for (i = 0; i < idx && temp != NULL; i++)
	{
		prev = temp;
		temp = temp->next;
	}
	if (i < idx)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = temp;
	prev->next = new_node;
	return (new_node);
}
