#include <stdio.h>

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
