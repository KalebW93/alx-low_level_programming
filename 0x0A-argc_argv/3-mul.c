#include <stdio.h>
#include <stdlib.h>

/**
 *
 * main - mutliply and print result of two numbers
 *
 * @argc - number arguments
 *
 * @argv - arguments
 * 
 * Retrun: alwayst 0.
 */
int main(int argc, char *argv[])
{
	int result;
	int a, b;

	if (argc != 3)
	{
		printf("%s\n"," Error");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	result = a * b;
	printf("%d\n", result);
	return (0);
}
	

