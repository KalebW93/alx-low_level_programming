#include <stdio.h>

/**
 * main - this accept the parammetr argc
 * and argv prints the program name
 *
 * @argc: int counts the number of argument
 *
 * @argv: char stirng of arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int n;

	n = argc;
	n++;
	printf("%s\n", argv[0]);
	return (0);
}
