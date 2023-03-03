#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints buffer
 * @b: buffer
 * @size: size
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int i, j, s, l, n;

	s = 0;
	if (size % 10 != 0)
		l = size / 10;
	else
		l = (size / 10) - 1;
	if (size <= 0)
	{
		printf("\n");
		return;
	}
	for (i = 0; i <= l; i++)
	{
		n = 1;
		printf("%08x: ", i * 10);
		for (j = 0; j < 10; j++)
		{
			if (size >= 10)
			{
				printf("%02x", b[(i * 10) + j++]);
				printf("%02x ", b[(i * 10) + n]);
				n += 2;
			}
			else
			{
				if (s < size)
				{
					printf("%02x", b[(i * 10) + s]);
					printf("%02x ", b[(i * 10) + n]);
					n += 2;
					s += 2;
				}
				else
				{
					printf("%s ", " ");
				}
			}
			if (j < 9)
			{
				if (b[j] >= 32 && b[j] < 127)
					printf("%c ", b[j]);
				else
					printf("%s", ".");
			}
			else
			{
				if (b[j] >= 32 && b[j] < 127)
					printf("%c", b[j]);
				else
					printf("%s", ".");
			}
		}
		size -= 10;
		printf("\n");
	}
}
