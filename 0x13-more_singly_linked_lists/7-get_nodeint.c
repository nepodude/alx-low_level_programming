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

	if (head ==	 NULL)
		return (NULL);
	while (head != NULL)
	{
		if (counter == index)
			return (head);
		head = head->next;
		counter++;

	}
	return (NULL);
}
