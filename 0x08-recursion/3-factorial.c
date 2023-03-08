#include "main.h"

/**
 * factorial - this fuction calulate the factorial of the number
 *
 * @n: the number for the factorial
 *
 * Return: integer the facorial of the givern number
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	n = n * factorial(n - 1);
	return (n);
}
