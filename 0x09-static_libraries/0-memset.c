#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _memset - copy b to nTH
 * @s: string
 * @b: charcter to copied
 * @n: to nth
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
