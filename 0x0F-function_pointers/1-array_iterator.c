#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - iterates on a function over each array parameter
 * @array: array to use
 * @size: size of an array
 * @action: pointer to function to be used
 */
void array_iterator(int *array, size_t size, void (*action)(int)
{
	int i;
	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
