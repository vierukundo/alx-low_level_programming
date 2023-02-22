#include "main.h"
/**
 * findSum - prints the sum of all the
 * multiples of 3 or 5 below 1024
 * @a: multiple one
 * @n: limit
 * @b: multiple two
 * Return: sum
 */
int findSum(int n, int a, int b)
{
	int sum = 0;

	int i;

	for (i = 0; i < n; i++)
	{
		if (i % a == 0 || i % b == 0)
		{
			sum += i;
		}
	}
	return (sum);
}
