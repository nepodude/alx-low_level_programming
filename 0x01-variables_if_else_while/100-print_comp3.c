// Online C compiler to run C program online
#include <stdio.h>
/**
 * main - Entry point
 * This function is printing combination of integers.
 * return 0 success
*/
int main(){
int x = 0;
for (; x <= 9; x ++)
{        
for (int y = x + 1; y <= 9; y ++)
{
if (x != y)
{
putchar(x + 48);
putchar(y+ 48);
putchar(' ');
}
}
}
return 0;
}
