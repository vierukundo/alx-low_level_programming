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
	next = i + n;
	for (m = 3; m <= 4000000; m++)
	{
		i = n;
		n = next;
		next = i + n;
		sum += next;
	}
	printf("%lu\n", sum + 3);
	return (0);
}
