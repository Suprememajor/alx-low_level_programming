#include "main.h"
/**
 * more_numbers - prints first 14 numbers ten times
 *
 *
 */
void more_numbers(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 48; j < 50; j++)
		{
			for (k = 48; k < 58; k++)
			{
				if (j == 48)
					_putchar(k);
				else if (j == 49 && k < 53)
				{
					_putchar(j);
					_putchar(k);
				}
			}
		}
		_putchar('\n');
	}
}
