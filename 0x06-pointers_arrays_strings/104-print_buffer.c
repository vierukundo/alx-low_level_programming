#include "main.h"
#include <stdio.h>
/**
 * print_character - print real characters. if not,
 * print a period.
 * @size: size updated
 * @i: i imported from buffer function
 * @b: buffer
 * Return: void
 */
void print_character(int size, int i, char *b)
{
	int c, m = 0;

	for (c = 0; c < 10; c++)
	{
		if (size >= 10)
		{
			if (b[(i * 10) + c] >= 32 && b[(i * 10) + c] < 127)
				printf("%c", b[(i * 10) + c]);
			else
				printf("%s", ".");
		}
		if (size < 10 && m < size)
		{
			if (b[(i * 10) + m] >= 32 && b[(i * 10) + m] < 127)
			{
				printf("%c", b[(i * 10) + m]);
				m++;
			}
			else
			{
				printf("%s", ".");
			}
		}
		if (m >= size)
		{
			break;
		}
	}
}
/*&
 * print_bytes - print bytes in hex form
 * start with number of line in 8 hex characters
 * @size: size
 * @i: i from print_buffer function
 * @n: n imported from buffer function
 * @b: buffer
 * Return: void
 */
void print_bytes(int size, int i, char *b, int n)
{
	int j, s = 0;

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
				printf(" ");
			}
		}
	}
}
/**
 * print_buffer - prints buffer
 * @b: buffer
 * @size: size
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int i, l, n;

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
		print_bytes(size, i, b, n);
		print_character(size, i, b);
		size -= 10;
		printf("\n");
	}
}
