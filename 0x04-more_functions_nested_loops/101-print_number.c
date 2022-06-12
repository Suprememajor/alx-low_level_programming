#include "main.h"
#include <math.h>
/**
 * print_number - print an integer
 *
 *@n: integer
 */
void print_number(int n)
{
	int order, temp;

	if (n == 0)
		_putchar(48);
	else
	{
		if (n < 0)
		{
			_putchar('-');
			n *= -1;
		}
		temp = n;
		order = 1;
		while (temp > 9)
		{
			order *= 10;
			temp /= 10;
		}
		while (order > 0)
		{
			_putchar(((n / order) % 10) + 48);
			order /= 10;
		}
	}
	_putchar('\n');
}
