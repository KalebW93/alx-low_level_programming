#include "main.h"
/**
 * swap the value to variables
 * @a: first int
 * @b: second int
 */
void swap_int(int *a, int *b) /*this function swap number*/
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
