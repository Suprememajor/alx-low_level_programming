#include "main.h"
/**
 * print_number - print an integer
 *
 *@n: integer
 */
void print_number(int n)
{
	int reverse, last_digit;

	reverse = 0;
	while (n > 0)
	{
		last_digit = n % 10
		reverse = (reverse * 10) + (last_digit)
		n /= 10;
	}
	while (reverse > 0)
	{
		last_digit = reverse % 10;
		_putchar(last_digit + 48);
		reverse /= 10;
	}
	_putchar('\n');
}
