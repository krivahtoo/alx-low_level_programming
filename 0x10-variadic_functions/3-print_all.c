#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - print any values
 *
 * @format: format to print
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0;

	va_start(ap, format);

	while (format[i] != '\0')
	{
		char *s;

		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				s = va_arg(ap, char *);

				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
				break;
		}
		i++;
	}

	va_end(ap);

	printf("\n");
}
