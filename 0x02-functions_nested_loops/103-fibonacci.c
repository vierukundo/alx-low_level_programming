#include <stdio.h>
/**
 * main - entry
 * Return: 0 (Success)
 */
int main(void)
{
	long int i, n, m, next, sum;

	i = 1;
	n = 2;
	sum = 0;
	for (m = 1; m <= 4000000; m++)
	{
		if(i % 2 == 0)
		{
			sum += 1;
		}
		next = i + n;
		i = n;
		n = next;
	}
	printf("%lu\n", sum);
	return (0);
}
