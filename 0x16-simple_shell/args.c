#include <stdio.h>
#include <unistd.h>

/**
 * main - get PID and PPID
 *
 * Return: Always 0.
 */
int main(int ac, char *av[])
{
	(void)ac;
	while (*av != NULL)
	{
		printf("%s\n", *av);
		av++;
	}
	return (0);
}
