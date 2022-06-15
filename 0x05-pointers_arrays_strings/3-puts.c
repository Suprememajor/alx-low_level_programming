#include "main.h"

/**
 * _puts - prints out string to stdout
 * @str: pointer to the start of the string.
 */
void _puts(char *str)
{
	int count = 0;

	for (; count >= 0; count++)
	{
		if (str[count] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[count]);
	}
}
