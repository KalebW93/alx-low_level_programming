#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint - prints the the values in the singly linked data
 * data structure
 * @h: the linked list to be printed
 *
 * Return: return with the value of data type that is member
 * of size_t type
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
