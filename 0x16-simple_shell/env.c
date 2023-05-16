#include <stdio.h>
#include <stdlib.h>

extern char **environ;

/**
 */
int main(int ac, char **av, char **env)
{
	(void)ac;
	(void)av;
	printf("env: \t\t%p\nenviron: \t%p\n", (void *)env, (void *)environ);
	return (0);
}
