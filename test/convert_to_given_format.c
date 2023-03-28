#include "main.h"
/**
 * convert_to_base - converts string to given base
 * @str: binary string
 * @l: length of string
 * @upper: uppercase hexadecimal
 * Return: length
 */
char *convert_to_base(char *str, int l, int n, int upper)
{
	int i, j, num = 0, base = 1, value = 0;

	char *ptr;

	static char *p;

	p = malloc(sizeof(char) * 12);
	ptr = p;
	if (ptr == NULL)
		exit(0);
	j = 10;
	while (l >= 0)
	{
		for (i = n - 1; i >= 0; i--)
		{
			num = num * 10 + (*(str + l - i) - '0');
			l -= n;
		}
		while (num)
		{
			value += (num % 10) * base;
			base = base * 2;
			num /= 10;
		}
		if (n == 4)
		{
			if (value < 10)
				ptr[j] = value + '0';
			else if (value > 10 && upper)
				ptr[j] = value + 55;
			else
				ptr[j] = value + 87;
		}
		else
		{
			ptr[j] = value + '0';
		}
		j--;
	}
	return (p);
}
/**
 * convert_negative - convert negative int to
 * give format. example, %o
 * @upper: is uppercase or not
 * @n: negative int
 * @hex_oct: number of bits in one octal or hexadec
 * Return: length
 */
int convert_negative(int n, int hex_oct, int upper)
{
	int len, num = 0, one = 1, carry = 0, i = 0;
	char str[33], *num2;
	for (len = 0; len < 32; len++)
		str[len] = 49;
	str[32] = '\0';
	i = 31;
	while (n && i >= 0)
	{
		if (n % 2 == 0)
			str[i] = 49;
		else
			str[i] = 48;
		n /= 2;
		i--;
	}
	for (i = 31; i >= 0; i--)
	{
		num = (str[i] - '0') + one + carry;
		if (num == 1)
		{
			str[i] = 49;
			break;
		}
		if (num == 2)
			str[i] = '0';
		if (num == 3)
			str[i] = 49;
		carry = 1;
		one = 0;
	}
	num2 = convert_to_base(str, 31, hex_oct, upper);
	write(1, num2, 12);
	free(num2);
	return (12);
}
/**
 * convert_to_given_format - convert inputs according
 * to format specifiers.
 * @n: input number
 * @format: base number
 * @Buffer: buffer state
 * @is_upper_hex: 1 for upper hex and 0 for lower.
 * Return: state of buffer
 */
int convert_to_given_format(int n, int format, int is_upper_hex)
{
	int len = 0, m, l = 0;

	char *str, sign = '-';
	if (n < 0)
	{
		write(1, &sign, 1);
		n = -n;
	}
	m = n;
	while (n)
	{
		len++;
		n /= format;
	}
	l = len;
	str = malloc((len + 1) * sizeof(char));
	if (str == NULL)
		exit(1);
	str[len] = '\0';
	while (len - 1 >= 0 && m)
	{
		if (format != 16)
		{
			str[len - 1] = (m % format) + '0';
			m /= format;
			len--;
		}
		else if (format == 16 && m)
		{
			if (m % format < 10)
				str[len - 1] = (m % format) + '0';
			else if (m % format > 10 && is_upper_hex)
				str[len - 1] = (m % format) + 55;
			else
				str[len - 1] = (m % format) + 87;
			m /= format;
			len--;
		}
	}
	write (1, str, l);
	free(str);
	return (l);
}
