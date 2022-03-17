/*
 * File: 101-print_number.c
 * Auth: Brennan D Baraban
 */
#include "main.h"
/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */
void print(int n)
{
if (n < 0)
{
putchar('-');
n = -n;
}
if (n / 10 != 0)
print(n / 10);
putchar((n % 10) + '0');
}
