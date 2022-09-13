#include "main.h"
#include <stdio.h>
/**
* main - Entry point
* Return: Always 0 (Success)
*/
void print_alphabet(void);
int main(void)
{
	printf("print", print_alphabet());
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
