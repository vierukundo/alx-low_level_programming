#include "main.h"
/**
 * print_sign - Check if a number is greater than 0
 * @n: The number to be checked
 *
 * Return: 1 if the r is positive. -1 if the n is -ve. 0 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
