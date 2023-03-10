#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _strspn - returns the length of the initial substring
 * @s: string
 * @accept: substring
 * Return: s
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
