#include "main.h"
#include <stdlib.h>
/**
* array_range - creates an array in increaseing order
* @min: smallest integer
* @max: lagrest integer
*
* Return: pointer to the starting thing
*/
int *array_range(int min, int max)
{
int *tester;
if (min > max)
return (NULL);
tester = malloc(sizeof(int) * (max - min + 1));
if (tester == NULL)
return (NULL);
else
for (int i = 0; i <= max - min; i++)
tester[i] = i + min;
return (tester);
}
