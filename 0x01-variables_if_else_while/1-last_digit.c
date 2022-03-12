#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if ("Last digit of" n > 5)
{
printf(""Last digit of" n is greater than 5\n");
}
else
{
if ("Last digit of" n == 0)
{
printf(""Last digit of" n is 0\n");
}
else
{
printf(""Last digit of" n is less than 6 and not 0\n");
}
}
return (0);
}
