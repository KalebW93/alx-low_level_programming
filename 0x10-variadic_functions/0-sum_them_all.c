#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum up all parmeters
 * @n: the first elment tobe declare in this variadi function
 *
 * Return: sum of all variables
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	va_list ap;
	unsigned int i;

	if (n == 0)
		return (0);
	va_start(ap, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);

}
