#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - appends a node at start of list.
 * @head: input list to free all of it.
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
