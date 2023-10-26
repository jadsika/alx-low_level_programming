#include "main.h"

/**
 * clear_bit - Clears a bit at the given index by setting it to 0.
 * @n: A pointer to the number in which to clear the bit.
 * @index: The index at which to clear the bit.
 *
 * Return: 1 if it worked, or -1 on error.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int max = 0x01;

	/* Create a mask with a 0 at the specified index */
	max = ~(max << index);

	/* Check for an error when max becomes 0x00 */
	if (max == 0x00)
		return (-1);

	/* Use bitwise AND to clear the bit at the specified index */
	*n &= max;

	return (1);
}
