#include "holberton.h"

/**
 * _path - function that finds the path
 * @env: global variable environment
 * Return: path in toke
 */

char **_path(char **env)
{
	char *_path, **toke, *delim;

	delim = ":";
	_path = _getenv(env, "PATH");
	toke = splits(_path, delim);
	return (toke);
}
