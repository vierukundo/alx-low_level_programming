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
	int fd = 0, actual_letters = 0;

	char Buffer[1024];

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDWR);
	if (fd != -1)
	{
		actual_letters = read(fd, Buffer, letters);
		if (actual_letters == -1)
			return (0);
		write(STDOUT_FILENO, Buffer, actual_letters);
	}
	else
	{
		return (0);
	}
	close(fd);
	return (actual_letters);
}
