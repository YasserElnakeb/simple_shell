#include "holberton.h"

/**
 * execute - execute the commands
 * @pars: is a char array of pointers
 * Return: Always 0.
 */

int execute(char **pars)
{
	pid_t pid;
	int stat;

	pid = fork();
	if (pid == 0)
	{
	if (execve(pars[0], pars, NULL) == -1)
	{
	perror(pars[0]);
	exit(1);
	}
	}
	else if (pid > 0)
	{
	wait(&stat);
	}
	else
	perror("Error:");
	return (0);
}
