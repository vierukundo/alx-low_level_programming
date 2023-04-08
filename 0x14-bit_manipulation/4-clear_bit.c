#include "main.h"
/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @index: index of bit starting from right
 * @n: number pointer
 * Return: value of bit set to 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask, m = *n;

	int idex = index, i = 63;

	while (i >= 0)
	{
		mask = 1 << i;
		if (idex == i && ((*n) & mask))
			*n = (*n) ^ mask;
		i--;
	}
	if (m == *n)
		return (-1);
	return (1);
}
