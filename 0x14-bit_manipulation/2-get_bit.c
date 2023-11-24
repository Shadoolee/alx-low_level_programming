#include <stdio.h>
#include "main.h"

/**
 * get_bit - It returns the value of a bit at a given index.
 * @n: The number from which to extract the bit.
 * @index: The index of the bit to retrieve (starting from 0).
 *
 * Return: The value of the bit at the given index, or -1 if an error occurred.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
