#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _strpbrk - _strpbrk
 * @s: string
 * @accept: character
 * Return: s
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
