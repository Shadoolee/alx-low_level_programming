#include "main.h"

/**
 * set_string - we sets the value of a pointer to a char
 * @s:  this is a pointer to pointer
 * @to: pointer char
 */

void set_string(char **s, char *to)
{
	*s = to;
}
