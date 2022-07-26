#ifndef SHELL
#define SHELL
/* Standard Library */
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <ctype.h>
/* Function Prototypes */
char **strbrk(char *buf, const char delim, int *wc);
void freestuff(char **split, int *wc, char *buf);
void dsh_read_line(char **buf);
void countwords(char *buf, int *wc);
void squeeze_spaces(char *str_d);
/* Globals */
#endif /* SHELL */
