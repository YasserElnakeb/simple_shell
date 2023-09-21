#ifndef SHELL_H
#define SHELL_H


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#define BUF_SIZE 1024

int hsh(void);
char **pars(char *s, int r);
int count_tok(char *s, int r);
char *_strcpy(char *d, char *s);
int _strlen(char *s);
char *_strcat(char *d, char *s);
int _putchar(char c);
void _puts(char *str);
void exe(char **args);

#endif
