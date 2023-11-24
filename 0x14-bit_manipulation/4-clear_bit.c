#include <stdio.h>
#include "main.h"

/**
 * clear_bit - It sets the value of a bit to 0 at a given index.
 * @n: A pointer to the number in which to set the bit.
 * @index: The index of the bit to set (starting from 0).
 *
 * Return: 1 if successful, or -1 if an error occurred.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
