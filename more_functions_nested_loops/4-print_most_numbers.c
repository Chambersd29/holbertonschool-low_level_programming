#include "main.h"

/**
 * print_most_numbers - Print the numbers since 0 up to 9
 * Description: Prints the nubmers excluding 2 and 4
 * Return: The numbers since 0 up to 9
 **/
void print_most_numbers(void)

{
	int x = 0;

	while (x <= 9)
	{
		if (x == 2 || x == 4)
		{
			x++;
			continue;
		}
		else
		{
			_putchar(x + '0');
		}
		x++;
	}
			_putchar('\n');
}
