#include "holberton.h"

/**
 *_strcat - concatenate 2 strings
 *@de: is a character
 *@sr: is a character
 *Return: dest concatenated strind
 */

char *_strcat(char *de, char *sr)
{
	int a, b;

	for (a = 0; de[a] != '\0'; a++)
	{ }

	for (b = 0; sr[b] != '\0'; b++, a++)
		de[a] = sr[b];

	de[a] = '\0';
	return (de);
}

/**
 * args_path - concatenates the arguments
 * @pars: is a char
 * @news: is a char
 * Return: total or null
 */

char *args_path(char **pars, char **news)
{
	char *total, **cat;
	int a, b, c;
	struct stat status;

	for (a = 0; new[a]; a++)
	{
		total = malloc(60);
		_strcat(total, news[a]);
		_strcat(total, "/");
		_strcat(total, pars[0]);

		if (stat(total, &status) == 0)
		{
			for (c = 0; pars[c] != '\0'; c++)
				;
			cat = malloc(sizeof(char *) * (c + 1));
			cat[c] = NULL;
			cat[0] = _strdup(total);

			for (b = 1; pars[b]; b++)
				cat[b] = _strdup(pars[b]);
			execute(cat);
			return (total);
		}
		free(total);
	}
	return (NULL);
}
