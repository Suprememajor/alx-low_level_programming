#include "main.h"
/**
 * print_sign - Prints integer sign and returns a value
 *
 *@n: The character in ASCII code
 *
 * Return: 1 if positive, -1 if negative and 0 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
