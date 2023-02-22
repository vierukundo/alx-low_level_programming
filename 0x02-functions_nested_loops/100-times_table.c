#include "main.h"
/**
 * print_times_table - function that prints the n times table, starting with 0
 * @n: number to be checked
 * Return: 0 (Success)
 */
void print_times_table(int n)
{
	int a, b, c;

	for (a = 0; a <= n; a++)
	{
		if (n < 0 || n > 15)
			break;
		for (b = 0; b <= n; b++)
		{
			c = a * b;
			if (c <= 9 && n >= 0)
			{
				if (c == 0 && b <= n)
				{
					_putchar(c + '0');
					if (a == 0 && b < n)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
					}
				}
				else if (b <= n && c != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(c + '0');
				}
			}
			else if ((c > 9 && c < 100) && n <= 15)
			{
				if (b <= n)
				{
					_putchar(',');
					_putchar(' ');
				}
				_putchar(c / 10 +'0');
				_putchar(c % 10 + '0');
			}
			else if (c >= 100 && b <= n)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(c / 100 + '0');
				_putchar((c / 10) % 10 + '0');
				_putchar(c % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
