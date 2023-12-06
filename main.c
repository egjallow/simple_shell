#include "main.h"

/**
 * main - function
 * @argv: array of strings
 * @argc: num of elements
 */

int main(int argc, char **argv)
{
	char *line = NULL;
	char **cmd = NULL;
	int i = 0;
	(void)argv;

	while (1)
	{
		line = rd_line();
		if (line == NULL)
		{
			write(STDOUT_FILENO, "\n", 1);
			return (0);
		}
		/*cmd = tok_line(line);*/
		/*i = execute(cmd, argv);*/
		printf("%s", line);
	}
	return (0);
}
