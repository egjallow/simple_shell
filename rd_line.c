#include "main.h"

/**
 * rd_line - function that gets the command line
 * Return: the command line entered
 */

char *rd_line(void)
{
	char *line = NULL;
	size_t line_lenth = 0;
	ssize_t characters;

	write(STDOUT_FILENO, "$ ", 2);
	characters = getline(&line, &line_lenth, stdin);
	if (characters == -1)
		return (NULL);

	return (line);
}
