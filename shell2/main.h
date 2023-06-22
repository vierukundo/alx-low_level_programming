#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <errno.h>
extern char **environ;
int _putchar(char c);
char **split_command(char *cmd);
int append_path(char **cmd);
void execute_cmd(char **cmd, char *buffer);
int check_builtin(char **cmd, char *buffer);
int exit_func(char **cmd);
size_t _strlen(const char *s);
int _strncmp(const char *s1, const char *s2, size_t n);
char *_strtok(char *str, const char *delim);
char *_strcpy(char *dest, const char *src);
char *_strcat(char *dest, const char *src);
int _strcmp(const char *s1, const char *s2);
char *_strdup(const char *str);
char *custom_strchr(const char *str, int c);
void cd_func(char *dest_Dir);
void *_realloc(void *ptr, size_t size);
ssize_t custom_getline(char **lineptr, size_t *n, FILE *stream);
char *_getenv(const char *name);
#endif
