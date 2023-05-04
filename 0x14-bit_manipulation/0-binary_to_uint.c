#include "main.h"
/**
 * binary_to_uint - a function that converts a
 * binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: converted number. 0 otherwise
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, index = 0, base = 1;

	unsigned int num = 0;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] < 48 || b[i] > 57)
			return (0);
		index++;
	}
	for (i = index - 1; i >= 0; i--)
	{
		num += (b[i] - 48) * base;
		base = base * 2;
	}
	return (num);
}
