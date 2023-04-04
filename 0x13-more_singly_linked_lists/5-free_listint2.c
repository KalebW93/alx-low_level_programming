#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - free up the linked list
 * @head: location of the pointer
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	while (*head != NULL)
	{
		if (head == NULL)
			return;
		while (*head != NULL)
		{
			ptr = (*head)->next;
			free(*head);
			*head = ptr;
		}
	}
}
