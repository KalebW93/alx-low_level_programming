#include <stdio.h>
#include <stdlib.h>

/**
 * main - mutliply and print result of two numbers
 * @argc:  number arguments
 *
 * @argv:  arguments
 * Return: alwayst 0.
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc != 3)
	{
		printf("%s\n", " Error");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	printf("%d\n", a * b);
	return (0);
}
