/*
 * File: 4-print_rev.c
 * Auth: Brennan D Baraban
 */

#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 */
void print_rev(char *s)
{
int len = 0,
int i = 0;
while (s[i] != '\0'])
len++;
i++;
for (i = len - 1; i >= 0; i--)
_putchar(s[i]);
_putchar('\n');
}
