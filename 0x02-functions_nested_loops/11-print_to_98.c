#include "main.h"
/**
 * print_to_98 - function that prints all natural numbers from n to 98
 * @n: number to be checked
 * Return: void
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		printf("%d", i);
		if (i < 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		else if (i == 98)
		{
			_putchar('\n');
		}
	}
}
