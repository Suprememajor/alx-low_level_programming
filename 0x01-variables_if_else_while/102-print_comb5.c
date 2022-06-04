#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, e, g, h, op1, op2;

	for (h = 48; h < 58; h++)
	{
		for (g = 48; g < 58; g++)
		{
			for (e = 48; e < 58; e++)
			{
				for (i = 48; i < 58; i++)
				{
					op1 = (h * 10) + g;
					op2 = (e * 10) + i;
					if (op1 < op2)
					{
						putchar(h);
						putchar(g);
						putchar(' ');
						putchar(e);
						putchar(i);
						if (h == 57 && g == 56 && e == 57 && i == 57)
							break;
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
