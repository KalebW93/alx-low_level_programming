#include "main.h"
/**
 * _strlen - return the size of the string
 * @s: the string passd to the function
 *return the size of the string
 */
int _strlen(char *s)/* Return the size s or the  string */
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}