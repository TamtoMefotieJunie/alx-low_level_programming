#include <stdlib.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 * returns 0 if success
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n>0)
{
printf("the number: %d\n is positive", n);
}
else
{
if (n==0)
{
printf("the number: %d\n is zero", n);
}
else
{
printf("the number: %d\n is negative", n);
}
}
return (0);
}
