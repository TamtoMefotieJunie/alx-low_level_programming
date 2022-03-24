#include "main.h"

/**
 * reverse_array: changes all lowercase letters of a string to uppercase
 *
 * @a: pointer to integer array
 * @n: size of array
 */

void reverse_array(int *a, int n)
{
int i;
int tmp = 0;
  for(i = 0; i < n; i++)
  {
    tmp = arr[i];
    arr[i] = arr[n-1-i];
    arr[n-1-i] = tmp;
  }
}
