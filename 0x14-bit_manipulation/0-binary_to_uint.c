#include "main.h"
/**
 * binary_to_uint - converts binary to int
 * @b: string of binary characters 0 and 1
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, num = 0, base = 1;

	if (b == NULL)
		return (0);
	while (b[i])
	{
		if (b[i] > 49 || b[i] < 48)
			return (0);
		i++;
	}
	for (i = i - 1; i >= 0; i--)
	{
		num += (b[i] - '0') * base;
		base = base * 2;
	}
	return (num);
}
