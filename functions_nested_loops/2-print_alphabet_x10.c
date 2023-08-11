#include "main.h"

/**
 * print_alphabet_x10 - print ten times the alphabet in lowercase to stout
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int start;
	int ten_times = 1;

	while(ten_time <= 10)
	{
		start = 97;
		
		while (start <= 122)
	{
		_putchar(start);
		start++;
	}
	_putchar('\n');
	ten_time++;
}
