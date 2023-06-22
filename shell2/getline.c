#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define BUFFER_SIZE 8192  /*Adjust the buffer size as needed*/
/**
 * custom_getline - implementation of getline function
 * @lineptr: input buffer to store the read characters
 * @n: size of the buffer
 * @stream: file pointer. standard input in case of simple shell
 * Return: return number of characters read or -1 0n error
 */
ssize_t custom_getline(char **lineptr, size_t *n, FILE *stream)
{
	size_t new_size, buffer_used = 0, i = 0;
	ssize_t bytes_read;
	char *new_line, buffer[BUFFER_SIZE];

	if (*lineptr == NULL || *n == 0)
	{
		*lineptr = malloc(BUFFER_SIZE);
		if (*lineptr == NULL)
			return (-1);
		*n = 120;
	}
	while ((bytes_read = read(fileno(stream),
					buffer + buffer_used, BUFFER_SIZE)) > 0)
	{
		buffer_used += bytes_read;
		if (buffer_used >= (*n) - 1)
		{
			new_size = (*n) * 2;
			new_line = realloc(*lineptr, new_size);
			if (new_line == NULL)
			{
				free(*lineptr);
				return (-1);
			}
			*lineptr = new_line;
			*n = new_size;
		}
		for (; i < buffer_used; i++)
		{
			(*lineptr)[i] = buffer[i];
			if ((*lineptr)[i] == '\n')
			{
				(*lineptr)[i + 1] = '\0';
				return (i);
			}
		}
	}
	if (bytes_read == 0 && buffer_used > 0)
	{
		(*lineptr)[buffer_used] = '\0';
		return (buffer_used);
	}
	return (-1);
}
