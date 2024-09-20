#include "lists.h"

/**
* free_dlistint - free a list.
* @head: first node.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *helper;

		while (head != NULL)
		{
			helper = head;
			free(helper);
			head = head->next;
		}
}
