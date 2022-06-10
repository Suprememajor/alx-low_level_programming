#include "main.h"
/**
 * _isalpha - Tells if a character is alphabetic or not
 *
 *@c: The character in ASCII code
 *
 * Return: 1 if alphabetic, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
