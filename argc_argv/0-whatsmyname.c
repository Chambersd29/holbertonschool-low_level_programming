#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: the number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Description: Prints the name of the program
 *
 * Return: Always returns 0 to indicarte success
 **/
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
