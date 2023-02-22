#include <stdio.h>
/**
 * main - prints the sum of all the
 * multiples of 3 or 5 below 1024
 * @n: number
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	n = 0;
	while (n < 1024)
	{
		if ((n % 3 == 0) || (n % 10 == 0))
		{
			n += n;
		}
		n++;
	}
	printf("%d\n", n);
	return (0);
}

