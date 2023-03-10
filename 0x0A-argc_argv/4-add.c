#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * check_character - check if character is number
 * @s: string
 * Return: 1 if if not digit and 0 if it is
 */
int check_character(char *s)
{
	long unsigned int i;

	for (i = 0; i < strlen(s); i++)
	{
		if (isdigit(s[i]))
			return (0);
	}
	return (1);
}
/**
 * main - main
 * @argc: count arg
 * @argv: array of strings
 * Return 0 otherwise 1
 */
int main(int argc, char **argv)
{
	int i, sum = 0, n;

	for (i = 1; i < argc; i++)
	{
		n = check_character(argv[i]);
		if (n == 1)
		{
			printf("%s\n", "Error");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
