#ifndef SH_H
#define SH_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <limits.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>

extern char **environ;

/*custom functions*/
char *full_command(char *filename);
void interactive_mode(void);
void custom_perror(char *program_name, int line, char *prefix, char *command);
void custom_perror_exit(char *program_name, int line, char *prefix,
		char *command);
int exec_command(char *args[], char *envp[], char *argv[], int lineIndex);


/*string functions*/
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
int _strcmp(char *s1, char *s2);
int _strlen(char *s);
char *_strdup(char *str);
int _isalpha(int c);
int _isalpha_string(char *arg);
int _atoi(char *s);

/*print functions*/
void _puts(int std, char *str);
int _putchar(int std, char c);

void print_number(int std, int n);

/*free functions*/
void free_grid(char **grid, int size);


#endif
