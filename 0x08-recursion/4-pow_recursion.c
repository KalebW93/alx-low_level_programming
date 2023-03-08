#include "main.h"

/**
 * _pow_recursion - the fuction which the caluclate x the power of y
 *
 * @x: the variable that will be multipied by it self again
 * and again
 *
 * @y: the variable number of times that x will be multiplied
 * by it self
 *
 * Return: integer x the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	y--;
	x = x * _pow_recursion(x, y);
	return (x);
}
