#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * returns: Always 0 (success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n>0)
{
printf("the number %d is positive\n",n);
}
else
{
if (n==0)
{
printf("the number %d is zero\n",n);
}
else
{
printf("the number %d is negative\n",n);
}
}
return (0);
}
