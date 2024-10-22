#include "hash_tables.h"

/**
* hash_table_delete - deletes the whole table.
* @ht: is the table to be deleted.
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current_node, *temp;

	if (ht == NULL)
	{
		return;
	}
	for (i = 0; i < ht->size; i++)
	{
		current_node = ht->array[i];
		while (current_node != NULL)
		{
			temp = current_node->next;
			free(current_node->key);
			free(current_node->value);
			free(current_node);
			current_node = temp;
		}
	}
	free(ht->array);
	free(ht);
}
