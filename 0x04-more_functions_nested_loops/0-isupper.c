#include "main.h"
/**
 * _isupper - Tells if a character is uppercase or not
 *
 *@c: The character in ASCII code
 *
 * Return: 1 if uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
