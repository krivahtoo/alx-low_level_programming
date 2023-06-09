#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_sep - print separator
 *
 * @i: index
 */
void print_sep(int i)
{
	if (i != 0)
		printf(", ");
}

/**
 * print_all - print any values
 *
 * @format: format to print
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0, n = 0;

	va_start(ap, format);
	while (format != NULL && format[i] != '\0')
	{
		char *s;

		switch (format[i])
		{
			case 'c':
				print_sep(n);
				printf("%c", va_arg(ap, int));
				n++;
				break;
			case 'i':
				print_sep(n);
				printf("%d", va_arg(ap, int));
				n++;
				break;
			case 'f':
				print_sep(n);
				printf("%f", va_arg(ap, double));
				n++;
				break;
			case 's':
				print_sep(n);
				s = va_arg(ap, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
				n++;
				break;
		}
		i++;
	}
	va_end(ap);

	printf("\n");
}
