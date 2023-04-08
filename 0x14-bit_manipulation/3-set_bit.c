#include "main.h"
/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @index: index of bit starting from right
 * @n: number pointer
 * Return: value of bit set to 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 2147483648, idex = 31, m = *n;

	while (i > 0)
	{
		if (idex == index)
			*n = (*n) | i;
		i >>= 1;
		idex--;
	}
	if (m == *n)
		return (-1);
	return (1);
}
