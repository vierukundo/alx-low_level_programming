#include "main.h"
/**
 * jack_bauer - function that prints every minute of the day of Jack Bauer
 * Return: 0 (Success)
 */
void jack_bauer(void)
{
	int h, s;

	for (h = 0; h <= 23; h++)
	{
		for (s = 0; s <= 59; s++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((s / 10) + '0');
			_putchar((s % 10) + '0');
			_putchar('\n');
		}
	}
}
