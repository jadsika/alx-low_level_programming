#include "main.h"

/**
 * get_bit - Gets the value of a bit at a given index.
 * @n: The number to get the bit from.
 * @index: The index of the bit to retrieve.
 *
 * Return: The value of the bit at the given index (0 or 1), or -1 if an error occurs.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int max = 0x01;

	/* Shift max to the left by the specified index */
	max <<= index;

	/* Check for an error when max becomes 0 */
	if (max == 0)
		return (-1);

	/* Use bitwise AND to retrieve the bit value */
	if ((n & max))
		return (1);
	else
		return (0);
}
