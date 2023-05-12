#include <stdio.h>
#include <unistd.h>

/**
 * main - get PID and PPID
 *
 * Return: Always 0.
 */
int main(void)
{
	pid_t my_pid, parent_pid;

	my_pid = getpid();
	parent_pid = getppid();
	printf("pid:%u ppid:%u\n", my_pid, parent_pid);
	return (0);
}
