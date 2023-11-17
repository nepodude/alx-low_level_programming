#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - prints all elements of list_t list
 * @h: an input list_t type struct
 *
 * Return: The number of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("%s", h->str);
		h = h->next;
		counter++;
	}
	return (counter);
}
