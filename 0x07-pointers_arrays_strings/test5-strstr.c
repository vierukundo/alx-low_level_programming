#include "main.h"
/**
 * _strstr - function that locates a substring.
 * @haystack: main string
 * @needle: string to search
 * Return: pointer to first occurrence
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, n, m;

	n = 0;
	m = 0;
	while (*haystack != '\0')
	{
		n++;
	}
	n--;
	while (*needle != '\0')
	{
		m++;
	}
	m--;
	for (i = 0; i < n; i++)
	{
		if (haystack[i] == needle[0])
		{
			flag = 0;
			for (j = 0; j < m; j++)
			{
				if (haystack[i + j] != needle[j])
					flag = 1;
					break;
			}
		}
	}
	return (NULL);
}
