#include "main.h"
/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index.
 * @n: pointer to unsigned long integer
 * @index: unsigned integer
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 0;

	int i = 63, j = index;

	while (i >= 0)
	{
		mask = 1 << i;
		if (i == j)
		{
			*n = *n & (~mask);
			return (1);
		}
		i--;
	}
	return (-1);
}
