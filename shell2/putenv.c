#include <stdlib.h>
#include <stdio.h>
#include <string.h>
extern char **environ;
int putenv_custom(char *new_var)
{
	char **new_env, **env;
    if (new_var == NULL || new_var[0] == '\0' || strchr(new_var, '=') == NULL)
    {
        free(new_var);
        return -1;
    }

    env = environ;
    while (*env != NULL)
    {
        if (strncmp(*env, new_var, strchr(new_var, '=') - new_var) == 0)
        {
            free(*env); 
            *env = new_var;
            return 0;
        }
        env++;
    }

    new_env = (char **)realloc(environ, (env - environ + 2) * sizeof(char *));
    if (new_env == NULL)
    {
        free(new_var);
        return -1;
    }
    new_env[env - environ] = new_var;
    new_env[env - environ + 1] = NULL;
    environ = new_env;

    return 0;
}
int main(int ac, char **av)
{
	(void)ac;
	putenv_custom(av[1]);
	while (*environ)
	{
		printf("%s\n", *environ);
		environ++;
	}
	return (0);
}
