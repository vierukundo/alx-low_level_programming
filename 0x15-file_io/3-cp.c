#include "main.h"
/**
 * close_fd - function that closes file descriptors
 * @fd: file descriptor
 * Return: nothing
 */
void close_fd(int fd)
{
	int fd_return_value = close(fd);

	if (fd_return_value == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close %d\n", fd);
		exit(100);
	}
}
/**
 * main - a program that copies the content of a file to another file.
 * @argc: arguments count
 * @argv: pointer to strings arguments
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	/*int fd1, fd2, written_bytes = 0, read_bytes = 0;*/

	int file_from, file_to, r, w;
	char *buffer = malloc(sizeof(char) * 1024);

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	r = read(file_from, buffer, 1024);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (file_from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		w = write(file_to, buffer, r);
		if (file_to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		r = read(file_from, buffer, 1024);
		file_to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buffer);
	close_fd(file_from);
	close_fd(file_to);
	return (0);
}
