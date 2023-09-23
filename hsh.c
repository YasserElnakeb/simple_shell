#include "shell.h"
/**
 * hsh - main loop
 * Return: int
 */
int hsh(void)
{
char *lptr;
char **args;
size_t n = 0;
int r = 0;

while (1)
{
	if (isatty(STDIN_FILENO))
		_puts("$ ");
	r = getline(&lptr, &n, stdin);
	if (r == -1)
	{
		break;
	}
	args = pars(lptr, r);
	exe(args);
}
free(lptr);
free(args);
return (0);
}
/**
 * pars - the parser.
 * @s: the command
 * @r: length
 * Return: tokens
 */
char **pars(char *s, int r)
{
int nt = 0;
char **args;
char *token;
char *sc;
const char *delim = " \n";
int i;

sc = malloc(sizeof(char) * r);

if (!sc)
	perror("tsh: memory allocation error");
_strcpy(sc, s);
token = strtok(s, delim);
while (token != NULL)
{
	nt++;
	token = strtok(NULL, delim);
}
nt++;
args = malloc(sizeof(char *) * nt);
token = strtok(sc, delim);
for (i = 0; token != NULL; i++)
{
	args[i] = malloc(sizeof(char) * _strlen(token));
	_strcpy(args[i], token);
	token = strtok(NULL, delim);
}
	args[i] = NULL;
	free(sc);
	return (args);
}
/**
 * exe - execute
 * @args: tokens
 */
void exe(char **args)
{
pid_t pid, wpid;
int status;
char *c1, *c2;

pid = fork();
if (pid == 0)
{
	if (args)
	{
		c1 = args[0];
		c2 = _path(c1);

		if (execve(c2, args, NULL) == -1)
			perror("Error:");
	}
} else if (pid < 0)
{
	perror("Error:");
}
else
{
	do {
		wpid = waitpid(pid, &status, WUNTRACED);
	} while (!WIFEXITED(status) && !WIFSIGNALED(status));
}
wpid = wpid + (1 - 1);
}
