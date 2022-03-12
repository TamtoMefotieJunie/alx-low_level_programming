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
int i;
int text[255];
for(i=65;i<91;i++)
{
text[i] = i + 32;
putchar(text[i]);
return 0;
}
