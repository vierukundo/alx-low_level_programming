#include "main.h"
/**
 * print_diagonal - function that draws a straight line in the terminal
 * @n: character to be printed
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				if (i == j)
				{
					_putchar(92);
				}
				else if (j < i)
				{
					_putchar(' ');
				}
				else
				{
					continue;
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
