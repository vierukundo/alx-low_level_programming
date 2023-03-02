#include "main.h"
/**
 * rev_string - reverse array
 * @n: integer params
 * Return: 0
 */

void rev_string(char *n)
{
	int i = 0;
	int j = 0;
	char temp;

	while (*(n + i) != '\0')
	{
		i++;
	}
	i--;

	for (j = 0; j < i; j++, i--)
	{
		temp = *(n + j);
		*(n + j) = *(n + i);
		*(n + i) = temp;
	}
}
/**
 * infinite_add - add 2 numbers together
 * @n1: text representation of 1st number to add
 * @n2: text representation of 2nd number to add
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: pointer to calling function
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int  i = 0, j = 0, remainder = 0, m = 0;

	int num1, num2, sum;

	while (n1[i] != '\0')
	{
		i++;
	}
	while (n2[j] != '\0')
	{
		j++;
	}
	i--;
	j--;
	if (i >= size_r || j >= size_r)
		return (0);
	while (i >= 0 || j >= 0 || remainder == 1)
	{
		if (i < 0)
			num1 = 0;
		else
			num1 = n1[i] - '0';
		if (j < 0)
			num2 = 0;
		else
			num2 = n2[j] - '0';
		sum = num1 + num2 + remainder;
		if (sum >= 10)
			remainder = 1;
		else
			remainder = 0;
		if (m >= (size_r - 1))
			return (0);
		r[m] = (sum % 10) + '0';
		m++;
		i--;
		j--;
	}
	if (m == size_r)
		return (0);
	r[m] = '\0';
	rev_string(r);
	return (r);
}
