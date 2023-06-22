#include "main.h"
/**
 * _getenv - implementation of getenv
 * @name: variable name
 * Return: a pointer to the value in the environment,
 * or NULL if there is no match.
 */
char *_getenv(const char *name)
{
	char **env;
	size_t name_len = 0;

	if (name == NULL || *name == '\0')
		return (NULL);
	name_len = _strlen(name);
	for (env = environ; *env != NULL; env++)
	{
		if (_strncmp(*env, name, name_len) == 0 && (*env)[name_len] == '=')
			return (*env + name_len + 1);
	}
	return (NULL);
}
