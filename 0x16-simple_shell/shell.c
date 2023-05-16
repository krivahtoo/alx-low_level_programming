#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <unistd.h>

int main(void)
{
	char *input = NULL;
	size_t len = 0;
	pid_t child_pid;
	int i, status;

	printf("#cisfun$ ");
	fflush(stdout);
	do {
		child_pid = fork();
		if (child_pid == 0)
		{
			i = getline(&input, &len, stdin);
			if (i == -1)
			{
				exit(EXIT_FAILURE);
			}
			if (input != NULL)
			{
				char *args[] = { NULL, NULL };

				args[0] = strtok(input, "\n");
				i = execve(args[0], args, NULL);
				if (i == -1)
				{
					exit(EXIT_FAILURE);
				}
			}
		}
		else
		{
			if (wait(&status) == -1)
				break;
			printf("#cisfun$ ");
			fflush(stdout);
		}
	} while (1);
	return (0);
}
