#include <stdio.h>
#include "main.h"
/**
* main - Entry point
* Return: Always 0 (Success)
*/

int main(void)

{
	char num;
	
	num = 'a';
	while (num <= 'z')
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);

}
