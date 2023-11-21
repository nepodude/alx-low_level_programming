#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - appends a node at start of list.
 * @head: input list to manipulate
 * @n: input integer to add.
 * Return: the address of new inserted node.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_nodem, *temp;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new_node;
	new_node->n = n;
	new_node->next = NULL;

	return (new_node);
}
