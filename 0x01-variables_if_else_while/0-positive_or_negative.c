#include<stdio.h>
/**
 *main - This is going to check for positivity only
 *Let me hope I got it right?
 *Return (0) Success
*/
int main(void)
{
int n;
if (n > 0)
{
printf("%d is positive \n", n);
}
else if (n == 0)
{
printf("%d is zero \n", n);
}
else
{
printf("%d is negative \n", n);
}
return (0);
}
