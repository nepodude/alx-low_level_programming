#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - appends lest @head with a goddamn node.
 * @head: a list to play with adding the thing
 * @str: a string to use in the appending ritual
 *
 * Return: the goddamn location of appended node hahaha.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_list;
	while (*head)
	{
	head = &((*head)->next);
	}

	new_list = malloc(sizeof(list_t));
	if (!new_list)
		return (NULL);
	new_list->str = strdup(str);
	
	if (new_list->str == NULL)
	{
		free(new_list);
		return (NULL);
	}

	*head = new_list;
	new_list->next = NULL;
	new_list->len = strlen(new_list->str);
	return (new_list);
}
