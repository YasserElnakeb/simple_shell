#include "shell.h"
/**
 * _path - get the path
 * @command: command to check
 * Return: the full path of the command
 *
 */
char *_path(char *command)
{
char *p, *pc, *pt, *fp;
int clen, dlen;
struct stat buffer;

p = getenv("PATH");
if (p)
{
	pc = _strdup(p);
	clen = _strlen(command);
	pt = strtok(pc, ":");
	while (pt != NULL)
	{
		dlen = _strlen(pt);
		fp = malloc(clen + dlen + 2);
		_strcpy(fp, pt);
		_strcat(fp, "/");
		_strcat(fp, command);
		_strcat(fp, "\0");

		if (stat(fp, &buffer) == 0)
		{
			free(pc);

		return (fp);
		}
		else
		{
		free(fp);
		pt = strtok(NULL, ":");
		}
	}
	free(pc);
	if (stat(command, &buffer) == 0)
		return (command);
	return (NULL);
}
	return (NULL);
}
