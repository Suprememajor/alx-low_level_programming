#include "main.h"

/**
 * swap_int - swaps two values using their pointerss
 * @a: first pointer.
 * @b: second pointer.
 */
void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
