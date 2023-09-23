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
/**
 * _strncmp - compare strings
 * @s1: first string
 * @s2: second string
 * @n: limit
 * Return: int
 */
int _strncmp(char *s1, char *s2, size_t n)
{
size_t i;
for (i = 0; i < n; ++i)
{
	if (s1[i] != s2[i])
		return (s1[i] - s2[i]);
}
return (0);
}
