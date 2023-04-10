#include "main.h"
/**
 * main - main
 * @argc: argument count
 * @argv: array of strings or pointers
 * Return: 0
 */
int main(int argc, char **argv)
{
	int fd, r;
	char *Buffer;

	if (argc != 2)
		return (-1);
	fd = open(argv[1], O_RDONLY);
	if (fd)
	{
		Buffer = malloc(1024);
		r = read(fd, Buffer, 1024);
		if (r != -1)
			write(1, Buffer, 1);
	}
	free(Buffer);
	close(fd);
	return (0);
}
