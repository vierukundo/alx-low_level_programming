#include "main.h"
/**
 * append_path - a function that appends command to its path
 * @cmd: address of command
 * Return: 1 if path appended. -1 on error
 */
int append_path(char **cmd)
{
	const char *path;
	char *path_copy, *cmd_path, *file_path;

	path = _getenv("PATH");
	if (path == NULL)
		return (-1);
	path_copy = _strdup(path);
	if (path_copy == NULL)
		return (-1);
	cmd_path = _strtok(path_copy, ":");
	while (cmd_path)
	{
		file_path = malloc(_strlen(cmd_path) + _strlen(*cmd) + 2);
		if (file_path == NULL)
		{
			free(path_copy);
			return (-1);
		}
		_strcpy(file_path, cmd_path);
		_strcat(file_path, "/");
		_strcat(file_path, *cmd);
		if (access(file_path, X_OK) == 0)
		{
			free(*cmd);
			*cmd = _strdup(file_path);
			free(file_path);
			free(path_copy);
			if (*cmd)
				return (1);
			else
				return (-1);
		}
		free(file_path);
		cmd_path = _strtok(NULL, ":");
	}
	free(path_copy);
	if (access(*cmd, X_OK) == 0)
		return (1);
	return (-1);
}
