#include "holberton.h"

/**
 * main - principal function
 * @abca: is an int
 * @abcb: is a char
 * @env: global variable
 * Return: 0
 */

int main(int abca, char **abcb, char **env)
{
	char *line = NULL;
	char *delim = "\t \a\n";
	char *command;
	char **tokens;
	(void)abca;

	tokens = find_path(env);

	signal(SIGINT, SIG_IGN);
	while (1)
	{
		line = read_line();
		abcb = splits(line, delim);
		command = abca_path(abcb, tokens);
		if (command == NULL)
			execute(abcb);
		free(line);
		free(abcb);
		free(command);
	}
	return (0);
}
