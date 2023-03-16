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
 * num_one - array of num1
 * @str: arguments
 * Return: array
 */
int *num_one(char *str)
{
	int num1[];

	unsigned int i;

	for (i = 0; i < strlen(str); i++)
		num1[i] = atoi(str[i]);
	return (num1);
}
/**
 * num_two - array of num1
 * @str: arguments
 * Return: array
 */
int *num_two(char *str)
{
	int num2[];

	unsigned int i;

	for (i = 0; i < strlen(str); i++)
		num2[i] = atoi(str[i]);
	return (num2);
}
/**
 * multiply - multiply two numbers
 * @argv: arguments
 * Return: array of result
 */
int *multiply(char *argv[])
{
	int num1[];

	int num2[];

	int mul[];

	unsigned int i, j, num = 0, r = 0, product = 1;

	num1 = num_one(argv[1]);
	num2 = num_two(argv[2]);
	if (sizeof(num1) > sizeof(num2))
	{
		for (i = 0; i < sizeof(num2); i++)
		{
			for (j = 0; j < sizeof(num1); j++)
			{
				if (i < sizeof(num2) - 2)
				{
					product = num1[j] * num2[i] + r;
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
	for (i = 0; i < sizeof(num1); i++)
	{
		for (j = 0; j < sizeof(num2); j++)
		{
			if (i < sizeof(num1) - 2)
			{
				product = num2[j] * num1[i] + r;
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
	int result[];

	int mul[];

	unsigned int i, sum = 0, num = 0, remainder = 0;

	result = multiply(argv);
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
}
/**
 * main - Entry point
 * @argc: Count arguments
 * @argv: Arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int mul[];

	unsigned int i;

	int result[];

	if (argc < 3 || argc > 3)
	{
		printf("%s\n", "Error");
		exit(98);
	}
	mul = add_product(argv);
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
	return (0);
}
