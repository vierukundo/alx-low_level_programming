#include "main.h"
/**
 * create_file - function that creates a file
 * @filename: file name of file to create
 * @text_content: the content to write within the created file
 * Return: 1 if success. -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int fd = 0, len = 0, written_bytes = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (fd != -1 && text_content)
	{
		while (text_content[len])
			len++;
		written_bytes = write(fd, text_content, len);
		if (written_bytes == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
