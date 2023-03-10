#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _strstr - _strstr
 * @haystack: string
 * @needle: needle to look for
 * Return: haystack
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
