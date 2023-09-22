#include "holberton.h"

/**
 *_puts1 - prints a string
 *@str: is a character
 */

void _puts1(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
}

