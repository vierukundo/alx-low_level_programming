#include "main.h"
/**
 * print_to_98 - function that prints all natural numbers from n to 98
 * @n: number to be checked
 * Return: void
 */
void print_to_98(int n)
{
	int i, a;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i == 98)
				printf("%d\n", i);
			else
				printf("%d, ", i);
		}
	}
	else if (n >= 98)
	{
		for (a = n; a >= 98; a--)
		{
			if (a == 98)
				printf("%d\n", a);
			else
				printf("%d, ", a);
		}
	}
}
