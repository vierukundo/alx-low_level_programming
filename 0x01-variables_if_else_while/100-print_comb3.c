#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: display combination of two  digits and ,
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	int c;

	for (i = 0; i < 9; i++)
	{
		for (c = i + 1; c <= 9; c++)
		{
			putchar(i + '0');
			putchar(c + '0');
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
