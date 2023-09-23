#ifndef SHELL_H
#define SHELL_H


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#define BUF_SIZE 1024

extern char **environ;
int hsh(void);
char **pars(char *s, int r);
char *_path(char *command);
int count_tok(char *s, int r);
int _strncmp(char *s1, char *s2, size_t n);
char *_strdup(char *s);
char *_strcpy(char *d, char *s);
int _strlen(char *s);
char *_strcat(char *d, char *s);
int _putchar(char c);
void _puts(char *str);
void exe(char **args);
char  *_getenv(char *name);

#endif
