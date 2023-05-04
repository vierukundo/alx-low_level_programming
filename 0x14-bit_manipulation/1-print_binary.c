#include "main.h"
/**
 * print_binary - a function that prints the
 * binary representation of a number.
 * @n: unsigned long integer
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int tmp = 0;

	int i = 63, offset = 0;

	while (i >= 0)
	{
		tmp = n >> i;
		if (tmp & 1)
		{
			_putchar(49);
			offset++;
		}
		else if (offset)
			_putchar(48);
		i--;
	}
	if (!offset)
		_putchar(48);
}
