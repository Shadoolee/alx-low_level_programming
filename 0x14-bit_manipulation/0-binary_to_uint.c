#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unasigned int.
 * @b: A containing the binary representation.
 *
 * Return: The converted number, or 0 if the invaid input or conversion error.
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int dec_val  = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		dec_val = 2 * dec_val + (b[i] - '0');
	}


	return (dec_val);
}
