#include "main.h"
/**
 * times_table - prints times table
 */
void times_table(void)
{
	int i, j, val;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (j == 0)
				_putchar(48);
			val = i * j;
			if (val <= 9)
			{
				if (j != 0)
					_putchar(32);
				_putchar(val + 48);
			}
			else
			{
				_putchar((val / 10) + 48);
				_putchar((val % 10) + 48);
			}
			if (j == 9)
				continue;
			_putchar(44);
		}
		_putchar('\n');
	}
}
