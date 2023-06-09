#include "3-calc.h"

/**
 * main - main entry point
 *
 * @argc: arguments count
 * @argv: arguments values
 *
 * Return: 0 on success, 98 otherwise
 */
int main(int argc, char *argv[])
{
	int a, b, res;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if (b == 0 && (*argv[2] == '/' || *argv[2] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	f = get_op_func(argv[2]);
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	res = f(a, b);
	printf("%d\n", res);

	return (0);
}
