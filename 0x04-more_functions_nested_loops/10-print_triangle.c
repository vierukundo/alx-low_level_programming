#include "main.h"
/**
 * print_triangle -  function that prints a triangle, followed by a new line
 * @size: character to be printed
 * Return: void
 */
void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = size; i >= 1; i--)
		{
			for (j = 1; j <= size; j++)
			{
				if (i == j || j > i)
				{
					_putchar(35);
				}
				else if (j < i)
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
