#include <stdio.h>
#include <stdlib.h>

/**
 *main - Prints multiplicartion of two args numbers
 *@argc: The number of command-line arguments
 *@argv: An array containing the comand-line arguments
 *
 *Return: Always returns 0 to indicate success
 **/

int main(int argc, char *argv[])
{
	int num1 = 0, num2 = 0;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		printf("%d\n", num1 * num2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
