#include <stdio.h>

/**
 * main - prints the number ofo argumenet
 *
 * @argc: int number of argument
 *
 * @argv: char arguments
 *
 * Return: int Always 0.
 */
int main(int argc, char *argv[])
{
	char a;
	char *c = &a;
	*c = **argv++;
	printf("%i\n", --argc);
	return (0);
}
