#include "main.h"

/**
 * _strncpy- this function copies a string
 * @dest: pointer on char
 * @src: pointer on char
 * @n: number of bytes received
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
int i = 0;

while (i < n && *(src + i) != '\0')
{
*(dest + i) = *(src + i);
i++;
}
while (i != n)
dest[i++] = '\0';
return (dest);
}
