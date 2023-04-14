#include "main.h"

/**
 */
int check(char *s, int l, int r)
{
	if (s[l] != s[r])
		return (0);
	if (l + 1 == r || l == r)
		return (1);
	return check(s, l + 1, r - 1);
}

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 *
 * @s: string to check
 *
 * Return: 1 if true, 0 otherwise
 */
int is_palindrome(char *s)
{
	int i = 0, n = 0;

	while (s[i++] != '\0')
		n++;

	return check(s, 0, n - 1);
}
