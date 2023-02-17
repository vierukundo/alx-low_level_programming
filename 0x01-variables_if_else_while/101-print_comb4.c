#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: display combination of three  digits and ,
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	int c;

	int d;

	for (i = 0; i < 8; i++)
	{
		for (d = i + 1; d <= 8; d++)
		{
			for (c = d + 1; c <= 9; c++)
			{
				putchar(i + '0');
				putchar(d + '0');
				putchar(c + '0');
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
