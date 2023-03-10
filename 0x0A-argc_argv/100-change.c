#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - number of coin for change
 *
 * @argc: number of arguments
 *
 * @argv: arguments
 *
 * Return: number of coin
 */
int main(int argc, char *argv[])
{
	int changes;
	int cent;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	changes = atoi(argv[argc - 1]);
	if(changes < 0)
	{
		printf("0\n");
		return (0);
	}
	cent = cents(changes);
	printf("%d\n", cent);
	return (0);
}
/**
 * cents - this  calulate the number of cents and return result
 *
 * @a: int changes
 *
 * Return: int number of cents
 */
int cents(int a)
{
	int cents = 0;

	while (a)
	{
		if (a >= 25)
		{
			cents++;
			a -= 25;
			continue;
		}
		else if (a >= 10)
		{
			cents++;
			a -= 10;
			continue;
		}
		else if (a >= 5)
		{
			cents++;
			a -= 5;
			continue;
		}
		else if (a >= 2)
		{
			cents++;
			a -= 2;
			continue;
		}
		else if (a >= 1)
		{
			cents++;
			a -= 1;
			continue;
		}
	}
	return (cents);
}
