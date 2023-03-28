#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/**
 * main - generates random valid passwords for
 * the program 101-crackme.
 *
 * Return: 0 always
 */
int main(void)
{
	char pass[10];
	int i, n = 0;

	srand((unsigned int)(time(NULL)));

	for (i = 0; i < 10; i++)
	{
		n = rand() % 80;
		pass[i] = '*' + n;
	}
	printf("%s\n", pass);
	return (0);
}
