#include "main.h"
/**
 * _strlen - return the size of the string
 * @s: the string passd to the function
 *return the size of the string
 *_strlen return 16
 */
int _strlen(char *s)/* _strlen  return the size of s or the  string 16 or a*/
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
