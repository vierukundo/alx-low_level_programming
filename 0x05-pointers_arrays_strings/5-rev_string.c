#include "main.h"
/**
 * rev_string - function that returns the length of a string.
 * @s: string
 * Return: reverse of string (Success)
 */
void rev_string(char *s)
{
	int c, l;

	char *begin, *end, ch;

	l = 0;
	for (c = 0; *(s + c) != '\0'; c++)
	{
		l++;
	}
	begin = s;
	end = s + (l - 1);
	for (c = 0; c < l / 2; c++)
	{
		ch = *end;
		*end = *begin;
		*begin = ch;
		begin++;
		end--;
	}
}
