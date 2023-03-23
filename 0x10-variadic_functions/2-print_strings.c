#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints the strings passed as arguments
 * @n: number arguments
 * @separator: it stores separating symbol
 *
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(ap, char *));
		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(ap);
	printf("\n");
}

