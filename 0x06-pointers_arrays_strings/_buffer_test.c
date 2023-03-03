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
	int i, j, s, l, n, c;

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
					if (j == 6 || j == 9)
					{
						printf(" ");
						printf(" ");
					}
					else
					{
						printf(" ");
					}
				}
			}
		}
		for (c = 0; c < 10; c++)
		{
			if (c < 9)
			{
				if (b[(i * 10) + c] >= 32 && b[(i * 10) + c] < 127)
					printf("%c", b[(i * 10) + c]);
				else
					printf("%s", ".");
			}
			else
			{
				if (b[(i * 10) + c] >= 32 && b[(i * 10) + c] < 127)
					printf("%c", b[(i * 10) + c]);
				else
					printf("%s", ".");
			}
		}
		size -= 10;
		printf("\n");
	}
}
