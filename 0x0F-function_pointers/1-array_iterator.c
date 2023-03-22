#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - excutes the functions using pointer and array
 * @array: array of parameters
 * @size: size of the array
 * @action: function pointer
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t  i;

	if  (array != NULL && action != NULL)
		for (i = 0; i < size; i++)
			action(array[i]);
}
