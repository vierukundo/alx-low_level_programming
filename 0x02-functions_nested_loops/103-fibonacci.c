#include <stdio.h>
/**
 * main - entry
 * Return: 0 (Success)
 */
int main(void)
{
	int a, b, c, sum;

	c = 0;
	a = 1;
	b = 2;
	sum = 0;
	while (c <= 4000000)
	{
		c = a + b;
		if (c % 2 == 0)
			sum = sum + c;
		a = b;
		b = c;
	}
	printf("%d\n", sum);
	return (0);
}
