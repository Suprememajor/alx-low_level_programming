#include "main.h"
/**
 * print_line - print a line of variable length
 *
 *@n: variable that determines length of line
 */
void print_line(int n)
{
	int i;

	if (n > 0)
		for (i = 0; i < n; i++)
			_putchar(95);
	_putchar('\n');
}
