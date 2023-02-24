#include <stdio.h>
/**
 * main - entry
 * Return: 0 (Success)
 */
int main(void)
{
	unsigned long a, b, c, d;

	a = 1;
	b = 2;
	c = 0;
	for (d = 1; d <= 98; d++)
	{
		if (d != 98)
		{
			printf("%lu, ", a);
			c = a + b;
			a = b;
			b = c;
		}
		else
		{
			printf("%lu", a);
		}
	}
	printf("\n");
}
