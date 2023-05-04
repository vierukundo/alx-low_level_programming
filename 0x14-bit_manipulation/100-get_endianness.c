#include "main.h"
/**
 * get_endianness -  a function that checks the endianness.
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	unsigned int n = 0x01234567;

	char *c = (char *)&n;

	if (*c == 0x67)
		return (1);
	return (0);
}
