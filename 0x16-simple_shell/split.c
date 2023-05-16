#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/**
char **split(char *str)
{
}
*/

/**
 * main - prints "$ ", wait for the user to enter a command,
 * prints it on the next line.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *str = strdup("/home/krivah/.bun/bin:/home/krivah/.cargo/bin:/home/krivah/.nimble/bin:/home/krivah/go/bin:/home/krivah/.local/bin:/sbin:/bin");
	char *res;

	do {
		res = strtok(str, ":");
		if (res == NULL)
			break;
		printf("%s\n", res);
		str = NULL;
	} while (1);
	free(str);

	return (0);
}

