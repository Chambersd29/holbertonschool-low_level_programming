#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: The size of the array
 * @c: The char to fill in the array
 *
 * Return: The array filled
 **/

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int counter;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = malloc(size * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}

	counter = 0;
	while (counter < size)
	{
		ptr[counter] = c;
		counter++;
	}
	return (ptr);
}
