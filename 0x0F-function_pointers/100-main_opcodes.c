#include <stdio.h>
/**
 * main - main function
 * @argc: argument count
 * @argv: array of pointers
 * Return: 0
 */
int main(int __attribute__ ((unused)) argc, char __attribute__ ((unused)) **argv)
{
	int i = 1;

	while (i < 6)
	{
		printf("%d", i);
		i++;
	}
	printf("\n");
	return (0);
}
