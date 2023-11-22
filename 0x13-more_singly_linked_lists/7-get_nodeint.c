#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index  - delete the hell out of it hahahaht.
 * @head: input list to play with.
 * @index: a place to return the goddamn index. haha.
 * Return: returns the node at index indicated.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;
	unsigned int zero = 0;

	while (head != NULL)
		counter++;

	if (index < zero || index >= counter)
		return (NULL);
	while (index >= zero)
	{
		head = head->next;
		index--;
	}
	return (head);
}
