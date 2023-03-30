#include "lists.h"
#include <stdio.h>

/**
 * print_list - this prints the elmenst of thelist
 *
 * @h: the list head poiter
 *
 * Return: size_t
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nill)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		count++;
		h = h->next;
	}
	return (count);
}
