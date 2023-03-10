#include <stdio.h>
#include <stdlib.h>

/**
 * main - this function add thae arguments
 *
 * @argc: int number of arguments
 *
 * @argv: string the arguments
 *
 * Return: Always zero;
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int a;
	int i;
	char *flag;
	int s;

	s = argc;
	s++;
	for (i = 1; argv[i]; i++)
	{
		a = strtol(argv[i], &flag, 10);
		if (*flag)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += a;
		}

	}
	printf("%d\n", sum);
	return (0);

}
