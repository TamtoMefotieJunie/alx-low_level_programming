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
while (*(str + i) != '\0')
{
_putchar(*(str + i));
i++;
}
_putchar('\n');
}
