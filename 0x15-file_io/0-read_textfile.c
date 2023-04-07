#include "main.h"
/**
 * read_textfile - a function that reads a text file
 * and prints it to the POSIX standard output
 * @filename: file name
 * @letters: letters to be printed
 * Return: number of letters printed. 0 otherwise
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = 0, actual_letters = 0, bytes = 0;

	char *Buffer;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	Buffer = malloc(letters);
	if (fd != -1)
	{
		actual_letters = read(fd, Buffer, letters);
		if (actual_letters == -1)
			return (0);
		bytes = write(STDOUT_FILENO, Buffer, actual_letters);
	}
	close(fd);
	free(Buffer);
	return (bytes);
}
