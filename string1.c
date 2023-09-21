#include "shell.h"

/**
 * _strlen - returns length of a string
 * @s: the string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int c = 0;

	if (!s)
		return (0);

	while (*s++)
		c++;
	return (c);
}

/**
 * _strcat - concatenates two strings
 * @d: the destination
 * @s: the source
 *
 * Return: pointer to destination buffer
 */
char *_strcat(char *d, char *s)
{
	char *f = d;

	while (*d)
		d++;
	while (*s)
		*d++ = *s++;
	*d = *s;
	return (f);
}

#include "shell.h"

/**
 * _strcpy - copies a string
 * @d: the destination
 * @s: the source
 *
 * Return: pointer to destination
 */
char *_strcpy(char *d, char *s)
{
	int c = 0;

	if (d == s || s == 0)
		return (d);
	while (s[c])
	{
		d[c] = s[c];
		c++;
	}
	d[c] = 0;
	return (d);
}
/**
 *_puts - prints a string
 *@s: the string
 *
 * Return: void
 */
void _puts(char *s)
{
	int i = 0;

	if (s == NULL)
		return;
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
