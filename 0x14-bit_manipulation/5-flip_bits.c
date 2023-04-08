#include "main.h"
/**
 * flip_bits - function that returns the number of bits you
 * would need to flip to get from one number to another.
 * @n: first opreand
 * @m: second operand
 * Return: number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int temp = 0, bits = 0, mask;

	int i = 63;

	temp = n ^ m;
	while (i >= 0)
	{
		mask = temp >> i;
		if (1 & mask)
			bits++;
		i--;
	}
	return (bits);
}
