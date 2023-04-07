#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: file name
 * @text_content: content to append to file
 * Return: 1 success. -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd = 0, written_bytes = 0, len = 0;

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1 || filename == NULL)
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
