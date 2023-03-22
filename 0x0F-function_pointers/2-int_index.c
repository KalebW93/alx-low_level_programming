#include "function_pointers.h"

/**
 * int_index - is a function that searhes for an integer
 * @array: array of element to be compared
 * @size: size of the array
 * @cmp: points to the function the at comare element
 * Return: -1 ,index,
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, r = 0;

	if (size <= 0)
		return (-1);
	if (array != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			r = cmp(array[i]);
			if (r)
				return (i);
		}

	}
	return (-1);
}
