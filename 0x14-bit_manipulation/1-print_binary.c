#include "main.h"
/**
 * print_binary - convert to binary form
 * @n: number to convert
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int i = 2147483648;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (i > 0)
	{
		if (n & i)
		{
			while (i > 0)
			{
				if (n & i)
					_putchar(49);
				else
					_putchar('0');
				i >>= 1;
			}
		}
		i >>= 1;
	}
}
