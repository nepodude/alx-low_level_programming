#include "main.h"
/**
* _calloc - allocate memory using malloc and initialize it to zero
*@nmemb: number of elements
*@size: size of each number of an array
*
*Return: poiner to the array
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *tester;
unsigned int i;
if (nmemb == 0 || size == 0)
return (NULL);
tester = malloc(nmemb * size);
if (tester == NULL)
return (NULL);
for (i = 0; i < (nmemb * size); i++)
{
tester[i] = 0;
}
return (tester);
}
