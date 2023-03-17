#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - check - string there are digit
 * @str: array str
 * Return: Always 0 (Success)
 */
int check_num(char *str)
{
	unsigned int count;

	count = 0;
	while (count < strlen(str))
	{
		if (!isdigit(str[count]))
		{
			return (0);
		}
		count++;
	}
	return (1);
}
/**
 * multiply - multiply two numbers
 * @num1: arguments
 * @num2: arguments
 * Return: array of result
 */
int *multiply(char *num1, char *num2)
{
	static int *mul;

	unsigned int i, j, num = 0, r = 0, product = 1;

	mul = malloc((strlen(num1) + strlen(num2) + 50) * sizeof(int));
	if (strlen(num1) > strlen(num2))
	{
		for (i = 0; i < strlen(num2); i++)
		{
			for (j = 0; j < strlen(num1); j++)
			{
				if (i < strlen(num2) - 1)
				{
					product = (num1[j] - 48) * (num2[i] - 48) + r;
					num = product % 10;
					r = product / 10;
				}
				else
				{
					num = product;
				}
				mul[i + j] += num;
			}
		}
	}
	for (i = 0; i < strlen(num1); i++)
	{
		for (j = 0; j < strlen(num2); j++)
		{
			if (i < strlen(num1) - 1)
			{
				product = (num1[i] - 48) * (num2[j] - 48) + r;
				num = product % 10;
				r = product / 10;
				mul[i + j] += num;
			}
			else
			{
				num = product;
			}
			mul[i + j] += num;
		}
	}
	return (mul);
}
/**
 * add_product - adds products of multiplication
 * @argv: arguments
 * Return: result
 */
int *add_product(char *argv[])
{
	int *result;

	static int *mul;

	unsigned int i, sum = 0, num = 0, remainder = 0;

	result = multiply(argv[1], argv[2]);
	mul = malloc((sizeof(result) + 100) * sizeof(int));
	for (i = 0; i < sizeof(result); i++)
	{
		if (i < sizeof(result) - 2)
		{
			sum = result[i] + remainder;
			remainder = sum / 10;
			num = sum % 10;
		}
		else
		{
			num = sum;
		}
		mul[i] = num;
	}
	return (mul);
}
/**
 * main - Entry point
 * @argc: Count arguments
 * @argv: Arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int *mul;

	unsigned int i;

	int *result;

	if (argc < 3 || argc > 3)
	{
		printf("%s\n", "Error");
		exit(98);
	}
	result = add_product(argv);
	mul = malloc((sizeof(result) + 50) * sizeof(int));
	for (i = 1; i < 3; i++)
	{
		if (!check_num(argv[i]))
		{
			printf("%s\n", "Error");
			exit(98);
		}
	}
	for (i = 0; i < sizeof(result) / 2; i++)
	{
		mul[i] = result[sizeof(result) - i - 1];
	}
	for (i = 0; i < sizeof(mul); i++)
	{
		printf("%d", mul[i]);
	}
	printf("\n");
	free(mul);
	return (0);
}
