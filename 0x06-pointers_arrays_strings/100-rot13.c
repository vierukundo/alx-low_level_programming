#include "main.h"
/**
 * rot13 - function that encodes a string using rot13.
 * @n: input value
 * Return: n value
 */
char *rot13(char *n)
{
	int i, j;

	char s1[] = "ABCDEFGHIJKLMabcdefghijklm";

	char s2[] = "NOPQRSTUVWXYZnopqrstuvwxyz";

	char s3[] = "NOPQRSTUVWXYZnopqrstuvwxyz";

	char s4[] = "ABCDEFGHIJKLMabcdefghijklm";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 26; j++)
		{
			if (n[i] == s1[j])
			{
				n[i] = s2[j];
			}
			else if (n[i] == s3[j])
			{
				n[i] = s4[j];
			}
		}
	}
	return (n);
}
