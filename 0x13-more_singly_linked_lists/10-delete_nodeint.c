#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the hell out of it haha.
 * @head: list to work with
 * @index: a place where we will delete the node.
 * Return: 1 on success and -1 on failure.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	unsigned int counter;

	for (counter = 0; counter < index && *head != NULL; counter++)
	{
		if (*head == NULL)
			return (-1);
		(*head) = (*head)->next;
	}
	temp = *head;
	free(*head);
	*head = temp;
	*head->next = temp->next;
	return (1);
}
