#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _strchr - searches first occurrence of c
 * @s: string
 * @c: character
 * Return: s
 */
char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
