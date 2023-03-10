#include <stdio.h>
#include <stdlib.h>
/**
 * main - main
 * @argc: arg count
 * @argv: arg array
 * Return: result or 1 if not succes
 */
int main(int argc, char **argv)
{
	int i, result, j;

	if (argc > 2)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		result = i * j;
		printf("%d\n", result);
	}
	if (argc == 2)
		printf ("%d\n", 0);
	if (argc < 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	return (0);
}
