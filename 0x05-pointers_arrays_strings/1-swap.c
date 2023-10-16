#include "main.h"
/**
 * swap_int - check the code
 * @a: input
 * @b: input
 * Return: Always 0.
*/
void swap_int(int *a, int *b)
{
int hidden;
hidden = *a;
*b = hidden;
*a = *b;
}
