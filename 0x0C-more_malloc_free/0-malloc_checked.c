#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory
 * @b: input amount of bytes
 *
 * Return: 98 on failure and void on success
 */
void *malloc_checked(unsigned int b)
{
void *test;
test = malloc(b)
if (test == NULL)
exit (98);
else
return (test);
}
