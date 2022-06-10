#include "main.h"
/**
 * times_table - prints times table
 */
 void times_table(void)
 {
 	int i, j;
 	
 	for (i = 0; i <= 9; i++)
 	{
 		for (j = 0; j <= 9; j++)
 		{
 			_putchar((i * j) + 48);
 			if (j == 9)
 				continue;
 			_putchar(44);
 		}
 		_putchar('\n');
 	}
 }
