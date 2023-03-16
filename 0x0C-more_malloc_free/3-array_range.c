#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * array_range -  store range of array from the min to max
 * @min: mininum element in the array.
 * @max: maximum element in the array
 * Return: pointers
 */
int *array_range(int min, int max)
{
	int *a;
	int b;

	if (min > max)
		return (NULL);
	a = malloc(sizeof(int) * (max - min + 1));
	if (a == NULL)
		return (NULL);
	for (b = 0; b <= max; b++)
	{
		a[b] = min;
		min++;
	}
	return (a);
}
