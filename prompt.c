#include "holberton.h"

/**
 * read_line - reads the command line
 * Return: line
 */

char *read_line(void)
{
	char *line = NULL;
	size_t size = 0;
	int set = 0;

	if (getline(&line, &size, stdin) == -1)
	{
		free(line);
		exit(-1);
	}
	set = strlen(line);
	line[set - 1] = '\0';

	return (line);
}
