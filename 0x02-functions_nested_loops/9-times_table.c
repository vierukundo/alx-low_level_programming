#include "main.h"
/**
 * times_table - function that prints the 9 times table, starting with 0
 * Return: 0 (Success)
 */
void times_table(void)
{
	int i, n, t;

	for (i = 0; i <= 9; i++)
	{
		for (n = 0; n <= 9; n++)
		{
			t = n * i;
			if (t <= 9)
			{
				_putchar(t + '0');
				if (n < 9 && t < 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				else if (n < 9 && t >= 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else if (t >= 10)
			{
				_putchar((t / 10) + '0');
				_putchar((t % 10) + '0');
				if (n < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
