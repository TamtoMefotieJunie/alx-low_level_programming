/*
 * File: 6-abs.c
 * Auth: Brennan D Baraban
 */

#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 * @n: The integer to be computed.
 *
 * Return: The absolute value of the integer.
 */
int _abs(int i)
{
int r;
if (i < 0)
r = (-1) * i;
return (r);
else
return (i);
}
