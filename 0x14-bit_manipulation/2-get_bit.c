#include "main.h"
/**
 * get_bit -  a function that returns the value of a bit at a given index.
 * @n: unsigned long integer
 * @index: unsigned integer
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 0;

	int i = 63, j = index;

	while (i >= 0)
	{
		mask = n >> i;
		if (i == j)
		{
			if (mask & 1)
				return (1);
			else
				return (0);
		}
		i--;
	}
	return (-1);
}
