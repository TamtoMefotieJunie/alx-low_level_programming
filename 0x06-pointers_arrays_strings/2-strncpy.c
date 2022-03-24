#include "main.h"

/**
 * *_strncpy- function that copies a string
 *
 * @dest: pointer to destination char
 * @src: pointer to source char
 * Return: char
 */
 
char *_strncpy(char *dest, char *src, int n)
{
   int i;

	for (i = 0; src[i] < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	*(dest + i) = '\0';
	return (dest); 
}
