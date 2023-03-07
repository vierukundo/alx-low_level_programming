#include "main.h"
#include <string.h>
/**
 * _strstr - function that locates a substring.
 * @haystack: main string
 * @needle: string to search
 * Return: pointer to first occurrence
 */
char *_strstr(char *haystack, char *needle)
{
	int j;

	for (; *haystack != '\0'; haystack++)
	{
		for (j = 0; *(needle + j) != '\0'; j++)
		{
			if (*(haystack + j) != *(needle + j))
				break;
		}
		if (*(needle + 1 + j) == '\0')
			return (haystack);
	}
	return (0);
}
