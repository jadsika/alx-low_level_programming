#include "main.h"

/**
 * print_binary - Prints the binary representation of an unsigned long integer.
 * @n: The number to be printed in binary.
 *
 * Return: No return value.
 */
void print_binary(unsigned long int n)
{
	/* Check if n is greater than 0 after right-shifting by 1 */
	if (n >> 0)
	{
		/* If n is still greater than 0, recursively call print_binary */
		if (n >> 1)
			print_binary(n >> 1);

		/* Print the least significant bit (LSB) as a character */
		_putchar((n & 1) + '0');
	}
	else
	{
		/* If n is 0, print '0' and stop recursion */
		_putchar('0');
	}
}
