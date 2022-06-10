#include "main.h"
/**
 * _abs - returns absolute value of an integer
 *
 *@n: The character in ASCII code
 *
 * Return: absolute value of n
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (0);
	}
}
