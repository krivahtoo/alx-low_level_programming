#include "main.h"
#include <stdlib.h>

/**
 * bail - exit with status code 98
 */
void bail(void)
{
	_puts("Error");
	exit(98);
}

/**
 * print_ptr - print an int pointer
 *
 * @ptr: pointer to print
 * @len: length of the pointer
 */
void print_ptr(int *ptr, int len)
{
	int i = 0;

	reverse_array(ptr, len);
	while (*ptr == 0)
	{
		len--;
		ptr++;
	}
	for (; i < len; i++)
		print_int(ptr[i]);
	_putchar('\n');
}

/**
 * mul - multiplies to integers
 *
 * @ptr: output pointer
 * @l: left integer
 * @r: right integer
 * @l1: size of left value
 * @l2: size of right value
 */
void mul(int *ptr, char *l, char *r, int l1, int l2)
{
	int i, j, n, m, carry = 0, product = 0;
	int p1 = 0, p2 = 0;

	for (i = 0; i < (l1 + l2); i++)
		ptr[i] = 0;

	for (i = l1 - 1; i >= 0; i--)
	{
		carry = 0;
		n = l[i] - '0';
		p2 = 0;

		for (j = l2 - 1; j >= 0; j--)
		{
			m = r[j] - '0';
			product = n * m + ptr[p1 + p2] + carry;
			carry = product / 10;
			ptr[p1 + p2] = product % 10;
			p2++;
		}
		if (carry > 0)
			ptr[p1 + p2] += carry;

		p1++;
	}
}

/**
 * main - multiplies two positive numbers.
 *
 * @argc: arguments count
 * @argv: arguments array
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
	int *ptr = NULL;
	int l1 = 0, l2 = 0;

	if (argc != 3)
		bail();

	if (_isnumber(argv[1]) == 0 || _isnumber(argv[2]) == 0)
		bail();
	l1 = _strlen(argv[1]);
	l2 = _strlen(argv[2]);
	ptr = malloc((l1 + l2) * sizeof(int));

	if (l1 < l2)
		mul(ptr, argv[1], argv[2], l1, l2);
	else
		mul(ptr, argv[2], argv[1], l2, l1);

	print_ptr(ptr, l1 + l2);

	free(ptr);

	return (0);
}

/**
 * _strlen - calculates the length of a string.
 *
 * @s: string to get length.
 *
 * Return: the length of a string.
 */
int _strlen(char *s)
{
	int n = 0;

	while (*s++ != '\0')
		n++;
	return (n);
}

/**
 * _isnumber - checks a value contain digits only.
 *
 * @ptr: pointer to value to check.
 *
 * Return: 1 if c is a digit, 0 otherwise.
 */
int _isnumber(char *ptr)
{
	while (*ptr != '\0')
	{
		if (*ptr < '0' || *ptr > '9')
			return (0);
		ptr++;
	}
	return (1);
}

/**
 * _puts - prints a string, followed by a new line, to stdout.
 *
 * @str: string to print.
 */
void _puts(char *str)
{
	while (*str != '\0')
		_putchar(*str++);
	_putchar('\n');
}

/**
 * _abs - get absolute of a number
 *
 * @n: number
 *
 * Return: absolute number
 */
int _abs(int n)
{
	if (n < 0)
		return ((-1) * n);
	return (n);
}

/**
 * print_int - print a number.
 *
 * @n: number to print
 */
void print_int(int n)
{
	if (n != 0)
	{
		if (n / 10 != 0)
			print_int(n / 10);
		_putchar('0' + _abs(n % 10));
	}
	else
		_putchar('0');
}

/**
 * reverse_array - reverses the content of an array of integers.
 *
 * @a: array to reverse
 * @n: array length
 */
void reverse_array(int *a, int n)
{
	int i = 0, j = n - 1, c = 0;

	while (i < n / 2)
	{
		c = a[i];
		a[i] = a[j];
		a[j] = c;
		j--;
		i++;
	}
}
