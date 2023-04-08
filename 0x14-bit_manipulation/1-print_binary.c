#include "main.h"
/**
 * print_binary - convert to binary form
 * @n: number to convert
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int num;

	int i = 31, index = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (i >= 0)
	{
		num = n >> i;
		if (num & 1)
		{
			_putchar(49);
			index++;
		}
		else if (index)
		{
			_putchar('0');
		}
		i--;
	}
}
