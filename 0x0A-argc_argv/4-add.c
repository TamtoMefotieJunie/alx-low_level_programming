#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the addition of positive numbers,
 *        followed by a new line.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If one of the numbers contains symbols that are non-digits - 1.
 *         Otherwise - 0.
 */
int main(int argc, char *argv[])
{
   int num1, num2, sum;

   if (argc == 0)
   printf("0\n");

   num1 = atoi(argv[1]);
   num2 = atoi(argv[2]);
   sum = num1 + num2;

   printf("%d\n", sum);

   return (0);
}
