#include <stdio.h>
/**
 * main - entry
 * Return: 0 (Success)
 */
int main(void)
{
	long int i, n, m, next;

	i = 1;
	n = 2;
	next = i + n;
	printf("%lu, ", i);
	printf("%lu, ", n);
	for (m = 3; m <= 50; m++)
	{
		if (m == 50)
			printf("%lu\n", next);
		else
			printf("%lu, ", next);
		i = n;
		n = next;
		next = i + n;
	}
	return (0);
}
