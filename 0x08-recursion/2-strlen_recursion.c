#include "main.h"

/**
 *_strlen_recursion - this count the number of characters
 * in the string.
 *
 * @s: this contain the string
 *
 * Return:integer this return the number of characters
 * in the stirng
 *
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i += _strlen_recursion(s + 1);
	}
	return (i);
}
