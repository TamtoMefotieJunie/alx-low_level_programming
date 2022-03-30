#include "main.h"

/**
 * _puts - function that prints a string
 *
 * @s: pointer to char
 * Return: nothing
 */

void _puts(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i += 1;
	}
	_putchar('\n');
}
