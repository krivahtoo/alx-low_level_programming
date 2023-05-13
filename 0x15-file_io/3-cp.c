#include "main.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * bail - exit with message and code
 *
 * @code: exit code
 * @msg: message to print
 * @arg: argument to format to msg
 */
void bail(int code, const char *msg, char *arg)
{
	dprintf(STDERR_FILENO, "%s%s\n", msg, arg);
	exit(code);
}

/**
 * main - copies the content of a file to another file.
 *
 * @argc: argument count
 * @argv: arguments array
 *
 * Return: 0, >0 on failure
 */
int main(int argc, char *argv[])
{
	char *file_from;
	char *file_to;
	char buf[1024];
	int fd_in, fd_out, i = 0, count;

	if (argc != 3)
		bail(97, "Usage: cp file_from file_to", "");
	file_from = argv[1];
	file_to = argv[2];
	fd_in = open(file_from, O_RDONLY);
	if (fd_in < 0)
		bail(98, "Error: Can't read from file ", file_from);
	fd_out = open(
		file_to,
		O_WRONLY | O_CREAT | O_TRUNC,
		S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH
	);
	if (fd_out < 0)
		bail(99, "Error: Can't write to ", file_to);
	do {
		i = read(fd_in, buf, 1024);
		if (i < 0)
			bail(98, "Error: Can't read from file ", file_from);

		count = write(fd_out, buf, i);
		if (count < 0)
			bail(99, "Error: Can't write to ", file_to);
	} while (i >= 1024);
	i = close(fd_in);
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_in);
		exit(100);
	}
	close(fd_out);

	return (0);
}
