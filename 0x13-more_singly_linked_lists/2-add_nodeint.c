#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds an integer to the beginning
 * @head: input list
 * @n: constant to be put in our node
 * Return: Address of the new element and NULL on failuree.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
