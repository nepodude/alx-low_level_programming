#include <stdlib.h>
#include "main.h"
/**
 * *_realloc - reallocates memory using malloc and free
 * @ptr: pointer to the memory previsouly allocated by malloc
 * @old_size: size of the allocated memory for ptr
 * @new_size: size of the new memory block
 *
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;
char *src = ptr;
char *dst;
unsigned int min_size;
if (old_size == new_size)
return (ptr);
if (ptr == NULL)
{
ptr = malloc(new_size);
return (ptr);
}
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
new_ptr = malloc(new_size);
dst = new_ptr;
if (new_ptr)
{
if (old_size < new_size)
min_size = old_size;
else
min_size = new_size;
for (unsigned int i = 0; i < min_size; i++)
dst[i] = src[i];
free(ptr);
}
return (new_ptr);
}
