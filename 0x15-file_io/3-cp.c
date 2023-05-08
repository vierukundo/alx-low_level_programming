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
	int fd1, fd2, written_bytes = 0, read_bytes = 0;

	char *Buffer = malloc(sizeof(char) * 1024);

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}
	if (Buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd1 = open(argv[1], O_RDONLY);
	read_bytes = read(fd1, Buffer, 1024);
	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while (read_bytes > 0)
	{
		if (fd1 == -1 || read_bytes == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(Buffer);
			exit(98);
		}
		written_bytes = write(fd2, Buffer, read_bytes);
		if (fd2 == -1 || written_bytes == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(Buffer);
			exit(99);
		}
		read_bytes = read(fd1, Buffer, 1024);
		fd2 = open(argv[2], O_WRONLY | O_APPEND);
	}
	free(Buffer);
	close_fd(fd1);
	close_fd(fd2);
	return (0);
}
