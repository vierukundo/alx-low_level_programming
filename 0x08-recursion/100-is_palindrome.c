#include "main.h"
/**
 * find_length - find length of string
 * @s: string
 * Return: length
 */
int find_length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + find_length(s + 1));
}
/**
 * isPal_or_Not - checks if string is pal
 * @s: string
 * @i: iterator
 * @len: length of string
 * Return: 1 if true and 0 if false
 */
int isPal_or_Not(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1 - i) && i < len)
		return (0);
	if (i >= len - 1)
		return (1);
	return (isPal_or_Not(s, i + 1, len));
}
/**
 * is_palindrome - function that returns 1 if a
 * string is a palindrome and 0 if not
 * @s: string
 * Return: 1 if true and 0 if false
 */
int is_palindrome(char *s)
{
	int len;

	len = find_length(s);
	return (isPal_or_Not(s, 0, len));
}
