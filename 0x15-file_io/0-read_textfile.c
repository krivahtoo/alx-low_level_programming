#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <unistd.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX
 * standard output.
 *
 * @filename: file to open
 * @letters: number of letters to print.
 *
 * Return: number of letters read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t count = 0;
	char *buf = NULL;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	buf = malloc(sizeof(char) *  letters);
	if (buf == NULL)
		return (0);
	count = read(fd, buf, letters);
	if (count < 0)
	{
		free(buf);
		return (0);
	}
	count = write(STDOUT_FILENO, buf, count);
	if (count < 0)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(fd);

	return (count);
}
