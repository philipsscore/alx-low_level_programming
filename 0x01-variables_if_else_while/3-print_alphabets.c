#include <stdio.h>

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

		num++

	}



	num = 'A';

	while (num <= 'Z')

	{

		putchar(num);

		num++

	}



	putchar('\n');

	return (0);

}
