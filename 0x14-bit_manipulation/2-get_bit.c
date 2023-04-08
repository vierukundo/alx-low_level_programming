#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index
 * @index: index of bit starting from right
 * @n: number to convert
 * Return: value of bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i = 2147483648, idex = 31;

	if (n == 0 && index == 0)
		return (0);
	while (i > 0)
	{
		if (n & i)
		{
			while (i > 0)
			{
				if (n & i && idex == index)
					return (1);
				else if (!(n & i) && idex == index)
					return (0);
				i >>= 1;
				idex--;
			}
		}
		i >>= 1;
		idex--;
	}
	return (-1);
}
