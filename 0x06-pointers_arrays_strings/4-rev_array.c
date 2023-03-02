#include "main.h"

/**
 * reverse_array - reverse the array given
 * @a: int array of number
 * @n: int size of array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, b;

	for (i = 0; i < (n - 1) / 2; i++)
	{
		b = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = b;
	}
}
