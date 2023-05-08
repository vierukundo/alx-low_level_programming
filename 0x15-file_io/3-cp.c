#include "main.h"
/**
 * close_fd - a function that closes file descriptors.
 * @fd: The file descriptor.
 */
void close_fd(int fd)
{
	int ret;

	ret = close(fd);
	if (ret == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - program that copies the contents of a file to another file.
 * @argc: The number of arguments
 * @argv: array of pointers to the arguments.
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int fd1, fd2, read_bytes, written_bytes;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	fd1 = open(argv[1], O_RDONLY);
	read_bytes = read(fd1, buffer, 1024);
	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (fd1 == -1 || read_bytes == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		written_bytes = write(fd2, buffer, read_bytes);
		if (fd2 == -1 || written_bytes == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		read_bytes = read(fd1, buffer, 1024);
		fd2 = open(argv[2], O_WRONLY | O_APPEND);
	} while (read_bytes > 0);
	free(buffer);
	close_fd(fd1);
	close_fd(fd2);
	return (0);
}
