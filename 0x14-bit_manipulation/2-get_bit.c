#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index
 * @index: index of bit starting from right
 * @n: number to convert
 * Return: value of bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int num;

	int i = 63, idex = index;

	if (n == 0 && index == 0)
		return (0);
	while (i >= 0)
	{
		num = n >> i;
		if (num & 1)
		{
			if (i == idex)
				return (1);
		}
		else if (i == idex)
			return (0);
		i--;
	}
	return (-1);
}
