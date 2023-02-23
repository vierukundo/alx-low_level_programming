#include "main.h"
/**
 * print_square - function that draws a straight line in the terminal
 * @n: character to be printed
 * Return: void
 */
void print_square(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
