#include <stdio.h>
#include "main.h"
/**
* main - Entry point
* Return: Always 0 (Success)
*/

void print_alphabet(void)
{
	
	char num = 'a';

	while (num <= 'z')
	{
		putchar(num);
		num++;
	}
	putchar('\n');
}
