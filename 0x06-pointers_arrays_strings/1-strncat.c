#include "main.h"

/**
 * _strncat- concatenates string with specific memry size
 * @dest: pointer on type char
 * @src: pointer on type char
 * @n: integer for byte size
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	unsigned int i = 0;
	int j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}
	while (*(src + j) != '\0')
	{
		if (j < n)
		{
			*(dest + i) = *(src + j);
			i++;
		}
		j++;
	}
	return (dest);
}
