#include "lists.h"

/**
 * print_listint - Prints all elements of a linked list
 * @h: Pointer to the first node
 *
 * Return: The number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
    size_t node_count = 0; 

    while (h != NULL)
    {
        printf("%d\n", h->n); 
        h = h->next; 
        node_count++; 
    }

    return (node_count); 
}
