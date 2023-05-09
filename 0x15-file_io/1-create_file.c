#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - creates a file.
 *
 * @filename: file to create
 * @text_content: text to write to file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, S_IRUSR | S_IWUSR);
	if (fd < 0)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
			i++;
		i = write(fd, text_content, i);
		if (i < 0)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);

	return (1);
}
