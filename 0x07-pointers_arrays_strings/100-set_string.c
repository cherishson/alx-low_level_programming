#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: the pointer to a string
 * @to: the pointer set to s
 */

void set_string(char **s, char *to)
{
	*s = to;
}
