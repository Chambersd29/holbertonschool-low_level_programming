#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints a text according to the last digit of a number
 * Return: Always (Success)
 **/
int main(void)
{
	int n;
	int lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastd = n % 10;

	printf("Last digit of %d is %d and is ", n, lastd);

	if (lastd > 5)
	{
		printf("greater than 5\n");
	}
	else if (lastd == 0)
	{
		printf("0\n");
	}
	else
	{
		printf("less than 6 and not 0\n");
	}

	return (0);
}
