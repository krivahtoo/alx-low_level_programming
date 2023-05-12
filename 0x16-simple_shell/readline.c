#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

ssize_t _getline(char **str, size_t *len, FILE *stream)
{
	char ch;
	int fd = fileno(stream);
	int i;
	ssize_t count = 0;

	if (*str == NULL && *len == 0)
	{
		*str = malloc(sizeof(char) * (*len) + 1);
		if (*str == NULL)
			return (-1);
	}
	i = read(fd, &ch, sizeof(ch));
	while (ch != '\n')
	{
		if (i == -1 || ch == '\0')
			return (-1);
		count += i;
		*(*str + (*len)) = ch;
		*len += 1;
		*str = realloc(*str, (*len) + 1);
		if (*str == NULL)
			return (-1);
		i = read(fd, &ch, sizeof(ch));
	}
	return (count);
}

/**
 * main - prints "$ ", wait for the user to enter a command,
 * prints it on the next line.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *input = NULL;
	size_t len = 0;
	int i;

	printf("$ ");
	fflush(stdout);
	i = _getline(&input, &len, stdin);
	if (i == -1)
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}
	if (i > 0)
		printf("%s\n", input);

	return (0);
}
