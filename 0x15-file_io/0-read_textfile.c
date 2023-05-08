#include "main.h"
/**
 * read_textfile - a function that reads a text file
 * and prints it to the POSIX standard output.
 * @filename: file path
 * @letters: number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, letters_read = 0, written_letters = 0;

	char *buffer[1024];

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	letters_read = read(fd, buffer, letters);
	written_letters = write(1, buffer, letters_read);
	if (written_letters != letters_read)
		return (0);
	close(fd);
	return (written_letters);
}
