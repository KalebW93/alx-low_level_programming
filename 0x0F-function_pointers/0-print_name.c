#include "function_pointers.h"

/**
 * print_name - prints the name
 * @name: strores the name stirng to be printed
 * @f : a function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
