#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * list_len - prints number of nodes
 * @h: input list
 *
 * Return: simply the number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t counter = 0

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
