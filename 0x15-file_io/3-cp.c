#include "main.h"
/**
 * _cp - copies content of one file to another
 * @file_from: source file
 * @file_to: destination file
 * Return: 1 on success. -1 otherwise
 */
void _cp(const char *file_from, const char *file_to)
{
	int src_fd = 0, dest_fd = 0, close_id = 0, close_id2 = 0, src_read, dest_write;

	char *Buffer;

	src_fd = open(file_from, O_RDONLY);
	if (src_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	dest_fd = open(file_to, O_CREAT | O_RDWR | O_TRUNC, 0664);
	if (dest_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	Buffer = malloc(1024);
	src_read = read(src_fd, Buffer, 1024);
	dest_write = write(dest_fd, Buffer, src_read);
	if (dest_write == -1 || src_read == -1)
		exit(-1);
	close_id = close(src_fd);
	if (close_id == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src_fd);
		exit(100);
	}
	close_id2 = close(dest_fd);
	if (close_id2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest_fd);
		exit(100);
	}
	free(Buffer);
}
/**
 * main - main function
 * @argc: argument count
 * @argv: double pointer to argument strings
 * Return: 0
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp %s %s\n", argv[1], argv[2]);
		exit(97);
	}
	_cp(argv[1], argv[2]);
	return (0);
}
