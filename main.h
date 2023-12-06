#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

char *rd_line(void);
char **tok_line(char *);
int execute(char **, char **);

#endif
