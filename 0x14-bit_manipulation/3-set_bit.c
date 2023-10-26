#include "main.h"

/**
 * set_bit - Sets a bit at the given index to 1.
 * @n: A pointer to the number in which to set the bit.
 * @index: The index at which to set the bit.
 *
 * Return: 1 if it worked, or -1 on error.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	/* Shift 1 to the left by the specified index */
	m = 1 << index;

	/* Use bitwise AND to check if the bit is already set */
	if (*n & m)
		*n ^= m;

	return (1);
}
