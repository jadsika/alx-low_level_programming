#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked list.
 * @h: Pointer to the first node
 *
 * Return: Number of elements
 */
size_t listint_len(const listint_t *h)
{
    size_t elements = 0;

    /* Return 0 as the number of elements when h is NULL */
    if (h == NULL)
        return (0);

    while (h != NULL)
    {
        /* Count the number of elements */
        if (h->n != '\0')
            elements++;

        /* Go to the next node */
        h = h->next;
    }

    return (elements);
}
