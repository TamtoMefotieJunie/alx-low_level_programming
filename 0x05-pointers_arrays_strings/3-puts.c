/*
 * File: 3-puts.c
 * Auth: Brennan D Baraban
 */

#include "main.h"

/**
 * _puts - Prints a string to stdout.
 * @str: The string to be printed.
 */
void _puts(char *str)
{
while (*str++ != '\0')
_putchar(*str++);
_putchar('\n');
}
