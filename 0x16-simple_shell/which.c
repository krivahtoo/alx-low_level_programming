#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>

extern char **environ;

/**
 * main - stat example
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	char *path = NULL;
	char *token = NULL;
	char *filepath = NULL;
	char *filename;
	char **envp = environ;
	int i = 1;
	struct stat buf;

	if (ac < 2)
	{
		printf("Usage: %s filename ..\n", av[0]);
		exit(EXIT_FAILURE);
	}

	/* Extracts the PATH variable in envp */
	while (*envp)
	{
		if (strncmp(*envp, "PATH", 4) == 0)
		{
			token = strtok(*envp, "=");
			if (token == NULL)
				break;
			path = strtok(NULL, "=");
		}
		envp++;
	}

	/* Loop through filepaths given by the user */
	while (av[i])
	{
		filename = av[i];
		while (1)
		{
			token = strtok(path, ":");
			if (token == NULL)
				break;
			filepath = malloc(strlen(token) + strlen(filename) + 2);
			filepath = strcat(filepath, token);
			filepath = strcat(filepath, "/");
			filepath = strcat(filepath, filename);
			if (stat(filepath, &buf) == 0)
			{
				printf("%s\n", filepath);
				break;
			}

			path = NULL;
		}
		i++;
	}
	free(filepath);

    return (0);
}
