#include "main.h"
/**
 * jack_bauer - prints and returns last digit of an integer
 *
 * Return: 
 */
void jack_bauer(void)
{
	int i, j, k, l;

	for (i = 48; i <= 50; i++)
	{
		for (j = 48; j < 58; j++)
		{
			if ((i == 50) && (j > 51))
				break;
			for (k = 48; k <= 53; k++)
			{
				for (l = 48; l < 58; l++)
				{
					_putchar(i);
					_putchar(j);
					_putchar(58);
					_putchar(k);
					_putchar(l);
					_putchar('\n');
				}
			}
		}
	}
}
