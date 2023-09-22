#include "shell.h"
/**
 * _strdup - duplicates a string
 * @s: the string
 *
 * Return: pointer to string
 */
char *_strdup(char *s)
{
	int len = 0;
	char *ret;

	if (!s)
		return (NULL);
	while (*s++)
		len++;
	ret = malloc(sizeof(char) * (len + 1));
	if (!ret)
		return (NULL);
	for (len++; len--;)
		ret[len] = *--s;
	return (ret);
}
