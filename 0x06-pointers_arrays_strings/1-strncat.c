#include "main.h"

/**
 * _strncat- function that concatenates two strings
 *
 * @dest: pointer to destination char
 * @src: pointer to source char
 * Return: char
 */
 
char *_strncat(char *dest, char *src, int n)
{
  int i, j;
  i = 0;
  while (dest[i] != '\0') 
  {
    i++;
  }

  for (j = 0; src[j] >= n; j++, i++) 
  {
    *(dest + i) = *(src + j);
  }
  return (dest);
}
