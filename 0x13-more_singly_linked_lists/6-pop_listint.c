#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - delete the hell out of it hahahaht.
 * @head: input list to play with.
 * Return: returns int of formal head.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int x;

	if (head == NULL || *head == NULL)
		return (0);
	x = (*head)->n;
	*head = temp->next;
	free(temp);

	return (x);

}
