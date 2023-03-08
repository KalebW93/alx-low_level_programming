#include "main.h"
#include <stdio.h>

/**
 * is_prime - test the number b weathere a prime or not
 *
 * @a: int used as diveder
 *
 * @b: int testing variable
 *
 * Return: int 0 or 1
 */
int is_prime(int a, int b)
{
	if (b <= 1)
	{
		return (0);
	}
	else if (a != 1 && a < b && (b % a == 0))
	{
		return (0);
	}
	else if (a >=  b)
	{
		return (1);
	}
	a++;
	a = is_prime(a, b);
	return (a);
}
/**
 * is_prime_number - test the  number n is prime
 *
 * @n: int testing variable
 *
 * Return: int 1 or 0.
 */

int is_prime_number(int n)
{
	n = is_prime(1, n);
	return (n);
}
