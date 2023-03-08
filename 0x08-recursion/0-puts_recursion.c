#include "main.h"

/**
 * _puts_recursion - this print the text using recursion
 *
 * @s: this contains the text to be printed
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
