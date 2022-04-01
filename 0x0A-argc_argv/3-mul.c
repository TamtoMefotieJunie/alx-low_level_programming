#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the multiplication of two numbers, followed by a new line.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If the program receives two arguments - 0.
 *         If the program does not receive two arguments - 1.
 */
int main(int argc, char *argv[])
{   int k, a, b;
    
    if (argc != 3)
    {
    printf("ERROR\n");
    return (1);
    }

    a = atoi(argv[1]);
	b = atoi(argv[2]);
    k = a * b;

    printf("%d\n", k);

    return (0);
}
