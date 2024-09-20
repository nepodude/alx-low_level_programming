#include "lists.h"

/**
* dlistint_len - returns the number of elements
* @h: pointer to the head.
* Return: number of elements.
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *helper;
	size_t counter = 0;

	helper = h;
	while (helper != NULL)
	{
		counter++;
		helper = helper->next;
	}
	return (counter);
}
