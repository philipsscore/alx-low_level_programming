#include "main.h"
#include <stdio.h>
/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
	printf(print_alphabet());
}
void print_alphabet(void)
{

	    char alp = 'a';
	    
	    while (alp <= 'z')
	    {
		    putchar (alp);
		    alp++;
	    }
	    putchar ('\n');
}
