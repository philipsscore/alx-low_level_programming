#include "main.h"
#include <stdio.h>

/**
* more_numbers - Print numbers between 0 to 14 incl.
*
* Return: Void.
*/
void more_numbers(void)
{
	int i;
	int x;
	int m;
	int n;

	for (x = 0; x < 10; x++)
	{
		for ( i = 0; i <= 14; i++)
		{
			m = i / 10;
			n = i % 10;
			
			if (i > 9)
			{
				_putchar(m + '0');
			}
			_putchar(n + '0');
		}
		_putchar('\n');
	}
}
