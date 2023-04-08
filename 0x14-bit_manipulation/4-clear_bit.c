#include "main.h"
/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @index: index of bit starting from right
 * @n: number pointer
 * Return: value of bit set to 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (*n) & (~(1 << index));
	return (1);
}
