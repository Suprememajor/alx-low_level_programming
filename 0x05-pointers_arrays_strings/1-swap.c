#include "main.h"

/**
 * reset_to_98 - takes a pointer to a parameter and updates its value.
 * @n: input integer.
 */
void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
