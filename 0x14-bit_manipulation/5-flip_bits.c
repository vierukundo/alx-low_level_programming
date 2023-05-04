#include "main.h"
/**
 * flip_bits - a function that returns the number of bits you
 * would need to flip to get from one number to another.
 * @n: unsigned long integer
 * @m: unsigned long integer
 * Return: the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int excl_num = n ^ m, bits = 0, mask = 0;

	int i = 0;

	for (i = 63;  i >= 0; i--)
	{
		mask = excl_num >> i;
		if (mask & 1)
			bits++;
	}
	return (bits);
}
