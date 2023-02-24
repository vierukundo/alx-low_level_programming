#include "main.h"
/**
 * main - entry point
 * program that finds and prints the largest
 * prime factor of the number 612852475143
 * Return: 0
 */
int main(void)
{
	long int count, num, product;

	num = 612852475143;
	product = 1;
	for (count = 2; num > 1; count++)
	{
		while (num % count == 0)
		{
			num = num / count;
			product = product * count;
			if (product == 612852475143)
			{
				printf("%ld", count);
			}
		}
	}
	printf("\n");
	return (0);
}
