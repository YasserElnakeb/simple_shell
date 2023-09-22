#include "holberton.h"

/**
 *_strlen - returns the length of a string
 *@a: is a character
 * Return: 0;
 */

unsigned int _strlen(char *a)
{
	if (*a == '\0')
		return (0);
	return ((1) + _strlen(a + 1));
}
