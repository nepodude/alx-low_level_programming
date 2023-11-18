#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees the whole list.
 * @head: the desperate head to free hahaha.
 *
 * Return: nothing hahaha.
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
