#include "main.h"
/**
 * reverse_array - reverses an array of length n
 * @a: an array of integers input
 * @n: length of an array
 */
void reverse_array(int *a, int n)
{
for (int i = 0; i < n; ++)
{
int j = a[i];
a[i] = a[n - 1 - i];
a[n - 1 - i] = j;
}
}
