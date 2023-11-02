#include "main.h"
#include <stlib.h>
/**
 * malloc_checked - allocates memory
 * @b: input amount of bytes
 *
 * Return: 98 on failure and void on success
 */
void *malloc_checked(unsigned int b)
{
unsigned int *test;
test = malloc_checked(sizeof(unsigned int) * b)
if (test == NULL)
return (98);
else
return (test);
}
