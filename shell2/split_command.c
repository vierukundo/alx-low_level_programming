#include "main.h"
/**
 * split_command - A function that splits the command input
 * @cmd: command input
 * Return: an array of command tokens
 */
char **split_command(char *cmd)
{
	char *cmd_copy, *token, **array_of_tokens;
	const char *delim = " \n";
	int tokens_num = 0, i, j;

	if (cmd == NULL || cmd[0] == '\0')
		return (NULL);
	cmd_copy = _strdup(cmd);
	if (cmd_copy == NULL)
		return (NULL);
	token = _strtok(cmd_copy, delim);
	while (token)
	{
		tokens_num++;
		token = _strtok(NULL, delim);
	}
	array_of_tokens = malloc(sizeof(char *) * (tokens_num + 1));
	if (array_of_tokens == NULL)
	{
		free(cmd_copy);
		return (NULL);
	}
	token = _strtok(cmd, delim);
	for (i = 0; i < tokens_num; i++)
	{
		array_of_tokens[i] = _strdup(token);
		if (array_of_tokens[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(array_of_tokens[j]);
			free(array_of_tokens);
			free(cmd_copy);
			return (NULL);
		}
		token = _strtok(NULL, delim);
	}
	array_of_tokens[i] = NULL;
	free(cmd_copy);
	return (array_of_tokens);
}
