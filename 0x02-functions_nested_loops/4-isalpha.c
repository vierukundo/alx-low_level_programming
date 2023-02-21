#include "main.h"
/**
 * _isalpha - Check ia letter is  alpha
 * @c: The ch to be checked
 *
 * Return: 1 if the ch is alpha. 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
