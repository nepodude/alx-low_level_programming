#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all members of a list haha
 * @h: input list
 * Return: the number of nodes our list had yeyeye.
 */

size_t print_listint(const listint_t *h)
{
	size_t counter;

	while (h != NULL)
	{
		printf("%d", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}
