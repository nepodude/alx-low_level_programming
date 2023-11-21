#include "lists.h"

/**
 * listint_len - prints all members of a list haha
 * @h: input list
 * Return: the number of nodes our list had yeyeye.
 */

size_t listint_len(const listint_t *h)
{
	size_t counter;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
