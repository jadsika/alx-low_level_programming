#include "lists.h"
#include <stdio.h>

/**
 * free_listint - Frees a list.
 *
 * @head: Pointer to the first node of the list.
 *
 * Return: Nothing.
 */
void free_listint(listint_t *head)
{
    listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}

