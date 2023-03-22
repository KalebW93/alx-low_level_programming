#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - add two numbers
 * @a: the fist number in the addition
 * @b: the seconde number in the addition
 * Return: the sum of the two number
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - the subtract one number from other
 * @a: the first number in subtraction
 * @b: the second number in subtraction
 * Return: the difference between two numbers
 */
int  op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - mulitply two numbers
 * @a: the first number in mulitpication
 * @b: the second number in mulitipication
 * Return: the muliple of the number
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divid the first number by the second
 * @a: the first number in division
 * @b: the second number in division
 * Return: the division of the two numbers
 */
int op_div(int a, int b)
{
	if (b == a)
	{
		printf ("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - the reamainder
 * @a: the first number
 * @b: the second number
 * Return: the remainder of the division
 */
int op_mod(int a, int b)
{
	if ( b == 0)
	{
		printf ("Error\n");
		exit(100);
	}
	return (a % b);
}
