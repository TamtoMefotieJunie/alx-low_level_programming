#include "main.h"

/**
 * *string_toupper: changes all lowercase letters of a string to uppercase
 *
 * @s: pointer to character
 * Return: char 
 */

char *string_toupper(char *s)
{
int i;

	for (i = 0; s[i] != '\0'; i++)
    s[i] -= 32;
    return (s);
}
