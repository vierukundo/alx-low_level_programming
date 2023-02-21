#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number
 * @n: number to be checked
 * Return: last digit of n
 */
int print_last_digit(int n)
{
	int d = n % 10;

	if (d < 0)
	{
		d *= -1;
	}
	_putchar(d + '0');
	return (d);
}
