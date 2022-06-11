#include "main.h"
/**
 * times_table - prints times table
 *
 *@n: value from user
 *
 */
void print_times_table(int n)
{
	int i, j, val;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (j != 0)
				_putchar(32);
			val = i * j;
			if (val <= n)
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
			if (j == n)
				continue;
			_putchar(44);
		}
		_putchar('\n');
	}
}
