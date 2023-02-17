#include <stdio.h>
/**
 * main - Entry point
 * program that prints possible digits using putchar
 * Return: Always 0 (Succes)
*/
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
