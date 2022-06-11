#include "main.h"
/**
 * _isdigit - Tells if a character is a digit or not
 *
 *@c: The character in ASCII code
 *
 * Return: 1 if it is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
