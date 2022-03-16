/*
 * File: 0-positive_or_negative.c
 * Auth: Brennan D Baraban
 */
#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * positive_or_negative - Prints a random number and states whether
 *        it is positive, negative, or zero.
 *
 * Return: Always 0.
*/
void positive_or_negative(int i);

{
srand(time(0));
i = rand() - RAND_MAX / 2;
if (i > 0)
printf("%d is positive\n", i);
else if (i < 0)
printf("%d is negative\n", i);
else
printf("%d is zero\n", i);
return (0);
}
#endif /* MAIN_H */
