#include <stdio.h>
/**
 * main - Entry point
 * program that prints all possible combinations of two two-digit numbers
 * Return: Always 0 (Success)
*/
int main(void)
{
	int a;

	int b;

	int c;

	int d;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			for (c = b + 1; c < 10; c++)
			{
				for (d = 0; d < 10; d++)
				{
					putchar(a + '0');
					putchar(b + '0');
					putchar(' ');
					putchar(d + '0');
					putchar(c + '0');
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
