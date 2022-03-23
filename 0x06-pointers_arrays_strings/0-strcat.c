#include "main.h"

/**
 * *_strcat- function that concatenates two strings
 *
 * @dest: pointer to destination char
 * @src: pointer to source char
 * Return: char
 */
 
char *_strcat(char *dest, char *src)
{
  int i, j;
  i = 0;
  while (dest[i] != '\0') 
  {
    ++dest;
    ++i;
  }

  for (j = 0; src[j] != '\0'; ++j, ++i) 
  {
    *dest = *src;
    src++;
    dest++;
  }

  *dest= '\0';
  return (dest)  
}
