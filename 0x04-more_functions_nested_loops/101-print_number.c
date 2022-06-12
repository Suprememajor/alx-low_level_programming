#include "main.h"
#include <math.h>
/**
 * print_number - print an integer
 *
 *@n: integer
 */
void print_number(int n)
{
	int order;

	if (n == 0)
		_putchar(48);
	else
	{
		if (n < 0)
		{
			_putchar('-');
			n *= -1;
		}
		order = log10(n);
		order = pow(10, order);
		while (order > 0)
		{
			_putchar(((n / order) % 10) + 48);
			order /= 10;
		}
	}
	_putchar('\n');
}
