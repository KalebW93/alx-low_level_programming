#include <stdio.h>

/**
 * main - printst every given argument
 *
 * @argc: number of arguments
 *
 * @argv: the arguments
 *
 * Return: Always zero
 */
int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
