#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a list.
 * @head: Pointer to the pointer to the first node
 * @n: Integer n to add in a new node
 *
 * Return: Address of the new element, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *new_node;

    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
        return (NULL);

    /* Link the first node in head with the new_node */
    if (*head == NULL)
        new_node->next = NULL;
    else
        new_node->next = *head;

    new_node->n = n;
    /* Add the new node at the beginning of the list */
    *head = new_node;

    return (*head);
}
