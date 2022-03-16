/*
 * File: 5-sign.c
 * Auth: Brennan D Baraban
 */

#include "main.h"

/**
 * print_sign - Prints the sign of a number.
 * @n: The number of which the sign will be printed.
 *
 * Return: 1 if the number is greater than zero,
 *         0 if the number is zero,
 *         -1 if the number is less than zero.
 */
int print_sign(int n)
{
if (n > 0)
{
return (1);
printf("+");
}
else if (n == 0)
{
return (0);
printf("0");
}
else if (n < 0)
{
return (-1);
printf("-");
}
}
