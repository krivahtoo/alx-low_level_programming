#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * @argc: arguments count
 * @argv: arguments array
 *
 * Return: 0 on success, non zero otherwise
 */
int main(int argc, char *argv[])
{
	int n, i = 0;
	void *f;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}

	f = &main;
	for (i = 0; i < n; i++)
	{
		if (i != 0)
			printf(" ");
		printf("%02x", *(unsigned char *)f++);
	}
	printf("\n");

	return (0);
}
