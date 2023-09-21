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
	_puts("$ ");
	r = getline(&lptr, &n, stdin);
	if (r == -1)
	{
		_putchar('\n');
		return (-1);
	}
	args = pars(lptr, r);
	exe(args);
	free(lptr);
	free(args);
}
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
char *c1;

if (args)
{
	c1 = args[0];

if (execve(c1, args, NULL) == -1)
	perror("Error:");
}
}
