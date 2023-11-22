#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - delete the hell out of it hahahaht.
 * @head: input list to play with.
 * Return: returns integer sum of all things.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	sum += head;
	return (sum);
}

