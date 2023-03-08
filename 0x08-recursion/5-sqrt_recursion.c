#include "main.h"

/**
 * check - it check wheather the number has natural square root
 *
 * @a: int potential square root
 *
 * @b: int the square root of this  number to be the found
 *
 * Return: int the square root
 */
int check(int a, int b)
{
	if (a * a == b)
	{
		return (a);
	}
	else if (a * a > b)
	{
		return (-1);
	}
	a = check(a + 1, b);
	return (a);
}
/**
 * _sqrt_recursion - this fucntion is used to find square root
 * of a number
 * @n: int the square root of this number is to be found
 *
 * Return: int the square root of this number is to be returned
 */
int _sqrt_recursion(int n)
{
	n = check(1, n);
	return (n);
}
