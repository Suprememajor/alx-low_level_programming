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
	int i, j;
	
	i = n % 10;
	j = i + 48;
	_putchar(j);
	return (i);
}
