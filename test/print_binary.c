#include "main.h"
/**
 * convert_to_binary - convert in put to binary
 * @n: input number
 * Return: pointer to array of binary numbers
 */
char *convert_to_binary(int n)
{
	int len = 0, m = n;

	char *str;
	while (n)
	{
		len++;
		n /= 2;
	}
	str = malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	while (len - 1 >= 0 && m)
	{
		str[len - 1] = (m % 2) + '0';
		m /= 2;
		len--;
	}
	return (str);
}
