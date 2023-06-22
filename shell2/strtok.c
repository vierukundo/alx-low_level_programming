#include "main.h"
/**
 * _strtok - function extract tokens from strings
 * @str: string to be splitted
 * @delim: aray of delimeters
 * Return: a pointer to the next token, or NULL if there are no more tokens.
 */
char *_strtok(char *str, const char *delim)
{
	static char *buffer;
	char *p;

	if (str != NULL)
		buffer = str;
	if (buffer == NULL || *buffer == '\0')
		return (NULL);
	/* Skip leading delimiters */
	while (*buffer && custom_strchr(delim, *buffer) != NULL)
		buffer++;
	/* If reached the end of the string, return NULL */
	if (*buffer == '\0')
		return (NULL);
	p = buffer;
	/* Find the next delimiter or end of string */
	while (*buffer && custom_strchr(delim, *buffer) == NULL)
		buffer++;
	if (*buffer)
		*buffer++ = '\0';  /* Replace delimiter with null character */
	else
		buffer = NULL;  /* Set buffer to NULL for the next call */
	return (p);
}
