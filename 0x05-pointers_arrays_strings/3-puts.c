/*
 * File: 3-puts.c
 * Auth: Brennan D Baraban
 */
#include <stdio.h>
#include "main.h"

/**
 * _puts - Prints a string to stdout.
 * @str: The string to be printed.
 */
void _puts(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
_putchar(*str[i]);
}
_putchar('\n');
}
