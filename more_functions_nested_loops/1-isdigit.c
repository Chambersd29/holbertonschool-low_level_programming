#include "main.h"

/*
 * _isdigit - Tes for numbers
 * @c: character in check
 *
 * Return:  diffent of 1 if is number and 0 otherwise
 */

int _isdigit(int c)
{
	int result;

	result = isdigit(c);

	if
		(result >=0 && result <=9)
		return (1);
	else
		return (0);
	
}
