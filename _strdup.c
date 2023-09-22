#include "holberton.h"

/**
 *_strdupl - duplicate a string
 *@string: is a pointer
 *Return: pointer to array
 */

char *_strdupl(char *string)
{
	char *ptr;
	int n;

	if (string == NULL)
		return (NULL);

	ptr = malloc(_strlen(string) + 1);

	if (ptr == NULL)
		return (NULL);

	n = 0;

	while (string[n] != '\0')
	{
		ptr[n] = string[n];
		n++;
	}

	ptr[n] = '\0';

	return (ptr);
}
