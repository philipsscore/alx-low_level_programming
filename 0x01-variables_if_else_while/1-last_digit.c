#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
* main - main block
* Return: 1
*/
int main(void)
{

	int n, s;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	s = n % 10;
	if (s > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, s);
	}
	if (s == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, s);
	}
	if (s < 0)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, s);
	}
	return (0);
}
