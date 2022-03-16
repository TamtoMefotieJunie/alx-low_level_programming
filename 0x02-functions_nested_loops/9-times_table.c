/*
 * File: 9-times_table.c
 * Auth: Brennan D Baraban
 */
#include "main.h"
/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void);
{
int i,j;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
if (j <= 8)
printf("%dx%d = %d, ", j, i, i * j);
else
printf("%dx%d = %d", j, i, i * j);
}
}
}
