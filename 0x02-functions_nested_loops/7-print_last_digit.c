#include "main.h"
/**
 * print_last_digit - prints and returns last digit of an integer
 *
 *@n: The character in ASCII code
 *
 * Return: last digit of n
 */
int print_last_digit(int n)
{
	int i;
	
	i = n % 10;
	if (i < 0)
	{
		_putchar(-i + 48);
		return (-i);
	}
	else
	{
		_putchar(i + 48);
		return (i);
	}
}
