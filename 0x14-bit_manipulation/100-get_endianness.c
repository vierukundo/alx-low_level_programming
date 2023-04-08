#include "main.h"
/**
 * get_endianness - function that checks the endianness
 * Return: 1 for little endian. 0 otherwise
 */
int get_endianness(void)
{
	unsigned int n = 0x78546712;

	char *end = (char *)&n;

	if (*end == 0x12)
		return (1);
	return (0);
}
