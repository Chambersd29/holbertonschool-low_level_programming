#include "main.h"

/**
 * _isupper - Check if is is an uppercase letter
 * @c: letter to verify
 *
 * Return: 1 is uppercase, 0 in otherwise
 **/

int _isupper(int c)
{
	int result;

	result = isupper(c);

	if (result == 0)
		return (0);
	else
		return (1);
}
