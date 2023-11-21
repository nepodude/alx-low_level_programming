#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - appends a node at start of list.
 * @head: input list to free all of it.
 */

void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
