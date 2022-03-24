#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: The array of integers to be reversed.
 * @n: The number of elements in the array.
 */

void reverse_array(int *a, int n)
{
int i;
int t = 0;
  for(i = 0; i < (n/2); i++)
  t = a[i];
  a[i] = a[n - 1 - i];
  a[n - 1 - i] = t;  
}
